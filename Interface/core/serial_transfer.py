

import serial
from serial.tools import list_ports

import core.entities.event_entities as event_entities


class SerialTransfer():

    def __init__(self):
        
        self.available = False 
        self.comport = self.get_comport()

        if self.available:
            self.alt_serial = serial.Serial(port=self.comport, baudrate=38400, bytesize=8, parity='N', timeout=2)
            print(self.alt_serial.is_open)
            print(self.comport)
        else:
            print("Could not connect")

        #print(self.get_live_data_line())
        
        #self.alt_serial.close()

    def get_live_data_line(self):
        self.write_command('@')
        return self.read_line()

    def write_settings(self, settings):
        settings_string = '$'+str(settings.altitude_main)+ \
        ','+str(settings.event_apo)+','+str(settings.event_main)+','+str(settings.event_third)+ \
        ','+str(settings.delay_apo)+','+str(settings.delay_main)+','+str(settings.delay_third)+ \
        ','+str(settings.buzzer_switch)
        self.write_command(settings_string)

    def get_current_programming(self):
        self.write_command('!')
        data_string = self.read_line()
        data = data_string.split()

        altitude_main = data[0]
        event_apo = data[1]
        event_main = data[2]
        event_third = data[3]
        delay_apo = data[4]
        delay_main = data[5]
        delay_third = data[6]
        buzzer_switch = data[7]

        user_settings = event_entities.FlightUserSettings(altitude_main, event_apo, event_main, event_third, 
                                                          delay_apo, delay_main, delay_third, buzzer_switch)
        return user_settings

    def get_flight_data(self, flight_id):
        
        self.write_command('^,'+str(flight_id))

        data_string_list = []

        while True:
            data_line = self.read_line()
            if data_line:
                data_string_list.append(data_line)
            else:
                break

        return data_string_list[:-2]

    def disconnect(self):
        pass

    def write_command(self, command):
        self.alt_serial.write(bytes(command, encoding='ascii'))

    def read_line(self):
        return self.alt_serial.readline().decode('utf-8')

    def get_comport(self):
        port_list = list_ports.comports()
        for port in port_list:
            if port.pid == 32845 and port.vid == 9025:
                self.available = True
                return port.device
            else:
                return None

    def get_product_id(self):
        port_list = list_ports.comports()
        for port in port_list:
            print(port.device, "product id:", port.pid, "vendor id:", port.vid)

'''
#define LIVE_DATA_REQUEST			'@'
#define PROGRAM_ALTIMETER			'$' //example:$,500000,3,4,3,0,0,500,0
#define RETRIVE_CURRENT_PROGRAMMING	'!'
#define DOWNLOAD_FLIGHT_DATA		'^'
#define CLEAR_FLIGHT_DATA			'&'
#define TEST_FLIGHT					'%'
#define DEBUG_DISCONNECT			'D'
#define GET_FLIGHT_ID				'F'
'''


'''
altimeterSerialPort->setPortName(altimeterPortName);
        altimeterSerialPort->open(QSerialPort::ReadWrite);
        altimeterSerialPort->setBaudRate(QSerialPort::Baud38400);
        altimeterSerialPort->setDataBits(QSerialPort::Data8);
        altimeterSerialPort->setFlowControl(QSerialPort::NoFlowControl);
        altimeterSerialPort->setParity(QSerialPort::NoParity);
        altimeterSerialPort->setStopBits(QSerialPort::OneStop);
'''