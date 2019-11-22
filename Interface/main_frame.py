
#import wx
import time
import numpy as np
import model.file_io as file_io
import model.entities.rocket_entities as entities
import model.test_rocket as test_rocket
#import matplotlib.pyplot as plt

'''
class MainFrame(wx.Frame):

    def __init__(self,parent,id):
        frame = wx.Frame.__init__(self,parent,id,'Plot test',size=(300,200))
        panel = wx.Panel(self)

        rkt = test_rocket.create_rocket()

        sim_time = rkt.configuration_list[0].simulation_list[0].time
        sim_alt = rkt.configuration_list[0].simulation_list[0].altitude 
        #
        flight_time = rkt.configuration_list[0].flight_data_list[0].derived_data.time
        flight_alt_filter = rkt.configuration_list[0].flight_data_list[0].derived_data.altitude
        flight_alt_baro = rkt.configuration_list[0].flight_data_list[0].derived_data.altitude_baro
        #
        plt.plot(flight_time, flight_alt_filter, label='filter')
        plt.plot(flight_time, flight_alt_baro, label='baro')
        plt.plot(sim_time, sim_alt, label='sim')
        plt.ylabel('Result')
        plt.legend(loc='upper left')
        plt.show()

'''

if __name__ == '__main__':
    #app = wx.App()
    #frame = MainFrame(parent=None,id=-1)
    #frame.Show()
    #app.MainLoop()
    
    #rkt = test_rocket.create_rocket()    
    #file_io.WriteRocketHDF5("", rkt)

    rkt = file_io.ReadRocketHDF5("3DPME_29mm_v1.h5") 

    length = 3000
    data_sets = 20
    flights = 2

    start = time.time()
    for i in range(0,flights):
        for j in range(0,data_sets):
            test = np.full(length,0.0)
       
    #print(time.time() - start)
    

    print("Complete")
    #print(rkt.configuration_list[0].simulation_list[0].time)