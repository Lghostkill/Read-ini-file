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
	_Value = new char[10000];
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

void File::inputFileName(char* c, int len)
{
	_FileName = new char[sizeof(_FileName)*(len + 1)];
	strcpy(_FileName, c);
}

/*
*	\brief写入Section变量
*
*  \pram 传入源数组
*/

void File::inputSection(char* c, int len)
{
	_Section = new char[sizeof(_Section)*(len + 1)];
	strcpy(_Section, c);
}

/*
*	\brief写入Key
*
*  \pram 传入源数组
*/

void File::inputKey(char* c, int len)
{
	_Key = new char[sizeof(_Key)*(len + 1)];
	strcpy(_Key, c);
}

/*
*	\brief写入Value
*
*  \pram 传入源数组
*/

void File::inputValue(char* c, int len)
{
	_Value = new char[sizeof(_Value)*(len + 1)];
	strcpy(_Value, c);
}

/*
*	\brief传出Value
*
*  \pram 传入源数组
*/

void File::outputValue(char* c, int len)
{
	strcpy(c, _Value);
}


/*
* \brief释放内存
*/
void File::intdeleted()
{
	delete[]_Section;
	delete[]_Key;
	delete[]_Value;

}


/*
* \brief释放内存
*/
void File::outdeleted()
{
	delete[]_Section;
	delete[]_Key;
}

void File::namedeleted()
{
	delete[]_FileName;
}