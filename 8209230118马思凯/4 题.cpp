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
		if (num2 == 0) { cout << "无效\n"; }cout << num1 / num2; break;
	case'%':
		if (num2 == 0) { cout << "无效\n"; }cout << fmod(num1,num2); break;
	default:cout<<"非法运算符";
		break;
	}
 return 0;
}