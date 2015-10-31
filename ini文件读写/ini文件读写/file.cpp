#include<Windows.h>
#include<iostream>
#include "File.h"

/*
* \brief构造函数
*/
File::File()
{
}

/*
* \brief析构函数
*/
File::~File()
{
}


/*
*	\brief读取文件函数
*
*/
void File::getFileString()
{
	GetPrivateProfileString(
		(LPCSTR)_Section,
		(LPCSTR)_Key,
		"No such Key or Section\n",
		(LPSTR)_Value,
		sizeof(_Value),
		(LPCSTR)_FileName);
}


/*
*	\brief写入文件函数
*
*/
void File::writeFileString()
{
	WritePrivateProfileString(
		(LPCSTR)_Section,
		(LPCSTR)_Key,
		(LPSTR)_Value,
		(LPCSTR)_FileName
		);
}

/*
*	\brief写入FileName变量
*
*  \pram 传入源数组
*/

void File::inputFileName(char* c)
{
	strcpy(_FileName, c);
}

/*
*	\brief写入Section变量
*
*  \pram 传入源数组
*/

void File::inputSection(char* c)
{
	strcpy(_Section, c);
}

/*
*	\brief写入Key
*
*  \pram 传入源数组
*/

void File::inputKey(char* c)
{
	strcpy(_Key, c);
}

/*
*	\brief写入Value
*
*  \pram 传入源数组
*/

void File::inputValue(char* c)
{
	strcpy(_Value, c);
}

/*
*	\brief传出Value
*
*  \pram 传入源数组
*/

void File::outputValue(char* c)
{
	strcpy(c, _Value);
}