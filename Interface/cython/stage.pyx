from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "../core/entities/design/stage.h":
    cdef cppclass Stage:
        Stage(string name, string comments)
        void SetName(string name)
        void SetComments(string comments)
        string Name() const
        string Comments() const 
        
cdef class PyStage:
    cdef Stage *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyStage create(Stage* ptr):
        obj = <PyStage>PyStage.__new__(PyStage)
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
