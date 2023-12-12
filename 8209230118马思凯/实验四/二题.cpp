#include <iostream>
using namespace std;
void bubbleSort(double list[],int listSize) {
	bool changed = true;
	do {
		changed = false;
		for (int j = 0; j< listSize - 1; j++) {
			if (list[j] > list[j + 1]) {
				swap(list[j], list[j +1]); changed = true;
			}
		}

	} while (changed);
	
}
int main() {
	const int arrSize = 10;
	double arr[arrSize];
	for (int i = 0; i < arrSize; i++) { cin >> arr[i]; }
	bubbleSort(arr, arrSize);
	for (int i = 0; i < arrSize; i++) { cout << arr[i]<<" "; }
	return 0;
}