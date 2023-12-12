#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int parseHex(const char* const hexString) {
    int len = strlen(hexString);
    int decimal = 0;
    for (int i = 0; i < len; i++) {
        char c = hexString[i];
        int digit;
        if (c >= '0' && c <= '9') {
            digit = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            digit = 10 + (c - 'A');
        }
        else if (c >= 'a' && c <= 'f') {
            digit = 10 + (c - 'a');
        }
        else {

            return -1;
        }
        decimal += digit * pow(16, len - i - 1);
    }
    return decimal;
}

int main() {
    const char* hexString = "A5";
    int result = parseHex(hexString);
    if (result != -1) {
        cout << "The decimal representation of " << hexString << " is " << result << endl;
    }
    else {
        cout << "Invalid hex string" << endl;
    }
    return 0;
}