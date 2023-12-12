#include <iostream>

int peachesLeft(int day) {
    if (day == 10) {
        return 1;  // 第10天剩下1个桃子
    }
    else {
      
        return (peachesLeft(day + 1) + 1) * 2;  // 根据递推公式计算前一天的剩下桃子数量
        
    }std::cout << day << peachesLeft(day) << std::endl;
}
int day = 1;
int main() {
   peachesLeft(day);

    std::cout << day << peachesLeft(day) << std::endl;

        return 0;
}