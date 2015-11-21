#include "ini.h"


/*
* \brief���캯��
*/
Ini::Ini()
{
}


/*
* \brief��������
*/
Ini::~Ini()
{
}


/*
* \brief �����ļ���
*
* \pram �ļ���
*/
Ini::Ini(string ini_file)
{
	if (ini_file!="" )
	{
		this->err_code = 0;
		boost::property_tree::ini_parser::read_ini(ini_file, this->m_pt);
	}
	else 
	{
		this->err_code = 1;
	}
}


/*
* \brief��������ַ�����
*
*/
short Ini::errCode()
{
	return this->err_code;
}


/*
* \brief��ȡValue
*
* \pram Sectionname.Key
*/
string Ini::get(string path)
{
	if (this->err_code == 0) 
	{
		return this->m_pt.get<string>(path);
	}
	else 
	{
		return "�ļ�������";
	}
}