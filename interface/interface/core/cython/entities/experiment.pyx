from libcpp.string cimport string
from libcpp.vector cimport vector 
from libcpp cimport bool

cdef extern from "experiment.h":
    cdef cppclass Experiment:
        Experiment(string name, string comments, string date,
        Atmosphere* atmosphere, double height_pad, double angle_launch_rod, double length_launch_rod);

        void AddStage(Stage* stage);
        void RemoveStage(Stage* stage);
        void SetMotor(Motor* motor, Stage* stage);
        void SetMeasuredMassTotal(Stage* stage, double mass);
        void SetMeasuredMassPropellant(Stage* stage, double mass);    

        Motor* AssignedMotor(Stage* stage) const;
        vector[Stage*] Stages() const;
        double MassMeasuredStageTotal(Stage* stage);
        double MassMeasuredPropellant(Stage* stage);

        void GetDataFromFile(Stage* stage, string file_path);
        void GetDataFromAltimeterDownload(Stage* stage, string data_string);    
        void ProcessData();

cdef class PyExperiment(PyFlight):
    cdef Experiment *ptr

    def __init__(self, *args):
        pass

    @staticmethod
    cdef PyExperiment create(Experiment* ptr):
        obj = <PyExperiment>PyExperiment.__new__(PyExperiment)
        obj.ptr = ptr
        obj.ptr_base = <Flight*>ptr
        return obj

    @property
    def stages(self):
        stages = []
        stage_ptrs = self.ptr.Stages()
        for stage_ptr in stage_ptrs:
            stage = PyStage()
            stage = PyStage.create(stage_ptr)
            stages.append(stage)
        return stages

    def get_motor(self, PyStage stage):
        motor = PyMotor()
        motor = PyMotor.create(self.ptr.AssignedMotor(stage.ptr))
        return motor
    def set_motor(self, PyMotor motor, PyStage stage):
        self.ptr.SetMotor(motor.ptr, stage.ptr)        

    def get_data_from_file(self, PyStage stage, file_path):
        self.ptr.GetDataFromFile(stage.ptr, file_path.encode('utf-8'))

    def process_data(self):
        self.ptr.ProcessData()

    def initialize_attributes(self, **kwargs):
        for key in kwargs:
                setattr(self, key, kwargs[key])

    def named_attributes(self):
        return {"name":self.name,
                "comments":self.comments,
                "height_pad":self.height_pad,
                "angle_launch_rod":self.angle_launch_rod,
                "length_launch_rod":self.length_launch_rod}