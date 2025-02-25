#define BOOST_FILESYSTEM_NO_DEPRECATED
#include <windows.h>
#include "ALGORITMY.h"
#include <C:\Users\cilay\Downloads\xml2json-master\xml2json-master\include\xml2json.hpp>
#include <iostream>
#include <string>
#include <utility>
#include <boost\filesystem.hpp>
//C:\Users\cilay\Downloads\University\boost_1_68_0\

namespace fs = boost::filesystem;
using namespace std;

bool convert(string str_name){

	string xml_str;
	ifstream in(str_name, std::ios::in | std::ios::binary);
	if (in)
	{
		in.seekg(0, std::ios::end);
		xml_str.resize(in.tellg());
		in.seekg(0, std::ios::beg);
		in.read(&xml_str[0], xml_str.size());
		in.close();
		try { xml_str = xml2json(xml_str.c_str()); }
		catch (...) {
			return 0;
		}
	}
	if (xml_str == "" || xml_str == "{}") return 0;

	//			Раскомментируйте низлежащий код для получения файлов json по всем правилам оформления
	/*unsigned tabCounter = 0;
	for (unsigned i = 0; i < xml_str.size(); ++i) {
		if (xml_str[i] == '{' || xml_str[i] == '[') {
			xml_str.insert(xml_str.begin() + i + 1, '\n');
			xml_str.insert(xml_str.begin() + i + 2, ++tabCounter, '\t');
			i += tabCounter + 1;
		}
		else if (xml_str[i] == '}' || xml_str[i] == ']') {
			xml_str.insert(xml_str.begin() + i, '\n');
			++i;
			if (i == xml_str.size() - 1)
				break;
			if (xml_str[i + 1] == ',') {
				xml_str.insert(xml_str.begin() + i, --tabCounter, '\t');
				xml_str.insert(xml_str.begin() + i + 2 + tabCounter, '\n');
				i += tabCounter + 3;
				xml_str.insert(xml_str.begin() + i, tabCounter, '\t');
				i += tabCounter - 1;

			}
			else {
				xml_str.insert(xml_str.begin() + i, --tabCounter, '\t');
				xml_str.insert(xml_str.begin() + i + tabCounter + 1, '\n');
				i += tabCounter + 1;
			}
		}
		else if (xml_str[i] == ',') {
			if (xml_str[i - 1] != '"' || i == 0) continue;
			xml_str.insert(xml_str.begin() + i + 1, '\n');
			xml_str.insert(xml_str.begin() + i + 2, tabCounter, '\t');
		}
		else if (xml_str[i] == ':') {
			xml_str.insert(xml_str.begin() + i + 1, ' ');
		}
	}*/

	ofstream out;
	out.open(str_name.substr(0, str_name.size() - 4) + ".json");
	out << xml_str;
	out.close();
	return 1;
}

void get_all(const string& str_root, const string& ext, std::vector<std::string>& ret)
{
	fs::path root{ str_root };
	if (!fs::exists(fs::status(root))) return;

	if (!fs::is_directory(root)) {
		if (fs::is_regular_file(root) && root.extension() == ext) {
			ret.push_back(root.string());
		}
		return;
	}

	fs::recursive_directory_iterator it(root);
	fs::recursive_directory_iterator endit;

	while (it != endit)
	{
		if (fs::is_regular_file(it->path()) && it->path().extension() == ext) {
			ret.push_back(it->path().string());
		}
		++it;
	}
}

void handler(pair <vector<string>, vector<string>>& pairish) {

	for(int it=0;it<pairish.first.size();++it){
		
		if (convert(pairish.first[it])==1) {
			
			obj.m_JSON_files.push_back(pairish.first[it].substr(0, pairish.first[it].size() - 4) + ".json");
		} 
		++obj.lastConvertedIndex;
	}
}