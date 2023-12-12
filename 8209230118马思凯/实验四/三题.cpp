#include<iostream>
#include<vector>
using namespace std;
void toggleLocks(vector<bool>& locks){
	int n = locks.size();
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			locks[j - 1] =!locks[j - 1];
		}
	}
}
int main() {
	vector<bool>locks(100, false);
	toggleLocks(locks);
	for (int i = 0; i < locks.size(); i++) {
		if (locks[i] == true) { cout <<i+1<< " "; }

	}
	return 0;
}