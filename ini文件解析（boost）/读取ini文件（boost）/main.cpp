#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <string>
#include "ini.h"



/*
*
*/
int main(int argc, char** argv) 
{
	string ini_file;
	string SectionnameKey;
	std::cout << "输入文件地址（文件只有E://123.ini）："<< std::endl;
	std::cin >> ini_file;
	Ini ini(ini_file);
	std::cout << "输入想要读取的Sectionname.Key（s1.2）：" << std::endl;
	std::cin >> SectionnameKey;
	std::cout << ini.get(SectionnameKey) << std::endl;
	return 0;
}