#include <iostream>
class RectangularPrism {
private:float length, width, height;
public:
	RectangularPrism():length(0),width(0),height(0){}
	void input() {
        std::cout << "�����볤�����ĳ���: ";
        std::cin >> length;
        std::cout << "�����볤�����Ŀ��: ";
        std::cin >> width;
        std::cout << "�����볤�����ĸ߶�: ";
        std::cin >> height;
	}
    float Volume() {
        return length* width * height;
    }
    void print() {
        std::cout << "�������������: " << Volume() << std::endl;
    }
};
int main() {
    RectangularPrism prism1, prism2, prism3;
    std::cout << "�����һ���������ĳߴ�:" << std::endl;
    prism1.input();
    std::cout << "����ڶ����������ĳߴ�:" << std::endl;
    prism2.input();
    std::cout << "����������������ĳߴ�:" << std::endl;
    prism3.input();

    std::cout << "��һ��������:";
    prism1.print();
    std::cout << "�ڶ���������:";
    prism2.print();
    std::cout << "������������:";
    prism3.print();
}