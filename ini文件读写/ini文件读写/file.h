/**********************************************************************
*
*	@file		file.cpp
*	@brief		对读取ini文件的实现
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
	*	\brief构造函数
	*
	*/
	File();


	/*
	*	\brief析构函数
	*
	*/
	~File();


	/*
	*	\brief读取文件函数
	*
	*/
	void getFileString();

	/*
	*	\brief写入文件函数
	*
	*/
	void writeFileString();


	char _FileName[100];/**< 文件名 */
	char _Section[100];/**< Section */
	char _Key[100];/**< Key */
	char _ReturnedString[1000];/**< 返回字符 */
	char _WantedString[1000];/**< 等待输入字符 */

private:
		
};

