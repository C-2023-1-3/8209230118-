#include <iostream>
#include <cctype>

void count(const char s[], int counts[]) {
    // 初始化 counts 数组为零
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    // 遍历字符串并计数每个字母出现的次数
    for (int i = 0; s[i] != '\0'; i++) {
        char c = std::tolower(s[i]); // 将字母转换为小写
        if (std::isalpha(c)) { // 只处理字母
            counts[c - 'a']++;
        }
    }
}

int main() {
    const int SIZE = 26;
    int counts[SIZE] = { 0 }; // 初始化 counts 数组为零

    char s[100]; // 假设字符串长度不超过100个字符
    std::cout << "请输入一个字符串: ";
    std::cin.getline(s, 100);

    count(s, counts);

    std::cout << "各字母出现的次数：" << std::endl;
    for (int i = 0; i < SIZE; i++) {
       
            std::cout << static_cast<char>('a' + i) << ": " << counts[i] << std::endl;
        
    }

    return 0;
}