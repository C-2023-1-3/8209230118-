#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void setTime(int h, int m, int s) {
		hour = h;
		minute = m;
		sec = s;
	}
	void getTime(int& h, int& m, int& s) {
		h = hour;
		m = minute;
		s = sec;
	}
	void inputTime() {
		cin >> hour >> minute >> sec;

			
	}
	void outputTime() {
		cout << hour << ' ' << minute << ' ' << sec << endl;
	}
};
int main() {
	Time t1;
	t1.inputTime();
	t1.outputTime();
	return 0;
}