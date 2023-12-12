#include <iostream>
#include <cstring>
using namespace std;
int indexof(const char* s1, const char* s2) {
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	for (int i = 0; i <= s2_len - s1_len; i++) {
		int j;
		for ( j = 0; j < s1_len; j++) {
			if (s1[j] != s2[i + j]) { break; }
		}
		if (j == s1_len) { return i; }
	}
	return -1;
}
int main() {
	char s1[100];
	char s2[100];
	cin.getline(s1, 100);
	cin.getline(s2, 100);

	if (indexof(s1, s2) != -1) { cout << "下标" << indexof(s1, s2); }
	else if (indexof(s2, s1) != -1) { cout << "下标" << indexof(s2, s1); }
	else { cout << -1; }
	return 0;
}