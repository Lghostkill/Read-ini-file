/**********************************************************************
*
*	@file		file.cpp
*	@brief		对读取ini文件的实现
*
*	Date         Name              Description
*	11/21/15	  LGX		Creation.
*
*********************************************************************/

#ifndef INI_H
#define	INI_H


#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <string>
using namespace std;


class Ini{

public:
	/*
	* \brief构造函数
	*/
	Ini();


	/*
	* \brief析构函数
	*/
	~Ini();


	/*
	* \brief 传入文件名
	*
	* \pram 文件名
	*/
	Ini(string ini_file);


	/*
	* \brief获取Value
	*
	* \pram Sectionname.Key
	*/
	string getstring(string path);

	int getint(string path,int *f);

	float getfloat(string path,int *f);


	/*
	* \brief出错输出字符代码
	*
	*/
	short int errCode();


private:
	short int err_code;  /**<错误判断*/
	boost::property_tree::ptree m_pt;/**<存储文件容器*/
	int flag;/**<错误判断*/
};

#endif	/* INI_H */