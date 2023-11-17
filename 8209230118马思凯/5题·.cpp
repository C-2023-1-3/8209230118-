#include <iostream>
#include <cctype>

int main() {
    char c;
    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    std::cout << "请输入一行字符（以换行结束）:" ;

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

    std::cout << "字母个数：" << letterCount << std::endl;
    std::cout << "空格个数：" << spaceCount << std::endl;
    std::cout << "数字个数：" << digitCount << std::endl;
    std::cout << "其他字符个数：" << otherCount << std::endl;

    return 0;
}