#include<Windows.h>
#include<iostream>
#include "File.h"


File::File()
{
}


File::~File()
{
}


/*
*	\brief读取文件函数
*
*/
void File::getFileString()
{
	char c;
	std::cout << "请输入希望查询的Section" << std::endl;
	gets(_Section);

	std::cout << "请输入希望查询的Key" << std::endl;
	std::cin >> _Key;		
	getchar();
	GetPrivateProfileString(
		(LPCSTR)_Section, 
		(LPCSTR)_Key, 
		"No such Key or Section\n", 
		(LPSTR)_ReturnedString, 
		sizeof(_ReturnedString), 
		(LPCSTR)_FileName);
	std::cout << "查询到的字符为:" << _ReturnedString << std::endl;
}


/*
*	\brief写入文件函数
*
*/
void File::writeFileString()
{
	char c;
	std::cout << "请输入希望写入的Section" << std::endl;
	gets(_Section);
	std::cout << "请输入希望写入的Key" << std::endl;
	std::cin >> _Key;
	getchar();
	std::cout << "请输入希望写入的字符串" << std::endl;
	gets(_WantedString);
	WritePrivateProfileString(
		(LPCSTR)_Section,
		(LPCSTR)_Key,
		(LPSTR)_WantedString,
		(LPCSTR)_FileName
	);
	std::cout << "Finished" << std::endl;
}