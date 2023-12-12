#include <iostream>

int indexOf(const char s1[], const char s2[]) {
    int s1_length = 0;
    while (s1[s1_length] != '\0') {
        s1_length++;
    }
    int s2_length = 0;
    while (s2[s2_length] != '\0') {
        s2_length++;
    }
    for (int i = 0; i <= s2_length - s1_length; i++) {
        int j;
        for (j = 0; j < s1_length; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == s1_length) {
            return i;
        }
    }
    return -1;
}

int main() {
    char s1[100], s2[100];
    std::cout << "请输入字符串 s1: ";
    std::cin.getline(s1, 100);
    std::cout << "请输入字符串 s2: ";
    std::cin.getline(s2, 100);
    int index = indexOf(s1, s2);
    if (index == -1) {
        std::cout << "s1 不是 s2 的子串。" << std::endl;
    } else {
        std::cout << "s1 是 s2 的子串，起始下标为 " << index << "。" << std::endl;
    }
    return 0;
}