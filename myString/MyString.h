/********************************************************
 * Author		: Hao Ding
 * Email		: dinghao_nwpu@hotmail.com
 * Created Time	: Thu 02 Jan 2014 06:26:42 AM CST
 * Filename		: MyString.h
 * Description	: 
 * ******************************************************/
#ifndef _MYSTRING_H
#define _MYSTRING_H
#include <ostream>
using namespace std;

class MyString
{
public:
	MyString(const char *str = NULL);	// constructor
	MyString(const MyString &other);	// copy constructor
	~MyString();						// destructor
	MyString &operator= (const MyString &other);	// overload of =
	friend ostream &operator<< (ostream &os, const MyString &str);	//overload of <<
	size_t getLength() const;	// get the length of string
private:
	char *m_data;
};
#endif // _MYSTRING_H

