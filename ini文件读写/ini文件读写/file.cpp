#include<Windows.h>
#include<iostream>
#include<math.h>
#include "File.h"

/*
* \brief���캯��
*/
File::File()
{
}

/*
* \brief��������
*/
File::~File()
{
}


/*
*	\brief��ȡ�ļ�����
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
*	\briefд���ļ�����
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
*	\briefд��FileName����
*
*  \pram ����Դ����
*/

void File::inputFileName(char* c, int len)
{
	_FileName = new char[sizeof(_FileName)*(len + 1)];
	strcpy(_FileName, c);
}

/*
*	\briefд��Section����
*
*  \pram ����Դ����
*/

void File::inputSection(char* c, int len)
{
	_Section = new char[sizeof(_Section)*(len + 1)];
	strcpy(_Section, c);
}

/*
*	\briefд��Key
*
*  \pram ����Դ����
*/

void File::inputKey(char* c, int len)
{
	_Key = new char[sizeof(_Key)*(len + 1)];
	strcpy(_Key, c);
}

/*
*	\briefд��Value
*
*  \pram ����Դ����
*/

void File::inputValue(char* c, int len)
{
	_Value = new char[sizeof(_Value)*(len + 1)];
	strcpy(_Value, c);
}

/*
*	\brief����Value
*
*  \pram ����Դ����
*/

void File::outPutValue(char* c)
{
	int len = strlen(_Value);
	//c = new char[sizeof(_Value)*(len + 1)];
	strcpy(c, _Value);
}


/*
* \brief�ͷ��ڴ�
*/
void File::intDeleted()
{
	delete[]_Section;
	delete[]_Key;
	delete[]_Value;

}


/*
* \brief�ͷ��ڴ�
*/
void File::outDeleted()
{
	delete[]_Section;
	delete[]_Key;
}

/*
* \brief�ͷ��ڴ�
*/
void File::nameDeleted()
{
	delete[]_FileName;
}

/*
* \briefת��Value������
*
* \pram Դ����
*/
int File::fromStrToInt(char* c)
{
	int sum = atoi(c);
	return sum;
}
/*
* \briefת��Value������
*
* \pram Դ����
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
