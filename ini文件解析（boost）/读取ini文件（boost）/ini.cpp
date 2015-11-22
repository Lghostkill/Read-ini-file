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
	try
	{
		this->err_code = 0;
		boost::property_tree::ini_parser::read_ini(ini_file, this->m_pt);
	}
	catch (std::exception)
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
string Ini::getstring(string path)
{
	try
	{
		if (this->err_code == 0)
		{
			return this->m_pt.get<string>(path);
		}
		else
		{
			return "Filename error.";
		}
	}
	catch (std::exception)
	{
		return "Scetionname or Keyname error.";
	}
}

int Ini::getint(string path,int *f)
{
	try
	{
		if (this->err_code == 0)
		{
			*f = 0;
			return this->m_pt.get<int>(path);
		}
		else
		{
			*f=1;
		}
	}
	catch (std::exception)
	{
		*f=2;
	}
}


float Ini::getfloat(string path, int *f)
{
	try
	{
		if (this->err_code == 0)
		{
			*f = 0;
			return this->m_pt.get<float>(path);
		}
		else
		{
			*f = 1;
		}
	}
	catch (std::exception)
	{
		*f = 2;
	}
}