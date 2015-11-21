#include "ini.h"


/*
* \brief构造函数
*/
Ini::Ini()
{
}


/*
* \brief析构函数
*/
Ini::~Ini()
{
}


/*
* \brief 传入文件名
*
* \pram 文件名
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
* \brief出错输出字符代码
*
*/
short Ini::errCode()
{
	return this->err_code;
}


/*
* \brief获取Value
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
		return "文件不存在";
	}
}