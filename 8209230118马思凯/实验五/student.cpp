
#include <iostream>
#include"student.h"   
//不要漏写此行，否则编译通不过
#include <cstring>
using namespace std;

void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int n, const string& nme, char s) {
    num = n;
    name = nme;
    sex = s;
}



Student::Student()
{
}

Student::Student(int n, const string& nme, char s) : num(n), sex(s)
{
    name = nme;
}

Student::~Student()
{
}

