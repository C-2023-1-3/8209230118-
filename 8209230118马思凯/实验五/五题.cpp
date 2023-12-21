#include <iostream>
using namespace std;

class Point {
private:
    int x, y; // 私有变量，表示点的坐标值

public:
    // 构造函数，初始化x和y的值
    Point(int xCoord = 60, int yCoord = 80) : x(xCoord), y(yCoord) {}

    // 设置新的坐标值
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    // 显示当前的坐标值
    void display() const {
        cout << "Current Coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // 定义对象并初始化为（60，80）
    Point point;

    // 验证display()函数输出初始化的坐标值
    cout << "Initial ";
    point.display();

    // 修改坐标值并验证
    point.setPoint(10, 20);  // 现在坐标应该是 (60+10, 80+20) = (70, 100)

    cout << "After calling setPoint(10, 20) ";
    point.display();

    return 0;
}