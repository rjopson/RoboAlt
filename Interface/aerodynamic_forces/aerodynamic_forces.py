
import math

import aerodynamic_forces.drag_model_open_rocket as drag
import aerodynamic_forces.stability_model_open_rocket as stability
import aerodynamic_forces.atmosphere_model as atmosphere
import entities.rocket_entities as entity

def mach_number(velocity_rocket, speed_sound):
    return velocity_rocket/speed_sound

def reynolds_number(velocity_rocket, length_rocket, viscosity=1.5e-5):
    return (velocity_rocket*length_rocket)/viscosity

def prandtl_factor(mach_number):
    return 1/beta(mach_number)

def dynamic_pressure(density_air, velocity_rocket):
    return 0.5*density_air*(velocity_rocket**2)

def beta(mach_number):
    return math.sqrt(abs(mach_number**2 - 1))

def get_drag(config, position, velocity, alpha, user_events=[]):

    #Calculate atmospheric properties
    atmosphere_flight = atmosphere.StandardAtmosphere()
    density_air = atmosphere_flight.get_density(position)
    speed_sound = atmosphere_flight.get_speed_sound(position)

    #Calculate drag coefficient
    M = mach_number(velocity_rocket=velocity, speed_sound=speed_sound)
    Re = reynolds_number(velocity_rocket=velocity, length_rocket=config.length)

    drag_deployed = get_drag_deployed(config, user_events, density_air, velocity)
    if drag_deployed > 0.0:
        return drag_deployed
    else:
        C_D_axial = drag_coefficient_axial_config(config, M, Re) 
        return 0.5 * density_air * velocity**2 * config.area_reference * C_D_axial

def get_drag_deployed(config, user_events, density_air, velocity):
    
    drag_deployed = 0.0
    for user_event in user_events:
        if user_event.action == "DEPLOY_PARACHUTE":
            if user_event.deployed is True:
                drag_deployed += 0.5 * density_air * velocity**2 * user_event.instance.part.area * user_event.instance.part.drag_coefficient

    return drag_deployed

def drag_coefficient_axial_config(config, M, Re):

    C_D = 0.0
    for part in config.get_flat_part_list():        
        if part.part_use == "EXTERNAL":            
            C_D += drag_coefficient_part(config, part, Re, M)
        else:
            pass
    return C_D

def drag_coefficient_part(config, part, Re, M):
    
    C_D_p = drag_coefficient_pressure_part(config, part, M)
    C_D_b = drag_coefficient_base_part(config, part, M)
    C_D_f = drag_coefficient_friction_part(config, part, Re, M)
    #print(part.name, C_D_p, C_D_b, C_D_f, C_D_p + C_D_b + C_D_f)
    return C_D_p + C_D_b + C_D_f
def drag_coefficient_pressure_part(config, part, M):
    
    if type(part) == entity.Nosecone:
        return drag.pressure_drag_coefficient_nose(M=M, f_n=part.fineness_ratio, type=part.nose_type)
    elif type(part) == entity.Fins:
        return drag.pressure_drag_coefficient_fins_rounded(M=M, angle_sweep_LE=part.fin_shape.angle_sweep_LE, A_frontal=part.area_frontal, A_ref=config.area_reference)
    elif type(part) == entity.TubeBody:
        return 0
    else:
        return None
def drag_coefficient_base_part(config, part, M):
    
    if part.name == config.instance_list[-1].part.name:
        return drag.base_drag_coefficient(M)
    else:
        return 0
def drag_coefficient_friction_part(config, part, Re, M):
    
    #Get skin friction coefficient 
    C_f = drag.skin_friction_coefficient(Re, M, part.surface_finish, config.length)

    #Get drag coefficient for part type 
    if type(part) == entity.TubeBody or type(part) == entity.Nosecone:    
        return drag.skin_friction_drag_coefficient_body(C_f_c=C_f, fineness=config.fineness_ratio, A_wet=part.area_surface, A_ref=config.area_reference)
    elif type(part) == entity.Fins:
        return drag.skin_friction_drag_coefficient_fins(C_f_c=C_f, number_fins=part.number, A_planform=part.fin_shape.area_planform, A_ref=config.area_reference)
    else:
        return None
def normal_force_derivative_coefficient_config(config, M, alpha, beta, gamma):
    
    cn_sum = 0.0
    for part in config.part_list:
        if part.part_use == "EXTERNAL": 
            cn_part = normal_force_derivative_coefficient_part(config=config, part=part, M=M, alpha=alpha, beta=beta, gamma=gamma)
            cn_sum += cn_part 
            #print(part.name, cn_part)

            for child in part.children:
                cn_part = normal_force_derivative_coefficient_part(config=config, part=child, M=M, alpha=alpha, beta=beta, gamma=gamma)
                cn_sum += cn_part 
                #print(child.name, cn_part)

    return cn_sum
def normal_force_derivative_coefficient_part(config, part, M, alpha, beta, gamma):

    if type(part) == entity.TubeBody or type(part) == entity.Nosecone:   
        return stability.normal_force_coefficient_derivative_body(A_ref=config.area_reference, A_L=part.area_aft, A_0=part.area_forward, A_planform=part.area_planform, alpha=alpha)
    elif type(part) == entity.Fins:
        return stability.normal_force_coefficient_derivative_fins(A_ref=config.area_reference, A_fin=part.fin_shape.area_planform, span=part.fin_shape.span, angle_sweep_mid=part.fin_shape.angle_sweep_mid, N=part.number, r_t=part.radius_parent_body, M=M, beta=beta, gamma=gamma, alpha=alpha)
    else:
        return None
def center_pressure_location_config(config, M, alpha, beta, gamma):
    
    cn_sum = 0.0 
    cp_moment_sum = 0.0
    for part in config.part_list:
        if part.part_use == "EXTERNAL": 
            cn_part = normal_force_derivative_coefficient_part(config=config, part=part, M=M, alpha=alpha, beta=beta, gamma=gamma)
            cp_dist = center_pressure_location_part(config=config, part=part, M=M, beta=beta)
            cn_sum += cn_part
            cp_moment_sum += cn_part*cp_dist     
            #print(part.name, cp_dist)

            for child in part.children:
                cn_part = normal_force_derivative_coefficient_part(config=config, part=child, M=M, alpha=alpha, beta=beta, gamma=gamma)
                cp_dist = center_pressure_location_part(config=config, part=child, M=M, beta=beta)
                cn_sum += cn_part
                cp_moment_sum += cn_part*cp_dist   
                #print(child.name, cp_dist)

    return cp_moment_sum/cn_sum
def center_pressure_location_part(config, part, M, beta):
    
    if type(part) == entity.Nosecone:  
        return part.distance_from_nose + stability.center_pressure_location_body(L=part.length, A_L=part.area_aft, V=part.volume)    
    elif type(part) == entity.TubeBody:
        return part.distance_from_nose + part.length/2
    elif type(part) == entity.Fins:
        
        #normalized by chord length 
        distance_normalized = stability.center_pressure_location_fin(M=M, beta=beta, AR=part.fin_shape.aspect_ratio)

        #add distance from fincan top, distance from fin LE root to MAC
        return part.distance_from_nose + distance_normalized*part.fin_shape.MAC + part.fin_shape.MAC_LE_from_root_LE
    else:
        return None 


