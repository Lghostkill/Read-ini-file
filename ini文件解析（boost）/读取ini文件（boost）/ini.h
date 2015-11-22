/**********************************************************************
*
*	@file		file.cpp
*	@brief		�Զ�ȡini�ļ���ʵ��
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
	* \brief���캯��
	*/
	Ini();


	/*
	* \brief��������
	*/
	~Ini();


	/*
	* \brief �����ļ���
	*
	* \pram �ļ���
	*/
	Ini(string ini_file);


	/*
	* \brief��ȡValue
	*
	* \pram Sectionname.Key
	*/
	string getstring(string path);

	int getint(string path,int *f);

	float getfloat(string path,int *f);


	/*
	* \brief��������ַ�����
	*
	*/
	short int errCode();


private:
	short int err_code;  /**<�����ж�*/
	boost::property_tree::ptree m_pt;/**<�洢�ļ�����*/
	int flag;/**<�����ж�*/
};

#endif	/* INI_H */