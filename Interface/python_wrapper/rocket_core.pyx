from libcpp.string cimport string
from libcpp.vector cimport vector 

cdef extern from "../core/database.h":
    cdef cppclass Database:
        Database()   
        void CreateRocket(string, string)
        Rocket* GetRocket(int)
        
    cdef cppclass Rocket:
        Rocket(string, string)
        string name_
        string comments_
        
cdef class PyRocket:    
    cdef Database *thisptr
    
    def __cinit__(self):    
        self.thisptr = new Database()
        
    def __dealloc__(self):
        del self.thisptr
    
    def create_rocket(self, name, comments):
        self.thisptr.CreateRocket(name.encode('utf-8'), comments.encode('utf-8'))
        
    def get_rocket_name(self, id):
        return self.thisptr.GetRocket(id).name_.decode('utf-8')