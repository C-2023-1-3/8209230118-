#pragma once
#include <string>
using namespace std;


class Student              //������
{
public:                   //���ó�Ա����ԭ������
	
	// ���������캯��
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


