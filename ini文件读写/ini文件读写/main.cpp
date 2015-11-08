#include<Windows.h>
#include<iostream>
#include<cstring>
#include"file.h"

int main()
{

	File file;
	int i, isvalid;
	int choice, secondchoice, len;
	char c;
	char temp[10000];
	std::cout << "请输入.ini文件地址" << std::endl << "例如：e://example.ini" << std::endl;
	std::cin >> temp;
	len = strlen(temp);
	file.inputFileName(temp, len);
	getchar();
	while (1)
	{
		std::cout << "您想要：1.写入字符  2.读取字符  0.终止程序" << std::endl;
		std::cin >> choice;
		getchar();
		if (1 == choice)
		{
			std::cout << "请分行输入希望写入的Section,Key,Value" << std::endl;
			gets(temp);
			len = strlen(temp);
			file.inputSection(temp, len);
			gets(temp);
			len = strlen(temp);
			file.inputKey(temp, len);
			gets(temp);
			len = strlen(temp);
			file.inputValue(temp, len);
			file.writeFileString();
			std::cout << "Finished" << std::endl;
			file.intDeleted();
		}
		if (2 == choice)
		{
			std::cout << "请分行输入希望查询的Section,Key" << std::endl;
			gets(temp);
			len = strlen(temp);
			file.inputSection(temp, len);
			gets(temp);
			len = strlen(temp);
			file.inputKey(temp, len);
			file.getFileString();
			file.outPutValue(temp);
			std::cout << temp << std::endl;
			if (strcmp(temp, "No such Key or Section") != 0)
			{
				isvalid = 1;
				std::cout << "希望将结果转换为" << std::endl << "1:整型		2:浮点型	 3:字符型" << std::endl;
				std::cin >> secondchoice;
				if (3 == secondchoice)
					std::cout << temp << std::endl;
				if (1 == secondchoice)
				{
					len = strlen(temp);
					for (i = 0; i < len; i++)
					{
						if (temp[i] < '0' || temp[i] >'9')
						{
							std::cout << "不能转化为整型" << std::endl;
							isvalid = 0;
							break;
						}
					}
					if (isvalid == 1)
						std::cout << file.fromStrToInt(temp) << std::endl;
				}
				if (2 == secondchoice)
				{
					len = strlen(temp);
					for (i = 0; i < len; i++)
					{
						if (temp[i] != '.' && (temp[i] < '0' || temp[i] >'9'))
						{
							std::cout << "不能转化为浮点型" << std::endl;
							isvalid = 0;
							break;
						}
					}
					if (isvalid == 1)
						std::cout << file.fromStrToFloat(temp) << std::endl;
				}
			}
			else
				printf("No such Key or Section\n");
			if (0 == choice)
			{
				file.nameDeleted();
				return 0;
			}
		}
		system("pause");
	}
}