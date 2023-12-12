#include <iostream>
using namespace std;
int main() {
	const int arrsize = 10;
	int arr[arrsize];
	int unique[arrsize];
	int uniqueCount = 0;
	for (int i = 0; i < arrsize; i++) { cin >> arr[i]; }
	for (int i = 0; i < arrsize; i++) {
		bool isDuplicate = false;
		for (int j = 0; j < uniqueCount; j++) {
			if (arr[i] == unique[j]) {
				isDuplicate = true; break;
			}
		}
		if (!isDuplicate) { unique[uniqueCount] = arr[i]; uniqueCount++; }
	}
	for (int i = 0; i < uniqueCount; i++) { cout << unique[i] << " "; }
	return 0;
}