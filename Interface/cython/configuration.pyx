from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "../core/entities/design/configuration.h":
    cdef cppclass Configuration:
        Configuration(string name, string comments)
        void SetName(string name)
        void SetComments(string comments)
        string Name() const
        string Comments() const   
        
cdef class PyConfiguration:
    cdef Configuration *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyConfiguration create(Configuration* ptr):
        obj = <PyConfiguration>PyConfiguration.__new__(PyConfiguration)
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
