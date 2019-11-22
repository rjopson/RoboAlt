import math
import scipy.integrate

class Rocket():

    def __init__(self, name, comments):
        self.name = name 
        self.comments = comments
        self.configuration_list = []
        self.part_list = []
        self.material_list = []
        self.motor_list = []

    def add_configuration(self, config):
        self.configuration_list.append(config)

    def add_part(self, part):
        if part not in self.part_list:
            self.part_list.append(part)

    def get_part(self, part_name):
        for part in self.part_list:
            if part.name == part_name:
                return part

    def add_material(self, material):
        if material not in self.material_list:
            self.material_list.append(material)

    def get_material(self, material_name):
        for material in self.material_list:
            if material.name == material_name:
                return material            

    def add_motor(self, motor):
        if motor not in self.motor_list:
            self.motor_list.append(motor)

    def get_motor(self, motor_name):
        for motor in self.motor_list:
            if motor.name == motor_name:
                return motor

    def named_attributes(self):
        return {"name":self.name, "comments":self.comments}
       

class Configuration():
    ACTIVE_YES, ACTIVE_NO = range(2)

    def __init__(self, name, rocket, mass_empty_override=0.0, cg_empty_override=0.0, 
                 mass_empty_override_bool=False, cg_empty_override_bool=False, comments=""):
        self.name = name
        self.instance_list = []
        self.simulation_list = []
        self.flight_data_list = []
        self.mass_empty_override = mass_empty_override
        self.mass_empty_override_bool=mass_empty_override_bool
        self.cg_empty_override = cg_empty_override
        self.cg_empty_override_bool = cg_empty_override_bool
        self.comments = comments 

        self.rocket = rocket
        rocket.add_configuration(self)

        if mass_empty_override_bool is True:
            self.mass = self.mass_empty_override

        #Cached properties 
        self._area_body_wet = None
        self._area_fins_wet = None
        self._length = None
        self._diameter_max = None
        self._fineness_ratio = None
        self._area_reference = None

    def named_attributes(self):
        return {"name":self.name, "mass_empty_override":self.mass_empty_override, "mass_empty_override_bool":self.mass_empty_override_bool,
                "cg_empty_override":self.cg_empty_override, "cg_empty_override_bool":self.cg_empty_override_bool,
                "comments":self.comments}

    def add_simulation(self, simulation):
        self.simulation_list.append(simulation)

    def add_flight_data(self, flight_data):
        self.flight_data_list.append(flight_data)

    def calculate_properties(self):   
        self.area_body_wet
        self.area_fins_wet
        self.length
        self.diameter_max
        self.fineness_ratio
        self.area_reference

    def updated_properties(self):
        self._area_body_wet = None
        self._area_fins_wet = None
        self._length = None
        self._diameter_max = None
        self._fineness_ratio = None
        self._area_reference = None

        #Realculate properties 
        self.calculate_properties()
    
    def calculate_derived(self):
        self.area_body_wet = self.get_area_body_wet()
        self.area_fins_wet = self.get_area_fins_wet()
        self.length = self.get_length()
        self.diameter_max = self.get_diameter_max()
        self.fineness_ratio = self.get_fineness_ratio()
        self.area_reference = self.get_area_reference()

    @property 
    def area_body_wet(self):
        if self._area_body_wet is None:
            area = 0
            for instance in self.instance_list:
                if instance.part.part_use == "EXTERNAL":
                    area += instance.part.area_surface
                for child in instance.get_flat_list():
                    if child.part.part_use == "EXTERNAL":
                        area += child.part.area_surface
            self._area_body_wet = area
        return self._area_body_wet
    @property 
    def area_fins_wet(self):
        if self._area_fins_wet is None:
            area = 0
            for instance in self.instance_list:
                for child in instance.get_flat_list():
                    if type(child.part) == Fins:
                        area += instance.part.area_surface
            area_fins_wet = area 
        return self._area_fins_wet
    @property 
    def length(self):
        if self._length is None:
            length = 0
            for instance in self.instance_list:
                if instance.part.part_use == "EXTERNAL":
                    length += instance.part.length
            self._length = length
        return self._length
    @property 
    def diameter_max(self):
        if self._diameter_max is None:
            diameter_list = []
            for instance in self.instance_list:
                if instance.part.part_use == "EXTERNAL":
                    diameter_list.append(instance.part.diameter_outer)                
            self._diameter_max = max(diameter_list)
        return self._diameter_max
    @property 
    def fineness_ratio(self):
        if self._fineness_ratio is None:
            self._fineness_ratio = self.length/self.diameter_max
        return self._fineness_ratio
    @property 
    def area_reference(self):
        if self._area_reference is None:
            self._area_reference = math.pi*(self.diameter_max/2)**2
        return self._area_reference

    def get_instance_locations_from_nose(self):        
        location_from_nose = 0.0
        for instance in self.instance_list:
            #get part distance 
            instance.distance_from_nose = location_from_nose
            #get any children distances 
            for child in instance.get_flat_list():  
                child.distance_from_nose = location_from_nose + child.position_from_parent_top
            #add total length of current part for next iteration
            location_from_nose += instance.part.length

    def add_instance_to_list(self, instance, index=None):
        if index is None:
            self.instance_list.append(instance)
        else:
            self.instance_list.insert(index, instance)

    def remove_instance_from_list(self, instance):
        self.instance_list.remove(instance)

    def get_flat_part_list(self):
        part_list = []
        for instance in self.instance_list:
            part_list.append(instance.part)
            nested_children = instance.get_flat_list()
            for child in nested_children:
                part_list.append(child.part)
        return part_list 

    
class Instance():
    def __init__(self, part, parent, config, index=None, position_type="FOREWARD", position_from=0.0):
        self.part = part
        self.parent = parent
        self.config = config
        self.children = []
        self.position_type = position_type
        self.position_from = position_from 
        self.position_from_nose = None

        #Cached properties 
        self._position_from_parent_top = None

        if parent is not None:
            parent.add_child(self, index)            
        else:
            config.add_instance_to_list(self, index)
            config.get_instance_locations_from_nose()

    def named_attributes(self):
        return {"position_type":self.position_type, "position_from":self.position_from}

    def calculate_properties(self):
        self.position_from_parent_top

    def update_properties(self):
        self._position_from_parent_top = None
        self.calculate_properties()

    @property
    def position_from_parent_top(self):
        if self._position_from_parent_top is None:
           if self.parent is not None:
                if self.position_type == "FOREWARD":
                    self._position_from_parent_top = self.position_from
                elif self.position_type == "AFT":
                    self._position_from_parent_top = self.parent.part.length - self.part.length + self.position_from
                else:
                    self._position_from_parent_top = None
        return self._position_from_parent_top

    def add_child(self, child, index):
        if index is None:
            self.children.append(child)
        else:
            self.children.insert(index, child)

    def remove_child(self, child):
        self.children.remove(child)

    def get_nested_children(self, instance, flat_list):
        flat_list.append(instance)
        if len(instance.children) > 0:
            for child in instance.children:
                self.get_nested_children(child, flat_list)

    def get_flat_list(self):
        flat_list = []
        self.get_nested_children(self, flat_list)
        flat_list.pop(0)
        return flat_list


class Part():
    EXTERNAL, INTERNAL = range(2)
    ROUGH, UNFINISHED, PAINT, POLISH = range(4)
    
    def __init__(self, name, rocket, material,
                 mass_override=0.0, mass_override_bool=False, cg_override=0.0, cg_override_bool=False, comments=""):
        self.name = name
        self.material = material     
        self.mass_override = mass_override
        self.mass_override_bool = mass_override_bool
        self.cg_override = cg_override
        self.cg_override_bool = cg_override_bool     
        self.comments = comments

        rocket.add_part(self)
        rocket.add_material(material)


class TubeBody(Part):
    name_default = 'Body tube'

    def __init__(self, length, diameter_outer, thickness, surface_finish, *args, **kwargs):
        self.part_type = "TubeBody"
        self.length = length
        self.diameter_outer = diameter_outer
        self.thickness = thickness
        self.part_use = "EXTERNAL"
        self.surface_finish = surface_finish
        super(TubeBody, self).__init__(*args, **kwargs)

        #Cached properties 
        self._diameter_inner = None
        self._area_surface = None
        self._volume = None
        self._volume_material = None
        self._area_ref = None
        self._area_planform = None
        self._area_forward = None
        self._area_aft = None

        #Calculate properties 
        self.calculate_properties()

    def named_attributes(self):
        return {"name":self.name, "part_type":self.part_type, "length":self.length, "thickness":self.thickness, "diameter_outer":self.diameter_outer,
                "surface_finish":self.surface_finish,
                "material":self.material.name, "mass_override":self.mass_override, "mass_override_bool":self.mass_override_bool,
                "cg_override":self.cg_override, "cg_override_bool":self.cg_override_bool,
                "comments":self.comments}    
        
    def calculate_properties(self):
        self.diameter_inner
        self.area_surface
        self.volume
        self.volume_material
        self.area_ref
        self.area_planform
        self.area_forward
        self.area_aft

    def updated_properties(self):
        self._area_surface = None
        self._volume = None
        self._volume_material = None
        self._area_ref = None
        self._area_planform = None
        self._area_forward = None
        self._area_aft = None

        #Realculate properties 
        self.calculate_properties()
   
    @property
    def diameter_inner(self):
        if self._diameter_inner is None:
            self._diameter_inner = self.diameter_outer - 2*self.thickness
        return self._diameter_inner
    @property
    def area_surface(self):
        if self._area_surface is None:
            self._area_surface = self.diameter_outer*math.pi*self.length
        return self._area_surface
    @property
    def volume_material(self):
        if self._volume_material is None:
            self._volume_material = self.area_surface*self.thickness
        return self._volume_material
    @property
    def volume(self):
        if self._volume is None:
            self._volume = self.length*math.pi*(self.diameter_outer/2)**2
        return self._volume
    @property
    def area_ref(self):
        if self._area_ref is None:
            self._area_ref = math.pi*(self.diameter_outer/2)**2
        return self._area_ref
    @property
    def area_planform(self):
        if self._area_planform is None:
            self._area_planform = self.diameter_outer*self.length
        return self._area_planform
    @property
    def area_forward(self):
        if self._area_forward is None:
            self._area_forward = self.area_ref 
        return self._area_forward
    @property
    def area_aft(self):
        if self._area_aft is None:
            self._area_aft = self.area_ref
        return self._area_aft


class Nosecone(Part):
    CONICAL, OGIVE, HAACK, VON_KARMEN = range(4)
    name_default = 'Nosecone'

    def __init__(self, nose_type, shape_parameter, length_nose, thickness, diameter_outer, 
                 length_base, diameter_shoulder, length_shoulder, thickness_shoulder, surface_finish, *args, **kwargs):

        self.part_type = "Nosecone"
        self.nose_type = nose_type
        self.shape_parameter = shape_parameter
        self.length_nose = length_nose
        self.thickness = thickness
        self.diameter_outer = diameter_outer
        self.length_base = length_base
        self.diameter_shoulder = diameter_shoulder 
        self.length_shoulder = length_shoulder
        self.thickness_shoulder = thickness_shoulder 
        self.part_use = "EXTERNAL"
        self.surface_finish = surface_finish
        super(Nosecone, self).__init__(*args, **kwargs)    

        #Cached properties 
        self._radius = None
        self._length = None
        self._area_surface = None
        self._area_conical = None
        self._volume_material = None
        self._fineness_ratio = None
        self._area_planform = None
        self._volume = None
        self._area_forward = None
        self._area_aft = None

        #Calculate properties 
        self.calculate_properties()

    def named_attributes(self):
        return {"name":self.name, "part_type":self.part_type, "nose_type":self.nose_type, "shape_parameter":self.shape_parameter,
                "length_nose":self.length_nose, "length_base":self.length_base, "length_shoulder":self.length_shoulder,
                "thickness":self.thickness, "thickness_shoulder":self.thickness_shoulder,
                "diameter_outer":self.diameter_outer, "diameter_shoulder":self.diameter_shoulder,
                "surface_finish":self.surface_finish,
                "material":self.material.name, "mass_override":self.mass_override, "mass_override_bool":self.mass_override_bool,
                "cg_override":self.cg_override, "cg_override_bool":self.cg_override_bool,
                "comments":self.comments}

    def calculate_properties(self):
        self.radius
        self.length
        self.area_surface
        self.area_conical
        self.volume_material
        self.fineness_ratio
        self.area_planform
        self.volume
        self.area_forward
        self.area_aft
    
    def updated_properties(self):
        self._radius = None
        self._length = None
        self._area_surface = None
        self._area_conical = None
        self._volume_material = None
        self._fineness_ratio = None
        self._area_planform = None
        self._volume = None
        self._area_forward = None
        self._area_aft = None

        #Realculate properties 
        self.calculate_properties()
    
    @property
    def radius(self):
        if self._radius is None:
            self._radius = self.diameter_outer/2
        return self._radius
    @property
    def length(self):
        if self._length is None:
            self._length = self.length_nose + self.length_base
        return self._length
    @property
    def area_surface(self):
        if self._area_surface is None:
            area_base = self.diameter_outer*math.pi*self.length_base
            if self.nose_type == "VON_KARMEN":
                self._area_surface = self.area_conical + area_base
        return self._area_surface
    @property
    def area_conical(self):
        if self._area_conical is None:
            self._area_conical = math.pi*self.length_nose*self.radius*math.sqrt(self.radius**2/self.length_nose**2 + 1)
        return self._area_conical
    @property
    def volume_material(self):
        if self._volume_material is None:
            volume_material = self.area_surface*self.thickness
        return self._volume_material
    @property
    def fineness_ratio(self):
        if self._fineness_ratio is None:
            self._fineness_ratio = self.length_nose/self.diameter_outer
        return self._fineness_ratio
    @property
    def area_aft(self):
        if self._area_aft is None:
            self._area_aft = math.pi*(self.diameter_outer/2)**2
        return self._area_aft
    @property    
    def area_planform(self):
        if self._area_planform is None:
            if self.nose_type == "VON_KARMEN":
                self._area_planform = self.diameter_outer*self.length*(2/3)
        return self._area_planform
    @property
    def volume(self):
        if self._volume is None:
            if self.nose_type == "VON_KARMEN":
                f = lambda x:math.pi*(((self.diameter_outer/2)/math.sqrt(math.pi))*math.sqrt(math.acos(1-(2*x)/self.length_nose) - 0.5*math.sin(2*math.acos(1-(2*x)/self.length_nose))))**2
            self._volume = scipy.integrate.quad(f, 0, self.length)[0] + math.pi*(self.diameter_outer/2)**2*self.length_base
        return self._volume
    @property
    def area_forward(self):
        if self._area_forward is None:
            self._area_forward = 0
        return self._area_forward


class Fins(Part):
    SQUARE, ROUNDED, AIRFOIL, DOUBLE_WEDGE = range(4)
    name_default = 'Fin set'

    def __init__(self, fin_shape, number, cross_section, thickness, radius_fillet, surface_finish, *args, **kwargs):
        self.part_type = "Fins"
        self.fin_shape = fin_shape
        self.number = number
        self.cross_section = cross_section
        self.thickness = thickness
        self.radius_fillet = radius_fillet
        
        self.part_use = "EXTERNAL"
        self.surface_finish = surface_finish
        super(Fins, self).__init__(*args, **kwargs)

        #Cached properties 
        self._area_surface = None
        self._volume = None
        self._area_frontal = None
        #self._radius_parent_body = None
        #self._position_from_parent_top = None
        self._length = None
        
        #Calculate properties 
        self.calculate_properties()

    def named_attributes(self):
        return {"name":self.name, "part_type":self.part_type, "number":self.number, 
                "thickness":self.thickness, "cross_section":self.cross_section, "radius_fillet":self.radius_fillet,
                "surface_finish":self.surface_finish,
                "material":self.material.name, "mass_override":self.mass_override, "mass_override_bool":self.mass_override_bool,
                "cg_override":self.cg_override, "cg_override_bool":self.cg_override_bool,
                "comments":self.comments}    

    def calculate_properties(self):
        self.area_surface
        self.volume
        self.area_frontal
        #self.radius_parent_body
        #self.position_from_parent_top
        self.length 

    def updated_properties(self):
        self._area_surface = None
        self._volume = None
        self._area_frontal = None
        #self._radius_parent_body = None
        #self._position_from_parent_top = None
        self._length

        #Recalculate properties 
        self.calculate_properties()

    @property
    def area_surface(self):
        if self._area_surface is None:
            self._area_surface = self.number * self.fin_shape.area_planform * 2
        return self._area_surface
    @property
    def volume(self):
        if self._volume is None:
            self._volume = self.area_surface*self.thickness
        return self._volume
    @property
    def area_frontal(self):
        if self._area_frontal is None:
            self._area_frontal = self.number*self.fin_shape.span*self.thickness
        return self._area_frontal
    #@property
    #def radius_parent_body(self):
    #    if self._radius_parent_body is None:
    #        self._radius_parent_body = self.parent.diameter_outer/2
    #    return self._radius_parent_body
    @property
    def length(self):
        if self._length is None:
            self._length = self.fin_shape.chord_root
        return self._length


class FinShapeTrapezoidal():

    def __init__(self, chord_root, chord_tip, span, length_sweep):
        self.shape_type = "Trapezoidal"
        self.chord_root = chord_root
        self.chord_tip = chord_tip
        self.span = span
        self.length_sweep = length_sweep
        
        #Cached properties 
        self._area_planform = None
        self._MAC = None
        self._MAC_y = None
        self._MAC_LE_from_root_LE = None
        self._angle_sweep_mid = None
        self._aspect_ratio = None
        self._angle_sweep_LE = None

        #Calculate properties 
        self.calculate_properties()

    def named_attributes(self):
        return {"shape_type":self.shape_type, "chord_root":self.chord_root, "chord_tip":self.chord_tip,
                "span":self.span, "length_sweep":self.length_sweep} 

    def calculate_properties(self):
        self.area_planform 
        self.MAC
        self.MAC_y
        self.MAC_LE_from_root_LE
        self.angle_sweep_mid
        self.aspect_ratio
        self.angle_sweep_LE

    def updated_properties(self):
        self._area_planform = None
        self._MAC = None
        self._MAC_y = None
        self._MAC_LE_from_root_LE = None
        self._angle_sweep_mid = None
        self._aspect_ratio = None
        self._angle_sweep_LE = None

        #recalculate properties
        self.calculate_properties()

    @property
    def area_planform(self):
        if self._area_planform is None:
            self._area_planform = ((self.chord_root + self.chord_tip)/2)*self.span
        return self._area_planform
    @property
    def MAC(self):
        if self._MAC is None:
            taper = self.chord_tip/self.chord_root 
            self._MAC = self.chord_root * (2/3) * ((1 + taper + taper**2)/(1 + taper))
        return self._MAC
    @property
    def MAC_y(self):
        if self._MAC_y is None:
            self._MAC_y = (self.span/3)*((self.chord_root + 2*self.chord_tip)/(self.chord_root + self.chord_tip))
        return self._MAC_y
    @property
    def MAC_LE_from_root_LE(self):
        if self._MAC_LE_from_root_LE is None:
            self._MAC_LE_from_root_LE = (self.length_sweep/self.span)*self.MAC_y
        return self._MAC_LE_from_root_LE
    @property
    def angle_sweep_LE(self):
        if self._angle_sweep_LE is None:
            self._angle_sweep_LE = math.degrees(math.atan2(self.length_sweep, self.span))
        return self._angle_sweep_LE
    @property
    def angle_sweep_mid(self):
        if self._angle_sweep_mid is None:
            self._angle_sweep_mid = math.degrees(math.atan2(0.5*(self.chord_tip - self.chord_root) + self.length_sweep, self.span))
        return self._angle_sweep_mid 
    @property
    def aspect_ratio(self):
        if self._aspect_ratio is None:
            self._aspect_ratio = (self.span**2)/self.area_planform
        return self._aspect_ratio


class TubeInner(Part):
    name_default = 'Inner tube'

    def __init__(self, length, diameter_outer, diameter_inner, thickness, *args, **kwargs):
        self.part_type = "TubeInner"
        self.length = length
        self.diameter_outer = diameter_outer
        self.diameter_nneri = diameter_inner
        self.thickness = thickness
        self.part_use = "INTERNAL"
        super(TubeInner, self).__init__(*args, **kwargs)


class Bulkhead(Part):

    name_default = 'Bulkhead'

    def __init__(self, diameter, thickness, *args, **kwargs):
        self.diameter = diameter
        self.thickness = thickness
        self.part_use = "INTERNAL"
        super(Bulkhead, self).__init__(*args, **kwargs)  
        

class Mass(Part):

    name_default = 'Mass'

    def __init__(self, mass_type, mass, length, diameter, *args, **kwargs):
        self.mass_type = mass_type
        self.mass = mass
        self.length = length
        self.diameter = diameter
        self.part_use = "INTERNAL"
        super(Mass, self).__init__(*args, **kwargs)


class Parachute(Part):

    name_default = 'Parachute'

    def __init__(self, diameter=0.0, drag_coefficient=0.80, *args, **kwargs):
        self.part_type = "Parachute"
        self.diameter = diameter
        self.drag_coefficient = drag_coefficient        
        self.part_use = "INTERNAL"
        super(Parachute, self).__init__(*args, **kwargs)
        
        #cached properties
        self._radius = None
        self._area = None 

        #Calculate properties 
        self.calculate_properties()

    def named_attributes(self):
        return {"name":self.name, "part_type":self.part_type, "diameter":self.diameter, "drag_coefficient":self.drag_coefficient,
                "material":self.material.name, "mass_override":self.mass_override, "mass_override_bool":self.mass_override_bool,
                "cg_override":self.cg_override, "cg_override_bool":self.cg_override_bool,
                "comments":self.comments}    

    def calculate_properties(self):
        self.radius
        self.area

    def updated_properties(self):
        self._radius = None
        self._area = None 
        self.calculate_properties()

    @property
    def radius(self):
        if self._radius is None:
            self._radius = self.diameter/2
        return self._radius

    @property
    def area(self):
        if self._area is None:
            self._area = math.pi*(self.radius**2)
        return self._area    

class Material():
    def __init__(self, name, density):
        self.name = name
        self.density = density

    def named_attributes(self):
        return {"name":self.name, "density":self.density}  