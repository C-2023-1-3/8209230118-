#include<iostream>
using namespace std;
int main() {
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b) {
		cout << "����������" << endl;
		if (a == b || b == c || a == c) {
			cout << "�ǵ���������\n";


		}
		else {
			cout << "�ǵ���������\n";
		}
		cout << a + b + c;
	}
	else {
		cout << "������������" << endl;
		
	}
	return 0;
}