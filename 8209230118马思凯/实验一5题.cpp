#include<iostream>
using namespace std;
#include<iomanip>
int main() {
	double a;
	cin >> a;
	cout << setprecision(2)<<5 * (a - 32) / 9;
}