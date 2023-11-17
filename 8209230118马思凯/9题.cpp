#include<iostream>
using namespace std;
int main() {
	int apple = 2,day=0;
	double totalcost=0;
	
	while (apple <= 100) {
		totalcost += apple * 0.8;
		apple *= 2;
		day++;
	}
	cout << totalcost / day;
}