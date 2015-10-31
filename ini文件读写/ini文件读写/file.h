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
	void inputSection(char* c,int len);
	/*
	* \brief����Key
	*
	* \pram Դ����
	*/
	void inputKey(char* c, int len);
	/*
	* \brief����Value
	*
	* \pram Դ����
	*/
	void inputValue(char* c, int len);
	/*
	* \brief����FileName
	*
	* \pram Դ����
	*/
	void inputFileName(char* c, int len);
	/*
	* \brief����Value
	*
	* \pram Դ����
	*/
	void outputValue(char* c, int len);

	/*
	* \brief�ͷ��ڴ�
	*/
	void intdeleted();
	/*
	* \brief�ͷ��ڴ�
	*/
	void outdeleted();
	/*
	* \brief�ͷ��ڴ�
	*/
	void namedeleted();

private:
	char *_FileName;     /**<�ļ���*/
	char *_Section;         /**<Section*/
	char *_Key;                /**<Key*/
	char *_Value;          /**<���ػ�д���Value*/
};