#include<iostream>
using namespace std;
int main() {
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b) {
		cout << "可以三角形" << endl;
		if (a == b || b == c || a == c) {
			cout << "是等腰三角形\n";


		}
		else {
			cout << "非等腰三角形\n";
		}
		cout << a + b + c;
	}
	else {
		cout << "不符合三角形" << endl;
		
	}
	return 0;
}