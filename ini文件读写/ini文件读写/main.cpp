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
	std::cout << "请输入.ini文件地址" << std::endl << "例如：e://example.ini" << std::endl;
	std::cin >> file._FileName;
	getchar();
	while (1)
	{
		std::cout << "您想要：1.写入字符  2.读取字符  0.终止程序" << std::endl;
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