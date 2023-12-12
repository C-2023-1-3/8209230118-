#include <iostream>
#include <cctype>

void count(const char s[], int counts[]) {
    // ��ʼ�� counts ����Ϊ��
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    // �����ַ���������ÿ����ĸ���ֵĴ���
    for (int i = 0; s[i] != '\0'; i++) {
        char c = std::tolower(s[i]); // ����ĸת��ΪСд
        if (std::isalpha(c)) { // ֻ������ĸ
            counts[c - 'a']++;
        }
    }
}

int main() {
    const int SIZE = 26;
    int counts[SIZE] = { 0 }; // ��ʼ�� counts ����Ϊ��

    char s[100]; // �����ַ������Ȳ�����100���ַ�
    std::cout << "������һ���ַ���: ";
    std::cin.getline(s, 100);

    count(s, counts);

    std::cout << "����ĸ���ֵĴ�����" << std::endl;
    for (int i = 0; i < SIZE; i++) {
       
            std::cout << static_cast<char>('a' + i) << ": " << counts[i] << std::endl;
        
    }

    return 0;
}