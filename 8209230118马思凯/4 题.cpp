#include<iostream>
using namespace std;
int main() {
	char op;
	float num1, num2;
	cin >> num1>>num2>>op;
	switch (op)
	{
	case '+':
		cout << num1 + num2;
		break;

	case'-':
		cout << num1 - num2; break;
	case'*':
		cout << num1 * num2; break;
	case'/':
		if (num2 == 0) { cout << "��Ч\n"; }cout << num1 / num2; break;
	case'%':
		if (num2 == 0) { cout << "��Ч\n"; }cout << fmod(num1,num2); break;
	default:cout<<"�Ƿ������";
		break;
	}
 return 0;
}