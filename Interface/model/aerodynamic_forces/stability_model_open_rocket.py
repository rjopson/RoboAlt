
import math
import numpy as np

def normal_force_coefficient_derivative_body(A_ref, A_L, A_0, A_planform, alpha):    

    alpha_rad = math.radians(alpha) #convert aoa to radians

    if alpha_rad != 0:
        sine_term = math.sin(alpha_rad)/alpha_rad
        correction_term = normal_force_coefficient_deriviative_body_lift_alpha_correction(A_ref, A_planform, alpha_rad)
    else:
        sine_term = 1
        correction_term = 0
    return (2/A_ref)*(A_L - A_0)*(sine_term) + correction_term
def normal_force_coefficient_deriviative_body_lift_alpha_correction(A_ref, A_planform, alpha):

    return 1.1 *((A_planform)/A_ref)*((math.sin(alpha)**2)/alpha)
def pitching_moment_coefficient_derivative_body(A_ref, d, L, A_L, V, alpha):

    alpha = math.radians(alpha)

    if alpha != 0:
        sine_term = math.sin(alpha)/alpha
    else:
        sine_term = 1
    return (2/(A_ref*d))*(L*A_L - V)*(sine_term)
def normal_force_coefficient_derivative_fins(A_ref, A_fin, span, angle_sweep_mid, N, r_t, M, beta, gamma, alpha):

    #aspect ratio 
    AR = span**2/A_fin

    #Find C_N of 1 fin...
    M_sub = 0.9
    M_super = 1.3

    #subsonic 
    if M < M_sub:
        C_N_1 = normal_force_coefficient_derivatve_fins_subsonic(AR, A_fin, A_ref, beta, angle_sweep_mid)

    #linearinterpolation between .9, 1.5 (Buseman goes to infinity close to 1 b/c of beta term)
    elif M >= M_sub and M <= M_super:   
        beta_sub = math.sqrt(abs(M_sub**2 - 1))
        beta_super = math.sqrt(abs(M_super**2 - 1))

        #polynomial boundaries 
        y0 = normal_force_coefficient_derivatve_fins_subsonic(AR, A_fin, A_ref, beta_sub, angle_sweep_mid)
        y1 = normal_force_coefficient_derivative_fins_supersonic(A_fin, A_ref, alpha, M_super, beta_super, gamma)
        dy0_dm = 0
        dy1_dm = 0 

        #solve system of equations 
        a = np.array([[M_sub**3, M_sub**2, M_sub, 1], [M_super**3, M_super**2, M_super, 1],
                      [3*M_sub**2, 2*M_sub, 1, 0], [3*M_super**2, 2*M_super, 1, 0]])
        
        b = np.array([y0, y1, dy0_dm, dy1_dm])
        coeff = np.linalg.solve(a, b)

        #calculate C_N_1 using polynomial 
        C_N_1 = coeff[0]*M**3 + coeff[1]*M**2 + coeff[2]*M + coeff[3]

    else:
        C_N_1 = normal_force_coefficient_derivative_fins_supersonic(A_fin, A_ref, alpha, M, beta, gamma)

    #Find C_N of all fins
    interference_effect = [1, 1, 1, 1, 1, 0.948, 0.913, 0.854, 0.810, 0.750]
    C_N_f = (N/2)*C_N_1*interference_effect[N]

    #Add interference effect
    return (1 + (r_t/(span + r_t)))*C_N_f
def normal_force_coefficient_derivatve_fins_subsonic(AR, A_fin, A_ref, beta, angle_sweep_mid):
    #C_N_1 = (2*math.pi*(span**2/A_ref))/(1 + math.sqrt(1 + ((beta*span**2)/(A_fin*math.cos(math.radians(angle_sweep_mid))))**2))
    #C_N_1 = (1/A_ref)*(2*math.pi*(span**2))/(1 + math.sqrt(1 + beta*(span**2/(A_fin*math.cos(math.radians(angle_sweep_mid))))**2))
    return (4*math.pi*AR*(A_fin/A_ref))/(2 + math.sqrt(4 + ((2*beta*AR)/math.cos(math.radians(angle_sweep_mid)))**2))
def normal_force_coefficient_derivative_fins_supersonic(A_fin, A_ref, alpha, M, beta, gamma):
    alpha = math.radians(alpha)
    K1 = 2/beta
    K2 = ((gamma+1)*(M**4) - 4*(beta**2))/(4*(beta**4))
    K3 = ((gamma+1)*(M**8) + (2*(gamma**2) - 7*gamma-5)*(M**6) + 10*(gamma+1)*(M**4) + 8)/(6*(beta**7))

    return (A_fin/A_ref)*(K1 + K2*alpha + K3*(alpha**2))
def center_pressure_location_body(L, A_L, V):

    #(L*A_L - V)/(A_L - A_0)
    return L - V/A_L

def center_pressure_location_fin(M, beta, AR):

    #normalized by chord length
    poly_fit_constants = polynomial_constants_fin_cp_interpolation(AR)

    if M <= 0.5:
        return 0.25
    
    elif M >= 2.0:
        return (AR*beta - 0.67)/(2*AR*beta - 1)

    else:
        x = 1.0
        sum = 0
        for constant in poly_fit_constants:
            sum += constant * x
            x *= M
        return sum   
def polynomial_constants_fin_cp_interpolation(AR):

    denominator = (1 - 3.4641*AR)**2
    constants = list(range(6))
    constants[5] = (-1.58025 * (-0.728769 + AR) * (-0.192105 + AR)) / denominator
    constants[4] = (12.8395 * (-0.725688 + AR) * (-0.19292 + AR)) / denominator
    constants[3] = (-39.5062 * (-0.72074 + AR) * (-0.194245 + AR)) / denominator
    constants[2] = (55.3086 * (-0.711482 + AR) * (-0.196772 + AR)) / denominator
    constants[1] = (-31.6049 * (-0.705375 + AR) * (-0.198476 + AR)) / denominator
    constants[0] = (9.16049 * (-0.588838 + AR) * (-0.20624 + AR)) / denominator

    return constants