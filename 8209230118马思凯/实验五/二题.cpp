
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
int main()
{
	Student stud;    
	stud.set_value(1, "somebody", 'f');//�������
	Student stud1(007, "tcg", 'm');
	stud.display();     
	stud1.display();//ִ��stud�����display����
	return 0;
}
