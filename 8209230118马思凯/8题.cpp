//#include<iostream>
//using namespace std;
//double square(double a){
//	double x = a;
//	double epsilon = 0.00000000000000000001;
//	double nextx;
//	while (true) {
//		 nextx = 0.5 * (x + a / x);
//		if (abs(nextx - x) < epsilon) {break ;}
//		x = nextx;
//	}
//	return nextx;
//	
//}
//int main() {
//	double a;
//	cin >> a;
//	if (a < 0) { return 0; }
//	cout << square(a);
//	return 0;
//}
//#include <iostream>
//#include <cmath>
#include<iomanip>
using namespace std;

long double squareRoot(double a) {
    long double x = a;
    long double epsilon = 1e-10;  // 精度设定为 1e-10

    while (std::fabs(x * x - a) >= epsilon) {
        x = (x + a / x) / 2;
    }

    return x;
}

int main() {
    long double a;
    std::cout << "请输入一个数 a: ";
    std::cin >> a;

    long double squareRootValue = squareRoot(a);

    std::cout << "a 的平方根为: " << setprecision(12) <<squareRootValue << std::endl;

    return 0;
}