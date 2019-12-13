
#import wx
import time
import numpy as np
import matplotlib.pyplot as plt

import core.file_io as file_io
import core.entities.rocket_entities as entities
import core.test_rocket as test_rocket


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
    
    #start = time.time()
    #rkt = test_rocket.create_rocket()    
    #file_io.WriteRocketHDF5(rkt.name+'.h5', rkt)

    rkt = file_io.ReadRocketHDF5("3DPME_29mm_v1.h5").rocket

    #print(rkt.configuration_list[0].simulation_list[0].velocity_max)
       
    #print(time.time() - start)

    sim_time = rkt.configuration_list[1].simulation_list[0].time
    sim_alt = rkt.configuration_list[1].simulation_list[0].altitude     
    flight_time = rkt.configuration_list[1].flight_data_list[0].derived_data.time
    flight_alt_filter = rkt.configuration_list[1].flight_data_list[0].derived_data.altitude
    flight_alt_baro = rkt.configuration_list[1].flight_data_list[0].derived_data.altitude_baro

    sim_velocity = rkt.configuration_list[0].simulation_list[0].velocity     
    flight_velocity = rkt.configuration_list[0].flight_data_list[0].derived_data.velocity

    sim_accel= rkt.configuration_list[0].simulation_list[0].acceleration     
    flight_accel = rkt.configuration_list[0].flight_data_list[0].derived_data.acceleration
    
    plt.plot(flight_time, flight_alt_filter, label='filter')
    plt.plot(flight_time, flight_alt_baro, label='baro')
    plt.plot(sim_time, sim_alt, label='sim')
    #plt.plot(flight_time, flight_velocity, label='baro')
    #plt.plot(sim_time, sim_velocity, label='sim')
    #plt.plot(flight_time, flight_accel, label='baro')
    #plt.plot(sim_time, sim_accel, label='sim')
    plt.ylabel('Result')
    plt.legend(loc='upper left')
    plt.show()
    

    print("Complete")
    #print(rkt.configuration_list[0].simulation_list[0].time)