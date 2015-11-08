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
	void inputSection(char* c,int len);
	/*
	* \brief传入Key
	*
	* \pram 源数组
	*/
	void inputKey(char* c, int len);
	/*
	* \brief传入Value
	*
	* \pram 源数组
	*/
	void inputValue(char* c, int len);
	/*
	* \brief传入FileName
	*
	* \pram 源数组
	*/
	void inputFileName(char* c, int len);
	/*
	* \brief传出Value
	*
	* \pram 源数组
	*/
void outPutValue(char* c);

	/*
	* \brief释放内存
	*/
	void intDeleted();
	/*
	* \brief释放内存
	*/
	void outDeleted();
	/*
	* \brief释放内存
	*/
	void nameDeleted();
	/*
	* \brief转换Value到整型
	*
	* \pram 源数组
	*/
	int fromStrToInt(char* c);
	/*
	* \brief转换Value到整型
	*
	* \pram 源数组
	*/
	float fromStrToFloat(char* c);

private:
	char *_FileName;     /**<文件名*/
	char *_Section;         /**<Section*/
	char *_Key;                /**<Key*/
	char *_Value;          /**<返回或写入的Value*/
};