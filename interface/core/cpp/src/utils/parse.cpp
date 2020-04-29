#include "Parse.h"


Parse::Parse() {
}


Parse::~Parse() {
}

std::vector<std::string> Parse::Split(const std::string& input, const char& delimeter, bool outputEmpty) {

	std::vector<std::string> output;
	std::string word = "";	

	bool delimeterExists = false;

	for (auto x : input) {

		if (x == delimeter) {			

			if (outputEmpty) { //add word to vector, even if it is ""
				output.push_back(word);
				word = "";
				delimeterExists = true;
			}
			
			else if (!outputEmpty && word.size() > 0) { //add word to vector, but don't allow words with multiple delimeters in a row
				output.push_back(word);
				word = "";
				delimeterExists = true;				
			}
			else {
				continue;
			}
		}

		else {
			word += x;
		}
	}

	//write last word
	if (outputEmpty || (!outputEmpty && word.size() > 0)) {
		output.push_back(word);
	}

	return output;
}

std::string Parse::GetDataString(const std::string& file_path) {

	std::ifstream file(file_path);
	std::string data_string;

	if (!file.is_open()) {
		std::cout << "Unable to open file" << '\n';
	}
	else {
		file.seekg(0, std::ios::end);
		data_string.reserve(file.tellg());
		file.seekg(0, std::ios::beg);

		data_string.assign((std::istreambuf_iterator<char>(file)),
			std::istreambuf_iterator<char>());
	}
	file.close();
	return data_string;
}
