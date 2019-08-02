#ifndef ALGORITMY_H
#define ALGORITMY_H
#include <string>
#include <vector>
#include <utility>
#include <iostream>

bool convert(std::string str_name);
void get_all(const std::string& str_root, const std::string& ext, std::vector<std::string>& ret);
void handler(std::pair <std::vector<std::string>, std::vector<std::string>>& pairish);

class ALGORITMY
{
public:
	ALGORITMY() {
	}
	std::vector<std::string> m_XML_files;
	std::vector<std::string> m_JSON_files;
	int lastConvertedIndex = 0;
	
} ;

extern ALGORITMY obj;

#endif
