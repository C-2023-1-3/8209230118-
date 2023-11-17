#include <iostream>
using namespace std;

	int findGCD(int a, int b) {
		while (b != 0) {
			int temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}
	int findLCM(int a, int b) {
		return(a * b) / findGCD(a, b);


	}
	int main(){
		int a, b;
		cin >> a >> b;
		if (a <= 0 || b <= 0) {
			cout << "ÎÞÐ§";
		}
		cout << findGCD(a, b) << endl;
		cout << findLCM(a, b) << endl;
		return 0;
	}
