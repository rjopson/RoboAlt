
import math
import numpy as np

def drag_coefficient(Re, M, surface_finish, A_ref, 
                     fineness_body, length_body, A_wet_body, 
                     number_fins, A_planform_fins, angle_sweep_LE_fins, A_frontal_fins,
                     fineness_nose, type_nose):

    #skin friction 
    C_f_c = skin_friction_coefficient(Re, M, surface_finish, length_body)
    C_D_f = skin_friction_drag_coefficient_body(C_f_c, fineness_body, A_wet_body, A_ref) + skin_friction_drag_coefficient_fins(C_f_c, number_fins, A_planform_fins, A_ref)
    
    #base drag
    C_D_base = base_drag_coefficient(M)

    #pressure drag
    C_D_pressure_fins = pressure_drag_coefficient_fins_rounded(M, angle_sweep_LE_fins, A_frontal_fins, A_ref)
    C_D_pressure_nose = pressure_drag_coefficient_nose(M, fineness_nose, type_nose)

    return C_D_f + C_D_base + C_D_pressure_fins + C_D_pressure_nose
def surface_roughness_height(surface_finish):
    surface_roughness_height_lib = {'ROUGH':250.0e-6, 'UNFINISHED':90.0e-6, 'PAINT':30.0e-6, 'POLISH':2.0e-6} 
    return surface_roughness_height_lib[surface_finish]
def reynolds_critical(R_s, L):
   
   return 51 * ((R_s/L)**-1.039)
def skin_friction_coefficient(Re, M, surface_finish, L):

    #Calculate critical Reynolds number
    R_s = surface_roughness_height(surface_finish) #surface finish height 
    Re_cr = reynolds_critical(R_s, L)

    #Calculate skin friction coefficient
    if Re < 1e3:
        return 1.48e-2
    if Re < 5e5:
        C_f = 1.328/math.sqrt(Re)
        return C_f
    else:
        C_f = 1/((1.5*math.log(Re) - 5.6)**2) - 1600/Re
        C_f_rough = 0.032*((R_s/L)**0.2)

    #Calculate compressibility corrections
    if M < 1:
        C_f_c = C_f*(1 - 0.09*M**2)
        C_f_c_rough = C_f_rough*(1 - 0.12*M**2)
    else:
        C_f_c = C_f/((1 + 0.15*(M**2))**0.58) #smooth turbulent
        C_f_c_rough = C_f_rough/(1 + 0.18*M**2)

    return max(C_f_c, C_f_c_rough)
def skin_friction_drag_coefficient_fins(C_f_c, number_fins, A_planform, A_ref):
    
    return 2*number_fins*C_f_c*(A_planform/A_ref)
def skin_friction_drag_coefficient_body(C_f_c, fineness, A_wet, A_ref):
    
    return (1 + 0.5/fineness)*C_f_c*(A_wet/A_ref)
def base_drag_coefficient(M):
    if M < 1:
        return 0.12 + 0.13*M**2
    else:
        return 0.25/M
def pressure_drag_coefficient_fins_rounded(M, angle_sweep_LE, A_frontal, A_ref):

    #Leading edge 
    if M < 0.9:
        C_D_LE = (1 - M**2)**(-0.417) - 1
    elif M >= 0.9 and M <= 1:
        C_D_LE = 1 - 1.785*(M-0.9)
    else:
        C_D_LE = 1.214 - 0.502/(M**2) + 0.1095/(M**4)
    C_D_LE = C_D_LE*(math.cos(math.radians(angle_sweep_LE))**2)

    #Trailing edge
    C_D_TE = base_drag_coefficient(M)/2

    #Total
    return (C_D_LE + C_D_TE)*(A_frontal/A_ref)
def pressure_drag_coefficient_nose(M, f_n, type):
    
    #Drag coefficient of nosecone with fineness of 0 
    if M < 1:
        q_stag_q = 1 + (M**2)/4 + (M**4)/40
    else:
        q_stag_q = 1.84 - 0.76/(M**2) + 0.166/(M**4) + 0.035/(M**6)
    C_D_0 = 0.85*q_stag_q

    #Drag coefficient of nosecone with fineness of 3, from test 
    C_D_3_test = pressure_drag_coefficient_test(type, M)

    if C_D_3_test > 0:
        return C_D_0 * (C_D_3_test/C_D_0)**math.log(f_n+1,4)
    else:
        return 0.0
def pressure_drag_coefficient_test(type, M):

    #Data from Stoney zero lift drag data
    if type == "VON_KARMEN":
        M_data_list = [0, 0.9, 0.95, 1.0, 1.05, 1.1, 1.2, 1.4, 1.6, 1.8, 2.0, 3.0, 5.0]
        C_D_data_list = [0, 0, 0.01, 0.025, 0.06, 0.07, 0.075, 0.088, 0.09, 0.08, 0.075, 0.075, 0.075]

    #Linear interpolation of data to our mach number
    return np.interp(M, M_data_list, C_D_data_list)