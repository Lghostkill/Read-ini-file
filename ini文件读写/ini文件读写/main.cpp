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
	std::cout << "������.ini�ļ���ַ" << std::endl << "���磺e://example.ini" << std::endl;
	std::cin >> temp;
	len = strlen(temp);
	file.inputFileName(temp,len);
	getchar();
	while (1)
	{
		std::cout << "����Ҫ��1.д���ַ�  2.��ȡ�ַ�  0.��ֹ����" << std::endl;
		std::cin >> choice;
		getchar();
		if (1 == choice)
		{
			std::cout << "������ϣ��д���Section" << std::endl;
			gets(temp);
			len = strlen(temp);
			file.inputSection(temp, len);
			std::cout << "������ϣ��д���Key" << std::endl;
			gets(temp);
			len = strlen(temp);
			file.inputKey(temp, len);
			std::cout << "������ϣ��д���Value" << std::endl;
			gets(temp);
			len = strlen(temp);
			file.inputValue(temp, len);
			file.writeFileString();
			std::cout << "Finished" << std::endl;
			file.intdeleted();
		}
		if (2 == choice)
		{
			std::cout << "������ϣ����ѯ��Section" << std::endl;
			gets(temp);
			len = strlen(temp);
			file.inputSection(temp, len);
			std::cout << "������ϣ����ѯ��Key" << std::endl;
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