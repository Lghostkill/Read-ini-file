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
*	\brief��ȡ�ļ�����
*
*/
void File::getFileString()
{
	char c;
	std::cout << "������ϣ����ѯ��Section" << std::endl;
	gets(_Section);

	std::cout << "������ϣ����ѯ��Key" << std::endl;
	std::cin >> _Key;		
	getchar();
	GetPrivateProfileString(
		(LPCSTR)_Section, 
		(LPCSTR)_Key, 
		"No such Key or Section\n", 
		(LPSTR)_ReturnedString, 
		sizeof(_ReturnedString), 
		(LPCSTR)_FileName);
	std::cout << "��ѯ�����ַ�Ϊ:" << _ReturnedString << std::endl;
}


/*
*	\briefд���ļ�����
*
*/
void File::writeFileString()
{
	char c;
	std::cout << "������ϣ��д���Section" << std::endl;
	gets(_Section);
	std::cout << "������ϣ��д���Key" << std::endl;
	std::cin >> _Key;
	getchar();
	std::cout << "������ϣ��д����ַ���" << std::endl;
	gets(_WantedString);
	WritePrivateProfileString(
		(LPCSTR)_Section,
		(LPCSTR)_Key,
		(LPSTR)_WantedString,
		(LPCSTR)_FileName
	);
	std::cout << "Finished" << std::endl;
}