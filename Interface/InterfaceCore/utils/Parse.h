
#ifndef _PARSE_H
#define _PARSE_H

#include <iostream>
#include <sstream>
#include <vector>

class Parse
{
public:

	Parse();
	~Parse();

	static std::vector<std::string> split(const std::string& input, const char& delimeter, bool outputEmpty);

};
#endif

