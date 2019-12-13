
import requests
import xml.etree.ElementTree as ET
import defusedxml.ElementTree as ET2
import base64

import core.entities.motor_data_entities as motor_entities
import core.file_io as file_io

#Example usage to generate .h5 database
#motor_list = thrust_curve_data_retrieve.get_motor_list()
#file_io.write_motor_database("", motor_list)

def get_motor_list():

    motor_list = []

    id_list = search()
    for id in id_list:
        print(id)
        data_string_list = retrieve(id)

        if data_string_list is not False:
            motor_object = file_io.parse_eng_string_to_motor(data_string_list)    
            motor_list.append(motor_object)
        else:
            pass

    #Fix duplicate names
    for motor_to_check in motor_list:

        duplicate_list = [motor for motor in motor_list if motor.name == motor_to_check.name]
        if len(duplicate_list) > 1:
            i = 1
            for duplicate in duplicate_list:
                duplicate.name = duplicate.name+" ("+str(i)+")"
                i+=1
        duplicate_list = []

    return motor_list

def search():

    #Create xml API request (Search database for all availble, and have test data 
    search_request = ET.Element('search-request')
    has_data = ET.SubElement(search_request, 'has-data-files')
    has_data.text = 'true'
    available = ET.SubElement(search_request, 'availability')
    available.text = 'available'
    data_fields = ET.SubElement(search_request, 'data-fields')
    data_fields.text = 'motor-id'
    max_results = ET.SubElement(search_request, 'max-results')
    max_results.text = '2000'
    request_xml = ET.tostring(search_request)

    #Submit request 
    r = requests.post("http://www.thrustcurve.org/servlets/search", data=request_xml)

    #Parse reply to tree 
    tree = ET2.fromstring(r.text)
    
    #Find number of matches on search 
    matches = int(tree[0][-1].text)

    #Get list of motor id's
    id_list = []
    for i in range(0, matches):
        id_list.append(int(tree[1][i][0].text))
    
    return id_list 

def retrieve(id_motor):

    #Create xml API request
    download_request = ET.Element('download-request')
    motor_id = ET.SubElement(download_request, 'motor-id')
    motor_id.text = str(id_motor)
    format = ET.SubElement(download_request, 'format')
    format.text = 'RASP'
    request_xml = ET.tostring(download_request)

    #Make request
    r = requests.post("http://www.thrustcurve.org/servlets/download", data=request_xml)

    #Parse to tree
    tree = ET2.fromstring(r.text)
    
    #Get RASP motor data    
    data_base64_xml = tree.find('.//{http://www.thrustcurve.org/2014/DownloadResponse}data')
    if data_base64_xml is not None:
        data_string_list = list(base64.b64decode(data_base64_xml.text).decode().split("\n"))
    else:
        data_string_list = False

    #Populate motor class
    return data_string_list





