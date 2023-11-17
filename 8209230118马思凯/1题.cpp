#include <iostream> 
using namespace std;
int main(char a) {
	cin >> a;
	if (a > 97 && a < 122) {
		cout << char(a - 32);

	}
	cout << int(a) << endl;
 return 0;
}