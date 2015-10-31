#include<Windows.h>
#include<iostream>
#include"file.h"

int main()
{

	File file;
	int choice;
	char c;
	char temp[100];   
	std::cout << "请输入.ini文件地址" << std::endl << "例如：e://example.ini" << std::endl;
	std::cin >> temp;
	file.inputFileName(temp);
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
			file.inputSection(temp);
			std::cout << "请输入希望写入的Key" << std::endl;
			gets(temp);
			file.inputKey(temp);
			std::cout << "请输入希望写入的Value" << std::endl;
			gets(temp);
			file.inputValue(temp);
			file.writeFileString();
			std::cout << "Finished" << std::endl;
		}
		if (2 == choice)
		{
			std::cout << "请输入希望查询的Section" << std::endl;
			gets(temp);
			file.inputSection(temp);
			std::cout << "请输入希望查询的Key" << std::endl;
			gets(temp);
			file.inputKey(temp);

			file.getFileString();
			file.outputValue(temp);
			std::cout << temp << std::endl;
			std::cout << "Finished" << std::endl;
		}
		if (0 == choice)
			return 0;
	}
	system("pause");
}