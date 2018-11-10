/*
** Reader.cpp for cpp in /Users/jurgen/cpp/sorting/sources/cpp
**
** Made by jurgen.palsma@gmail.com
** Login   <Jurgen>
**
** Started on  Sat Nov 10 13:05:31 2018 jurgen.palsma@gmail.com
** Last update Sun Nov 10 13:11:49 2018 jurgen.palsma@gmail.com
*/

#include "Reader.hpp"

std::vector<int>		getDataFromFile(std::string filename) {
	std::ifstream		file(filename);
	std::string			str;
	std::vector<int>	numbers;

	if (!file) throw std::runtime_error(std::string("Failed to read file: ") + filename);

	while (std::getline(file, str)) {
    	numbers.push_back(stoi(str));
	}

	return numbers;
}