#include <iostream>
using namespace std;

int gcd(int m, int n) {
	while (n != 0) {
		int temp = m % n;
		m = n;
		n = temp;
		
	}
	return m;
}
int lcm(int m, int n) {
	
	return (m * n) / gcd(m, n);
	

}


int main() {
	int m, n;
	cout << "请输入两个自然数 m 和 n: ";
	cin >> m >> n;
	
	cout << "最大公约数是: " << gcd(m, n)<< std::endl;
	cout << "最小公倍数是: " << lcm(m,n)<< std::endl;
	return 0;

	

}
 