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

void File::inputFileName(char* c)
{
	strcpy(_FileName, c);
}

/*
*	\briefд��Section����
*
*  \pram ����Դ����
*/

void File::inputSection(char* c)
{
	strcpy(_Section, c);
}

/*
*	\briefд��Key
*
*  \pram ����Դ����
*/

void File::inputKey(char* c)
{
	strcpy(_Key, c);
}

/*
*	\briefд��Value
*
*  \pram ����Դ����
*/

void File::inputValue(char* c)
{
	strcpy(_Value, c);
}

/*
*	\brief����Value
*
*  \pram ����Դ����
*/

void File::outputValue(char* c)
{
	strcpy(c, _Value);
}