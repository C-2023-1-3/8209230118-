
#include <iostream>
#include"student.h"   
//��Ҫ©д���У��������ͨ����
#include <cstring>
using namespace std;

void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
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

