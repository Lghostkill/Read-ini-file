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
	int choice;
	int flag;
	flag = 0;
	string ini_file;
	string SectionnameKey;
	std::cout << "输入文件地址（文件只有E://123.ini）："<< std::endl;
	std::cin >> ini_file;
	Ini ini(ini_file);
	while (1)
	{
		std::cout << "输入想要读取的Sectionname.Key如（s1.2）或结束程序（0）：" << std::endl;
		std::cin >> SectionnameKey;
		if (SectionnameKey == "0")
		{
			return 0;
		}
		std::cout << "输入想要得到了数据类型1、string 2、float 3、int：" << std::endl;
		std::cin >> choice;
		if (choice == 1)
		{
			std::cout << ini.getstring(SectionnameKey) << std::endl;
		}
		if (choice == 2)
		{
			ini.getfloat(SectionnameKey,&flag);
			if (flag ==0)
			{
				std::cout << ini.getfloat(SectionnameKey,&flag) << std::endl;
				continue;
			}
			if (flag == 1)
			{
				std::cout << "Filename error." << std::endl;
			}
			if (flag == 2)
			{
				std::cout << "Scetionname or Keyname error." << std::endl;
			}
		}
		if (choice == 3)
		{
			ini.getint(SectionnameKey,&flag);
			if (flag == 0)
			{
				std::cout << ini.getint(SectionnameKey,&flag) << std::endl;
				continue;
			}
			if (flag == 1)
			{
				std::cout << "Filename error." << std::endl;
			}
			if (flag == 2)
			{
				std::cout << "Scetionname or Keyname error." << std::endl;
			}
		}
	}
}