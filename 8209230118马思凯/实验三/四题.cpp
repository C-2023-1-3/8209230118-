#include <iostream>

int peachesLeft(int day) {
    if (day == 10) {
        return 1;  // ��10��ʣ��1������
    }
    else {
      
        return (peachesLeft(day + 1) + 1) * 2;  // ���ݵ��ƹ�ʽ����ǰһ���ʣ����������
        
    }std::cout << day << peachesLeft(day) << std::endl;
}
int day = 1;
int main() {
   peachesLeft(day);

    std::cout << day << peachesLeft(day) << std::endl;

        return 0;
}