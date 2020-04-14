from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "rocket.h":
    cdef cppclass Rocket:
        Rocket(string name, string comments);
        
        void SetName(string);
        void SetComments(string);
        
        string Name() const;
        string Comments() const;
        vector[Configuration*] Configurations() const;
        vector[Part*] Parts() const;

cdef class PyRocket:
    cdef Rocket *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyRocket create(Rocket* ptr):
        obj = <PyRocket>PyRocket.__new__(PyRocket)
        obj.ptr = ptr
        return obj

    @property
    def name(self):
        return self.ptr.Name().decode('utf-8')    
    @name.setter
    def name(self, val):
        self.ptr.SetName(val.encode('utf-8'))

    @property
    def comments(self):
        return self.ptr.Comments().decode('utf-8')
    @comments.setter
    def comments(self, val):
        self.ptr.SetComments(val.encode('utf-8'))

    @property 
    def configurations(self):
        configs = []
        config_ptrs = self.ptr.Configurations()
        for config_ptr in config_ptrs:
            config = PyConfiguration()
            config = PyConfiguration.create(config_ptr)
            configs.append(config)
        return configs

    @property 
    def parts(self):
        parts = []
        part_ptrs = self.ptr.Parts()
        for part_ptr in part_ptrs:
            part_type = <PyPartType>part_ptr.Type()
            if part_type is PyPartType.BULKHEAD:
                part = PyBulkhead()
                part = PyBulkhead.create(<Bulkhead*>part_ptr)
            elif part_type is PyPartType.FINS:
                part = PyFins()
                part = PyFins.create(<Fins*>part_ptr)
            elif part_type is PyPartType.NOSECONE:
                part = PyNosecone()
                part = PyNosecone.create(<Nosecone*>part_ptr)
            elif part_type is PyPartType.TUBE_BODY:
                part = PyTubeBody()
                part = PyTubeBody.create(<TubeBody*>part_ptr)
            parts.append(part)
        return parts

    def named_attributes(self):
        return {"name":self.name,
                "comments":self.comments}


