from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool
from libc.stdint cimport uint32_t

cdef extern from "part.h":
    cdef enum PartType "PartType":
        _BULKHEAD, 
        _FINS,
        _NOSECONE,
        _PARACHUTE,
        _POINT_MASS,
        _TUBE_BODY,
        _TUBE_INNER  
cpdef enum PyPartType:
    BULKHEAD = 0
    FINS = 1
    NOSECONE = 2
    PARACHUTE = 3
    POINT_MASS = 4
    TUBE_BODY = 5
    TUBE_INNER = 6

cdef extern from "part.h":
    cdef cppclass Part:
        Part(string name, string comments);
        
        void SetName(string name);
        void SetComments(string comments);
        void SetMaterial(Material* material);
        void SetOverrideMass(double mass);
        void SetModelMass();

        string Name() const;
        string Comments() const;
        Material* AssignedMaterial() const;
        double Mass() const;
        PartType Type() const;
        

#base class - never used as a standalone, only in derived classes
cdef class PyPart:
    cdef Part *ptr_part

    def __init__(self, *args):
        pass

    @property
    def name(self):
        return self.ptr_part.Name().decode('utf-8')    
    @name.setter
    def name(self, val):
        self.ptr_part.SetName(val.encode('utf-8'))

    @property
    def comments(self):
        return self.ptr_part.Comments().decode('utf-8')
    @comments.setter
    def comments(self, val):
        self.ptr_part.SetComments(val.encode('utf-8'))

    @property
    def material(self):
        mat = PyMaterial()
        mat = PyMaterial.create(self.ptr_part.AssignedMaterial())
        return mat
    @material.setter
    def material(self, PyMaterial val):    
        self.ptr_part.SetMaterial(val.ptr)

    @property
    def mass(self):
        return self.ptr_part.Mass()
    def override_mass(self, val):
        self.ptr_part.SetOverrideMass(val)
    def model_mass(self):
        self.ptr_part.SetModelMass()


cdef extern from "part_bulkhead.h":
    cdef cppclass Bulkhead:
        Bulkhead(string name, string comments, Material* material,
            double diameter, double thickness, 
            bool mass_override_switch, double mass_override, bool cg_override_switch, double cg_override);

        void SetDiameter(double diameter);
        void SetThickness(double thickness);
        
        double Diameter() const;
        double Thickness() const;

cdef class PyBulkhead(PyPart):
    cdef Bulkhead *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyBulkhead create(Bulkhead* ptr):
        obj = <PyBulkhead>PyBulkhead.__new__(PyBulkhead)
        obj.ptr = ptr
        obj.ptr_part = <Part*>ptr
        return obj  

    @property
    def diameter(self):
        return self.ptr.Diameter()
    @diameter.setter
    def diameter(self, val):
        self.ptr.SetDiameter(val)

    @property
    def thickness(self):
        return self.ptr.Thickness()
    @thickness.setter
    def thickness(self, val):
        self.ptr.SetThickness(val)

cdef extern from "fin_shape.h":
    cdef cppclass FinShape:
        FinShape();

cdef extern from "fin_shape.h":
    cdef cppclass FinShapeTrapezoidal:
        FinShapeTrapezoidal(double chord_root, double chord_tip, double span, double length_sweep);

        void SetChordRoot(double chord_root);
        void SetChordTip(double chord_tip);
        void SetSpan(double span);
        void SetLengthSweep(double length_sweep);

        double ChordRoot() const;
        double ChordTip() const;
        double Span() const;
        double LengthSweep() const;

cdef extern from "aerodynamics.h":
    cdef enum FinCrossSection "FinCrossSection":
        _SQUARE,
        _ROUNDED,
        _AIRFOIL,
        _DOUBLE_WEDGE 
cpdef enum PyFinCrossSection:
    SQUARE = 0
    ROUNDED = 1
    AIRFOIL = 2
    DOUBLE_WEDGE = 3

cdef extern from "part_fins.h":
    cdef cppclass Fins:
        Fins(string name, string comments, Material* material,
        FinShape* shape, const FinCrossSection& cross_section, 
        const int& number, double thickness, double radius_fillet,
        bool mass_override_switch, double mass_override, bool cg_override_switch, double cg_override);

        void SetFinShape(FinShape* shape);
        void SetFinCrossSection(FinCrossSection cross_section);
        void SetNumber(double number);
        void SetThickness(double thickness);
        void SetRadiusFillet(double radius_fillet);

        FinShape* AssignedFinShape() const;
        FinCrossSection CrossSection() const;
        int Number() const;
        double Thickness() const;
        double RadiusFillet() const;

cdef class PyFins(PyPart):
    cdef Fins *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyFins create(Fins* ptr):
        obj = <PyFins>PyFins.__new__(PyFins)
        obj.ptr = ptr
        obj.ptr_part = <Part*>ptr
        return obj  

    @property
    def cross_section(self):
        return <PyFinCrossSection>self.ptr.CrossSection()
    @cross_section.setter
    def cross_section(self, PyFinCrossSection val):
        self.ptr.SetFinCrossSection(<FinCrossSection><int>val)

    @property
    def number(self):
        return self.ptr.Number()
    @number.setter
    def number(self, val):
        self.ptr.SetNumber(val)

    @property
    def thickness(self):
        return self.ptr.Thickness()
    @thickness.setter
    def thickness(self, val):
        self.ptr.SetThickness(val)

    @property
    def radius_fillet(self):
        return self.ptr.RadiusFillet()
    @radius_fillet.setter
    def radius_fillet(self, val):
        self.ptr.SetRadiusFillet(val)

    @property
    def chord_root(self):
        shape_ptr = <FinShapeTrapezoidal*>self.ptr.AssignedFinShape()
        return shape_ptr.ChordRoot()
    @chord_root.setter
    def chord_root(self, val):
        shape_ptr = <FinShapeTrapezoidal*>self.ptr.AssignedFinShape()
        shape_ptr.SetChordRoot(val)

    @property
    def chord_tip(self):
        shape_ptr = <FinShapeTrapezoidal*>self.ptr.AssignedFinShape()
        return shape_ptr.ChordTip()
    @chord_tip.setter
    def chord_tip(self, val):
        shape_ptr = <FinShapeTrapezoidal*>self.ptr.AssignedFinShape()
        shape_ptr.SetChordTip(val)
   
    @property
    def span(self):
        shape_ptr = <FinShapeTrapezoidal*>self.ptr.AssignedFinShape()
        return shape_ptr.Span()
    @span.setter
    def span(self, val):
        shape_ptr = <FinShapeTrapezoidal*>self.ptr.AssignedFinShape()
        shape_ptr.SetSpan(val)
   
    @property
    def length_sweep(self):
        shape_ptr = <FinShapeTrapezoidal*>self.ptr.AssignedFinShape()
        return shape_ptr.LengthSweep()
    @length_sweep.setter
    def length_sweep(self, val):
        shape_ptr = <FinShapeTrapezoidal*>self.ptr.AssignedFinShape()
        shape_ptr.SetLengthSweep(val)


cdef extern from "aerodynamics.h":
    cdef enum NoseconeType "NoseconeType":
        _VON_KARMEN,
        _CONICAL,
        _OGIVE,
        _HAACK
cpdef enum PyNoseconeType:
    VON_KARMEN  = 0
    CONICAL  = 1
    OGIVE  = 2
    HAACK  = 3

cdef extern from "part_nosecone.h":
    cdef cppclass Nosecone:
        Nosecone(string name, string comments, Material* material,
            NoseconeType nose_type, double shape_parameter,
            double length_nose, double length_base, double length_shoulder,
            double thickness, double diameter_outer, double diameter_shoulder,
            bool mass_override_switch, double mass_override, bool cg_override_switch, double cg_override);
        
        void SetNoseType(NoseconeType nose_type);
        void SetShapeParameter(double shape_parameter);
        void SetLengthNose(double length_nose);
        void SetLengthBase(double length_base);
        void SetLengthShoulder(double length_shoulder);
        void SetThickness(double thickness);
        void SetDiameterOuter(double diameter_outer);
        void SetDiameterShoulder(double diameter_shoulder);
 
        NoseconeType NoseType() const;
        double ShapeParameter() const;
        double LengthNose() const;
        double LengthBase() const;
        double LengthShoulder() const;
        double Thickness() const;
        double DiameterOuter() const;
        double DiameterShoulder() const;
        double Radius() const;
        double Length() const;

cdef class PyNosecone(PyPart):
    cdef Nosecone *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyNosecone create(Nosecone* ptr):
        obj = <PyNosecone>PyNosecone.__new__(PyNosecone)
        obj.ptr = ptr
        obj.ptr_part = <Part*>ptr
        return obj    
    
    @property
    def nosecone_type(self):
        return <PyNoseconeType>self.ptr.NoseType()
    @nosecone_type.setter
    def nosecone_type(self, PyNoseconeType val):
        self.ptr.SetNoseType(<NoseconeType><int>val)
    
    @property
    def shape_parameter(self):
        return self.ptr.ShapeParameter()
    @shape_parameter.setter
    def shape_parameter(self, val):
        self.ptr.SetShapeParameter(val)

    @property
    def length_nose(self):
        return self.ptr.LengthNose()
    @length_nose.setter
    def length_nose(self, val):
        self.ptr.SetLengthNose(val)

    @property
    def length_base(self):
        return self.ptr.LengthBase()
    @length_base.setter
    def length_base(self, val):
        self.ptr.SetLengthBase(val)

    @property
    def length_shoulder(self):
        return self.ptr.LengthShoulder()
    @length_shoulder.setter
    def length_shoulder(self, val):
        self.ptr.SetLengthShoulder(val)

    @property
    def thickness(self):
        return self.ptr.Thickness()
    @thickness.setter
    def thickness(self, val):
        self.ptr.SetThickness(val)

    @property
    def diameter_outer(self):
        return self.ptr.DiameterOuter()
    @diameter_outer.setter
    def diameter_outer(self, val):
        self.ptr.SetDiameterOuter(val)

    @property
    def diameter_shoulder(self):
        return self.ptr.DiameterShoulder()
    @diameter_shoulder.setter
    def diameter_shoulder(self, val):
        self.ptr.SetDiameterShoulder(val)

    @property
    def radius(self):
        return self.ptr.Radius()
    @property
    def length(self):
        return self.ptr.Length()


cdef extern from "part_tube_body.h":
    cdef cppclass TubeBody:
        TubeBody(string name, string comments, Material* material,
            double length, double diameter_outer, double thickness,
            bool mass_override_switch, double mass_override, bool cg_override_switch, double cg_override);
             
        void SetLength(double length);
        void SetDiameterOuter(double diameter_outer);
        void SetThickness(double thickness);

        double Length() const;
        double DiameterOuter() const;
        double Thickness() const; 

cdef class PyTubeBody(PyPart):
    cdef TubeBody *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyTubeBody create(TubeBody* ptr):
        obj = <PyTubeBody>PyTubeBody.__new__(PyTubeBody)
        obj.ptr = ptr
        obj.ptr_part = <Part*>ptr
        return obj

    @property
    def length(self):
        return self.ptr.Length()
    @length.setter
    def length(self, val):
        self.ptr.SetLength(val)

    @property
    def diameter_outer(self):
        return self.ptr.DiameterOuter()
    @diameter_outer.setter
    def diameter_outer(self, val):
        self.ptr.SetDiameterOuter(val)

    @property
    def thickness(self):
        return self.ptr.Thickness()
    @thickness.setter
    def thickness(self, val):
        self.ptr.SetThickness(val)
