#pragma once
#include <string>
using namespace std;


class Student              //类声明
{
public:                   //公用成员函数原型声明
	
	// 参数化构造函数
	Student();
	Student(int num, const string &name, char sex);
	~Student();
	void display();
	void set_value(int num, const string & name, char sex);
private:
	int num;
	 string name;
	char sex;
};


