#include "ini.h"
#include<io.h>


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

short Ini::errCode()
{
	return this->err_code;
}

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