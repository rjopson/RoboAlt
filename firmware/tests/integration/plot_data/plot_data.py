


#csv libraries
import csv 

#Plot libraries
from math import radians
import numpy as np     # installed with matplotlib
import matplotlib.pyplot as plt

def bits_to_engineering_unit(data, input_min, input_max, output_min, output_max):

        input_delta = input_max - input_min
        output_delta = output_max - output_min
        value_delta = data - input_min

        return (value_delta*output_delta)/input_delta + output_min

def readDebugCsv():
    #with open('../Output/processData_output.csv') as csv_file:
    #with open('../../../FlightTests/3DPME_29mm_H128_TriCities_9-2019_v2.csv') as csv_file:
    with open('C:/Users/Jim/Desktop/after_refastening_sled.txt') as csv_file:
        csv_reader = csv.reader(csv_file, delimiter=',')
        time = np.array([])
        altitude = np.array([])
        velocity = np.array([])
        acceleration = np.array([])

        accel_x = np.array([])
        accel_y = np.array([])
        accel_z = np.array([])

        count = 0

        for row in csv_reader:

            count += 1

            if row[0][0] == '*':
                pass
            elif count > 11500:
            #else:
                time = np.append(time, float(row[0]))
                altitude = np.append(altitude, float(row[2]))
                velocity = np.append(velocity, float(row[3]))
                acceleration = np.append(acceleration, float(row[4]))

                accel_x = np.append(accel_x, bits_to_engineering_unit(int(row[9]), -32767, 32768, -16.0, 16.0))
                accel_y = np.append(accel_y, bits_to_engineering_unit(int(row[10]), -32767, 32768, -16.0, 16.0))
                accel_z = np.append(accel_z, bits_to_engineering_unit(int(row[11]), -32767, 32768, -16.0, 16.0))

        results = np.array([time, altitude, velocity, acceleration, accel_x, accel_y, accel_z])
        
    return results

def main():

    results = readDebugCsv()    

    #plt.plot(results[0]/1000.0, results[1]/1000.0)
    #plt.plot(results[0]/1000.0, results[2]/1000.0)
    #plt.plot(results[0]/1000.0, results[3]/1000.0)
    #ax.xaxis.set_major_locator(plt.MaxNLocator(3))

    plt.plot(results[0]/1000.0, results[4], label='accel_x')
    plt.plot(results[0]/1000.0, results[5], label='accel_y')
    plt.plot(results[0]/1000.0, results[6], label='accel_z')
    plt.legend(loc='upper right')
    plt.xlabel('Time (s)')
    plt.ylabel('Acceleration (g\'s)')
    plt.show()

main()