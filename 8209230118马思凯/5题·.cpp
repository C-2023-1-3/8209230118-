#include <iostream>
#include <cctype>

int main() {
    char c;
    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    std::cout << "������һ���ַ����Ի��н�����:" ;

    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            letterCount++;
        }
        else if (isspace(c)) {
            spaceCount++;
        }
        else if (isdigit(c)) {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    std::cout << "��ĸ������" << letterCount << std::endl;
    std::cout << "�ո������" << spaceCount << std::endl;
    std::cout << "���ָ�����" << digitCount << std::endl;
    std::cout << "�����ַ�������" << otherCount << std::endl;

    return 0;
}