#include<Windows.h>
#include<iostream>
#include"file.h"

int main()
{
	//char section[120] = { " SECTION 1 " };
	//char test[10] = { "XPos" };
	//char default[100] = { "file open failed\n" };
	//char ip[100] = { "e://example.ini" };
	//char retu[10];
	//std::cin >> test;
	//GetPrivateProfileString((LPCSTR)section, (LPCSTR)test, "Error", (LPSTR)retu, sizeof(retu), (LPCSTR)ip);
	//std::cout << retu << std::endl;



	File file;
	int choice;
	char c;
	std::cout << "������.ini�ļ���ַ" << std::endl << "���磺e://example.ini" << std::endl;
	std::cin >> file._FileName;
	getchar();
	while (1)
	{
		std::cout << "����Ҫ��1.д���ַ�  2.��ȡ�ַ�  0.��ֹ����" << std::endl;
		std::cin >> choice;
		getchar();
		if (1 == choice)
			file.writeFileString();
		if (2 == choice)
			file.getFileString();
		if (0 == choice)
			return 0;
	}
	system("pause");
}