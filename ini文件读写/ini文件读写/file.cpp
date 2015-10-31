#include<Windows.h>
#include<iostream>
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
		"No such Key or Section\n",
		(LPSTR)_Value,
		sizeof(_Value),
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

void File::outputValue(char* c, int len)
{
	strcpy(c, _Value);
}


/*
* \brief�ͷ��ڴ�
*/
void File::intdeleted()
{
	delete[]_Section;
	delete[]_Key;
	delete[]_Value;

}


/*
* \brief�ͷ��ڴ�
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