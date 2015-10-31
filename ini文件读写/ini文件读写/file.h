/**********************************************************************
*
*	@file		file.cpp
*	@brief		�Զ�ȡini�ļ���ʵ��
*
*	Date                 Name              Description
*	10/31/15	SYT  and  LGX		Creation.
*
*********************************************************************/


#pragma once
class File
{
public:
	/*
	* \brief���캯��
	*/
	File();
	/*
	* \brief��������
	*/
	~File();
	/*
	* \brief��ȡ�ַ�������
	*/
	void getFileString();            
	/*
	* \briefд���ַ�������
	*/
	void writeFileString();
	/*
	* \brief����Section
	*
	* \pram Դ����
	*/
	void inputSection(char* c);
	/*
	* \brief����Key
	*
	* \pram Դ����
	*/
	void inputKey(char* c);
	/*
	* \brief����Value
	*
	* \pram Դ����
	*/
	void inputValue(char* c);
	/*
	* \brief����FileName
	*
	* \pram Դ����
	*/
	void inputFileName(char* c);
	/*
	* \brief����Value
	*
	* \pram Դ����
	*/
	void outputValue(char* c);

private:
	char _FileName[100];     /**<�ļ���*/
	char _Section[100];         /**<Section*/
	char _Key[100];                /**<Key*/
	char _Value[1000];          /**<���ػ�д���Value*/
};