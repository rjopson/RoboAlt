


#csv libraries
import csv 

#Plot libraries
from math import radians
import numpy as np     # installed with matplotlib
import matplotlib.pyplot as plt

def readDebugCsv():
    with open('../Output/processData_output.csv') as csv_file:
        csv_reader = csv.reader(csv_file, delimiter=',')
        line_count = 0
        time = np.array([])
        altitude = np.array([])
        velocity = np.array([])
        acceleration = np.array([])

        for row in csv_reader:
            if line_count < 4:
                
                line_count += 1
            else:
                time = np.append(time, float(row[0]))
                altitude = np.append(altitude, float(row[2]))
                velocity = np.append(velocity, float(row[3]))
                acceleration = np.append(acceleration, float(row[4]))
                line_count += 1
        results = np.array([time, altitude, velocity, acceleration])
        
    return results

def main():

    results = readDebugCsv()    

    plt.plot(results[0]/1000.0, results[1]/1000.0)
    plt.plot(results[0]/1000.0, results[2]/1000.0)
    plt.plot(results[0]/1000.0, results[3]/1000.0)
    #ax.xaxis.set_major_locator(plt.MaxNLocator(3))
    plt.show()

main()