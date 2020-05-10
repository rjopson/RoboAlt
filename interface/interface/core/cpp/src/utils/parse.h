
#ifndef _PARSE_H
#define _PARSE_H

#include <fstream>
#include <iostream>
#include <streambuf>
#include <string>
#include <sstream>
#include <vector>

class Parse
{
public:

	Parse();
	~Parse();

	static std::vector<std::string> Split(const std::string& input, const char& delimeter, bool outputEmpty);
	static std::string GetDataString(const std::string& file_path);

};
#endif

