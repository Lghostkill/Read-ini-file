/*
* File:   ini.h
* Author: tsxw24@gmail.com
*
* Created on 2013��3��18��, ����2:51
*/

#ifndef INI_H
#define	INI_H


#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <string>
using namespace std;


class Ini{
public:
	Ini(string ini_file);
	string get(string path);
	short int errCode();
private:
	short int err_code;
	boost::property_tree::ptree m_pt;
};

#endif	/* INI_H */