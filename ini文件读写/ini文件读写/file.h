/**********************************************************************
*
*	@file		file.cpp
*	@brief		�Զ�ȡini�ļ���ʵ��
*
*	Date                 Name              Description
*	10/25/15	SYT  and  LGX		Creation.
*
*********************************************************************/


#pragma once


class File
{
public:
	/*
	*	\brief���캯��
	*
	*/
	File();


	/*
	*	\brief��������
	*
	*/
	~File();


	/*
	*	\brief��ȡ�ļ�����
	*
	*/
	void getFileString();

	/*
	*	\briefд���ļ�����
	*
	*/
	void writeFileString();


	char _FileName[100];/**< �ļ��� */
	char _Section[100];/**< Section */
	char _Key[100];/**< Key */
	char _ReturnedString[1000];/**< �����ַ� */
	char _WantedString[1000];/**< �ȴ������ַ� */

private:
		
};

