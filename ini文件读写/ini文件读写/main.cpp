#include<Windows.h>
#include<iostream>
#include"file.h"

int main()
{

	File file;
	int choice;
	char c;
	char temp[100];   
	std::cout << "������.ini�ļ���ַ" << std::endl << "���磺e://example.ini" << std::endl;
	std::cin >> temp;
	file.inputFileName(temp);
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
			file.inputSection(temp);
			std::cout << "������ϣ��д���Key" << std::endl;
			gets(temp);
			file.inputKey(temp);
			std::cout << "������ϣ��д���Value" << std::endl;
			gets(temp);
			file.inputValue(temp);
			file.writeFileString();
			std::cout << "Finished" << std::endl;
		}
		if (2 == choice)
		{
			std::cout << "������ϣ����ѯ��Section" << std::endl;
			gets(temp);
			file.inputSection(temp);
			std::cout << "������ϣ����ѯ��Key" << std::endl;
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