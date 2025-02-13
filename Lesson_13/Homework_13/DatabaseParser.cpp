#include "DatabaseParser.h"
#include <iostream>
#include <string>

bool getData(const std::string& file_name, std::vector<std::string>& data) {
	std::fstream file;
	file.open(file_name, std::ios::in);
	if (!file) {
		std::cout << "File not found\n";
		return false;
	}
	else
	{

		std::string line;
		while (!file.eof()) {
			getline(file, line);
			data.push_back(line);
		}
		file.close();
	}
	return true;
}
