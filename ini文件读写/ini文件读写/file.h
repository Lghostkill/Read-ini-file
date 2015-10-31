/**********************************************************************
*
*	@file		file.cpp
*	@brief		对读取ini文件的实现
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
	* \brief构造函数
	*/
	File();
	/*
	* \brief析构函数
	*/
	~File();
	/*
	* \brief读取字符串函数
	*/
	void getFileString();            
	/*
	* \brief写入字符串函数
	*/
	void writeFileString();
	/*
	* \brief传入Section
	*
	* \pram 源数组
	*/
	void inputSection(char* c);
	/*
	* \brief传入Key
	*
	* \pram 源数组
	*/
	void inputKey(char* c);
	/*
	* \brief传入Value
	*
	* \pram 源数组
	*/
	void inputValue(char* c);
	/*
	* \brief传入FileName
	*
	* \pram 源数组
	*/
	void inputFileName(char* c);
	/*
	* \brief传出Value
	*
	* \pram 源数组
	*/
	void outputValue(char* c);

private:
	char _FileName[100];     /**<文件名*/
	char _Section[100];         /**<Section*/
	char _Key[100];                /**<Key*/
	char _Value[1000];          /**<返回或写入的Value*/
};