
import numpy as np
from numpy.linalg import inv

class Kalman():

    def __init__(self, time_k1):

        #Error covariance
        self.P_k1_m = np.matrix([[0,0,0],[0,0,0],[0,0,0]])
        self.P_k1_p = np.matrix([[0,0,0],[0,0,0],[0,0,0]])

        self.x_k1_m = np.matrix([[0],[0],[0]])
        self.x_k1_p = np.matrix([[0],[0],[0]])


        self.identity = np.matrix([[1.0,0,0],[0,1.0,0],[0,0,1.0]])
        self.H_k = np.matrix([[1.0,0,0],[0,0,1.0]])
        self.H_k_T = self.H_k.transpose()

        self.time_k1 = time_k1

    def up_update(self, time_k, altitude_sensor, acceleration_sensor, state_previous):

        if state_previous[1] < 330:
            self.sigma_m = 2.0;
            self.sigma_s = 0.3;
            self.sigma_a = 0.2;
        else:
            self.sigma_m = 2.0;
            self.sigma_s = 30.0;
            self.sigma_a = 0.2;

        #Model and measurement covariance 
        self.Q_k = np.matrix([[0,0,0],[0,0,0],[0,0,self.sigma_m**2]])
        self.R_k = np.matrix([[self.sigma_s**2, 0],[0, self.sigma_a**2]])

        #Calculate delta time
        dT = time_k - self.time_k1
        self.time_k1 = time_k

        #Update measurement matrix 
        z_k = np.matrix([[altitude_sensor],[acceleration_sensor]])
        #z_k = z_k.transpose()

        #Calculate Omega 
        Omega_k = np.matrix([[1.0, dT, dT*dT/2.0],[0, 1.0, dT],[0, 0, 1.0]])
        Omega_k_T = Omega_k.transpose()

        #Update error covariance and kalman gains 
        P_k_m = Omega_k*self.P_k1_p*Omega_k_T + self.Q_k
        K_k = P_k_m*self.H_k_T*np.linalg.inv(self.H_k*P_k_m*self.H_k_T + self.R_k)
        P_k_p = (self.identity - K_k*self.H_k)*P_k_m

        #Update state vectors 
        x_k_m = Omega_k*self.x_k1_p
        x_k_p = x_k_m + K_k*(z_k - (self.H_k*x_k_m))

        #Save error covariance 
        self.P_k1_p = P_k_p 
        self.x_k1_p = x_k_p 

        return x_k_p

    def down_update(self):
        pass