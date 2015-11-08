#include<Windows.h>
#include<iostream>
#include<math.h>
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
		"No such Key or Section",
		(LPSTR)_Value,
		sizeof(char*)*10000,
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

void File::outPutValue(char* c)
{
	int len = strlen(_Value);
	//c = new char[sizeof(_Value)*(len + 1)];
	strcpy(c, _Value);
}


/*
* \brief释放内存
*/
void File::intDeleted()
{
	delete[]_Section;
	delete[]_Key;
	delete[]_Value;

}


/*
* \brief释放内存
*/
void File::outDeleted()
{
	delete[]_Section;
	delete[]_Key;
}

/*
* \brief释放内存
*/
void File::nameDeleted()
{
	delete[]_FileName;
}

/*
* \brief转换Value到整型
*
* \pram 源数组
*/
int File::fromStrToInt(char* c)
{
	int sum = atoi(c);
	return sum;
}
/*
* \brief转换Value到整型
*
* \pram 源数组
*/
float File::fromStrToFloat(char* c)
{
	int len, i, flag, p;
	float sum = 0;
	len = strlen(c);
	flag = 0;
	p = -1;
	for (i = 0; i < len; i++)
	{
		if (c[i] == '.')
		{
			flag = 1;
			continue;
		}
		if (0 == flag)
			sum = sum * 10 + (c[i] - '0');
		if (1 == flag)
		{
			sum = sum + (c[i] - '0')*pow(10.0, p);
			p -= 1;
		}
	}
	return sum;
}
