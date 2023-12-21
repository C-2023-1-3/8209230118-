#include <iostream>
class RectangularPrism {
private:float length, width, height;
public:
	RectangularPrism():length(0),width(0),height(0){}
	void input() {
        std::cout << "请输入长方柱的长度: ";
        std::cin >> length;
        std::cout << "请输入长方柱的宽度: ";
        std::cin >> width;
        std::cout << "请输入长方柱的高度: ";
        std::cin >> height;
	}
    float Volume() {
        return length* width * height;
    }
    void print() {
        std::cout << "长方柱的体积是: " << Volume() << std::endl;
    }
};
int main() {
    RectangularPrism prism1, prism2, prism3;
    std::cout << "输入第一个长方柱的尺寸:" << std::endl;
    prism1.input();
    std::cout << "输入第二个长方柱的尺寸:" << std::endl;
    prism2.input();
    std::cout << "输入第三个长方柱的尺寸:" << std::endl;
    prism3.input();

    std::cout << "第一个长方柱:";
    prism1.print();
    std::cout << "第二个长方柱:";
    prism2.print();
    std::cout << "第三个长方柱:";
    prism3.print();
}