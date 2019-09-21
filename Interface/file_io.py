
def read_text_file(file_path):
    file = open(file_path,"r")
    string_list = file.readlines()
    file.close()
    return string_list 
