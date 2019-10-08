import math
import scipy.integrate

class Material():

    def __init__(self, name, density):
        self.name = name
        self.density = density

class Rocket():

    def __init__(self, name, comments):
        self.name = name 
        self.comments = comments
        self.configuration_list = []
        self.part_list = []

    def add_configuration(self, config):
        self.configuration_list.append(config)

    def add_part(self, part):
        self.part_list.append(part)
       

class Configuration():
    ACTIVE_YES, ACTIVE_NO = range(2)

    def __init__(self, name, rocket, mass_empty_override, cg_override, comments):
        self.name = name
        self.part_list = []
        self.simulation_list = []
        self.flight_data_list = []
        self.mass_empty_override = mass_empty_override
        self.mass_empty_override_bool = False
        self.cg_empty_override = cg_override
        self.cg_empty_override_bool = False

        self.mass = self.mass_empty_override

        self.active = Configuration.ACTIVE_YES

        rocket.add_configuration(self)

        #Cached properties 
        self._area_body_wet = None
        self._area_fins_wet = None
        self._length = None
        self._diameter_max = None
        self._fineness_ratio = None
        self._area_reference = None
        
    def add_part(self, part, index):
        self.part_list.insert(index, part)
        self.updated_attributes()
        self.get_part_locations_from_nose()

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

    def updated_attributes(self):
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
        self.get_part_locations_from_nose()

    @property 
    def area_body_wet(self):
        if self._area_body_wet is None:
            area = 0
            for part in self.part_list:
                if part.part_use == "EXTERNAL":
                    area += part.area_surface
            self._area_body_wet = area
        return self._area_body_wet
    @property 
    def area_fins_wet(self):
        if self._area_fins_wet is None:
            area = 0
            for part in self.part_list:
                for child in part.children:
                    if type(child) == Fins:
                        area += part.area_surface

            area_fins_wet = area 
        return self._area_fins_wet
    @property 
    def length(self):
        if self._length is None:
            length = 0
            for part in self.part_list:
                if part.part_use == "EXTERNAL":
                    length += part.length
            self._length = length
        return self._length
    @property 
    def diameter_max(self):
        if self._diameter_max is None:
            diameter_list = []
            for part in self.part_list:
                if part.part_use == "EXTERNAL":
                    diameter_list.append(part.diameter_outer)
                
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
    
    def get_part_locations_from_nose(self):

        location_from_nose = 0.0
        for part in self.part_list:

            #get part distance 
            part.distance_from_nose = location_from_nose

            #get any children distances 
            for child in part.children:        
                child.distance_from_nose = location_from_nose + child.position_from_parent_top

            #add total length of current part for next iteration
            location_from_nose += part.length
class Part():
    EXTERNAL, INTERNAL = range(2)
    ROUGH, UNFINISHED, PAINT, POLISH = range(4)
    
    def __init__(self, name, rocket, material, parent=None,
                 mass_override=0.0, cg_override=0.0, 
                 position_from_parent_type=0.0, position_from_parent_value=0.0, 
                 comments=""):
        self.name = name
        self.material = material        
        self.mass_override = mass_override
        self.mass_override_bool = False
        self.cg_override = cg_override
        self.cg_override_bool = False
        self.position_from_parent_type = position_from_parent_type 
        self.position_from_parent_value = position_from_parent_value        
        self.comments = comments

        self.distance_from_nose = None
        #self.part_use = None
        
        self.add_parent(parent)
        self.children = []

        #Cached
        self._position_from_parent_top = None   
        
        rocket.add_part(self)

        #Calculate properties 
        #self.calculate_generic_part_properties()

    def calculate_generic_part_properties(self):
        self.position_from_parent_top

    def updated_attributes(self):
        self._position_from_parent_top = None
        
        #Realculate properties 
        self.calculate_generic_part_properties()

    @property
    def position_from_parent_top(self):
        if self._position_from_parent_top is None:
            if self.parent != None:
                if self.position_from_parent_type == "FOREWARD":
                    self._position_from_parent_top = self.position_from_parent_value
                elif self.position_from_parent_type == "AFT":
                    self._position_from_parent_top = self.parent.length - self.length + self.position_from_parent_value
            else:
                self._position_from_parent_top = None 
        return self._position_from_parent_top

    def add_parent(self, parent):
        if parent != None:
            self.parent = parent
            parent.children.append(self)
        else:
            self.parent = None

    def add_child(self, child):
        self.children.append(child)
        child.parent = self


class TubeBody(Part):
    name_default = 'Body tube'

    def __init__(self, length, diameter_outer, thickness, surface_finish, config=None, config_index=None, *args, **kwargs):
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
        self.calculate_generic_part_properties()
        config.add_part(self, config_index)

    def named_attributes(self):
        return {"Part Type":self.part_type, "Length":self.length, "Thickness":self.thickness, "Diameter Outer":self.diameter_outer,
                "Part Use":self.part_use, "Surface Finish":self.surface_finish,
                "Mass Override":self.mass_override, "Mass Override Check":self.mass_override_bool,
                "Cg Override":self.cg_override, "Cg Override Check":self.cg_override_bool,
                "Comments":self.comments}    
        
    def calculate_properties(self):
        self.diameter_inner
        self.area_surface
        self.volume
        self.volume_material
        self.area_ref
        self.area_planform
        self.area_forward
        self.area_aft

    def updated_attributes(self):
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

    def __init__(self, nose_type, shape_parameter, length_nose, thickness, diameter_base, 
                 length_base, diameter_shoulder, length_shoulder, thickness_shoulder, surface_finish, 
                 config=None, config_index=None, *args, **kwargs):

        self.part_type = "Nosecone"
        self.nose_type = nose_type
        self.shape_parameter = shape_parameter
        self.length_nose = length_nose
        self.thickness = thickness
        self.diameter_outer = diameter_base
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
        self.calculate_generic_part_properties()
        config.add_part(self, config_index)

    def named_attributes(self):
        return {"Part Type":self.part_type, "Nosecone Type":self.nose_type, "Shape Parameter":self.shape_parameter,
                "Length Nose":self.length_nose, "Length Base":self.length_base, "Length Shoulder":self.length_shoulder,
                "Thickness":self.thickness, "Thickness Shoulder":self.thickness_shoulder,
                "Diameter Outer":self.diameter_outer, "Diameter Shoulder":self.diameter_shoulder,
                "Part Use":self.part_use, "Surface Finish":self.surface_finish,
                "Mass Override":self.mass_override, "Mass Override Check":self.mass_override_bool,
                "Cg Override":self.cg_override, "Cg Override Check":self.cg_override_bool,
                "Comments":self.comments}

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
    
    def updated_attributes(self):
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
        self._radius_parent_body = None
        self._position_from_parent_top = None
        self._length = None
        
        #Calculate properties 
        self.calculate_properties()
        self.calculate_generic_part_properties()

    def named_attributes(self):
        return {"Part Type":self.part_type, "Number":self.number, 
                "Thickness":self.thickness, "Cross Section":self.cross_section, "Fillet Radius":self.radius_fillet,
                "Part Use":self.part_use, "Surface Finish":self.surface_finish,
                "Mass Override":self.mass_override, "Mass Override Check":self.mass_override_bool,
                "Cg Override":self.cg_override, "Cg Override Check":self.cg_override_bool,
                "Comments":self.comments}    

    def calculate_properties(self):
        self.area_surface
        self.volume
        self.area_frontal
        self.radius_parent_body
        self.position_from_parent_top
        self.length 

    def updated_attributes(self):
        self._area_surface = None
        self._volume = None
        self._area_frontal = None
        self._radius_parent_body = None
        self._position_from_parent_top = None
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
    @property
    def radius_parent_body(self):
        if self._radius_parent_body is None:
            self._radius_parent_body = self.parent.diameter_outer/2
        return self._radius_parent_body
    @property
    def length(self):
        if self._length is None:
            self._length = self.fin_shape.chord_root
        return self._length
class FinShapeTrapezoidal():

    def __init__(self, chord_root, chord_tip, span, length_sweep, angle_sweep_LE):
        self.chord_root = chord_root
        self.chord_tip = chord_tip
        self.span = span
        self.length_sweep = length_sweep
        self.angle_sweep_LE = angle_sweep_LE
        
        #Cached properties 
        self._area_planform = None
        self._MAC = None
        self._MAC_y = None
        self._MAC_LE_from_root_LE = None
        self._angle_sweep_mid = None
        self._aspect_ratio = None

        #Calculate properties 
        self.calculate_properties()

    def calculate_properties(self):
        self.area_planform 
        self.MAC
        self.MAC_y
        self.MAC_LE_from_root_LE
        self.angle_sweep_mid
        self.aspect_ratio

    def updated_attributes(self):
        self._area_planform = None
        self._MAC = None
        self._MAC_y = None
        self._MAC_LE_from_root_LE = None
        self._angle_sweep_mid = None
        self._aspect_ratio = None

        #recalculate properties
        self.calculate_properties()

    @property
    def area_planform(self):
        if self._area_planform is None:
            self._area_planform = ((self.chord_root + self.chord_tip)/2)*self.span
        return self._area_planform
    @property
    def MAC(self):
        if self._MAC  is None:
            taper = self.chord_tip/self.chord_root 
            self._MAC = self.chord_root * (2/3) * ((1 + taper + taper**2)/(1 + taper))
        return self._MAC
    @property
    def MAC_y(self):
        if self._MAC_y  is None:
            self._MAC_y = (self.span/3)*((self.chord_root + 2*self.chord_tip)/(self.chord_root + self.chord_tip))
        return self._MAC_y
    @property
    def MAC_LE_from_root_LE(self):
        if self._MAC_LE_from_root_LE  is None:
            self._MAC_LE_from_root_LE = (self.length_sweep/self.span)*self.MAC_y
        return self._MAC_LE_from_root_LE
    @property
    def angle_sweep_mid(self):
        if self._angle_sweep_mid  is None:
            self._angle_sweep_mid = math.degrees(math.atan2(0.5*(self.chord_tip - self.chord_root) + self.length_sweep, self.span))
        return self._angle_sweep_mid 
    @property
    def aspect_ratio(self):
        if self._aspect_ratio  is None:
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
        