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
	cout << "������������Ȼ�� m �� n: ";
	cin >> m >> n;
	
	cout << "���Լ����: " << gcd(m, n)<< std::endl;
	cout << "��С��������: " << lcm(m,n)<< std::endl;
	return 0;

	

}
 