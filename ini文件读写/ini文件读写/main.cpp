#include<Windows.h>
#include<iostream>
#include<cstring>
#include"file.h"

int main()
{

	File file;
	int choice,len;
	char c;
	char temp[10000];   
	std::cout << "请输入.ini文件地址" << std::endl << "例如：e://example.ini" << std::endl;
	std::cin >> temp;
	len = strlen(temp);
	file.inputFileName(temp,len);
	getchar();
	while (1)
	{
		std::cout << "您想要：1.写入字符  2.读取字符  0.终止程序" << std::endl;
		std::cin >> choice;
		getchar();
		if (1 == choice)
		{
			std::cout << "请输入希望写入的Section" << std::endl;
			gets(temp);
			len = strlen(temp);
			file.inputSection(temp, len);
			std::cout << "请输入希望写入的Key" << std::endl;
			gets(temp);
			len = strlen(temp);
			file.inputKey(temp, len);
			std::cout << "请输入希望写入的Value" << std::endl;
			gets(temp);
			len = strlen(temp);
			file.inputValue(temp, len);
			file.writeFileString();
			std::cout << "Finished" << std::endl;
			file.intdeleted();
		}
		if (2 == choice)
		{
			std::cout << "请输入希望查询的Section" << std::endl;
			gets(temp);
			len = strlen(temp);
			file.inputSection(temp, len);
			std::cout << "请输入希望查询的Key" << std::endl;
			gets(temp);
			len = strlen(temp);
			file.inputKey(temp, len);

			file.getFileString();
			file.outputValue(temp, len);
			std::cout << temp << std::endl;
			std::cout << "Finished" << std::endl;
			file.outdeleted();
		}
		if (0 == choice)
		{
			file.namedeleted();
			return 0;
		}
			

	}
	system("pause");
}