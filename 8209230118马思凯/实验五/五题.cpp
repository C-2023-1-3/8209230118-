#include <iostream>
using namespace std;

class Point {
private:
    int x, y; // ˽�б�������ʾ�������ֵ

public:
    // ���캯������ʼ��x��y��ֵ
    Point(int xCoord = 60, int yCoord = 80) : x(xCoord), y(yCoord) {}

    // �����µ�����ֵ
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    // ��ʾ��ǰ������ֵ
    void display() const {
        cout << "Current Coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // ������󲢳�ʼ��Ϊ��60��80��
    Point point;

    // ��֤display()���������ʼ��������ֵ
    cout << "Initial ";
    point.display();

    // �޸�����ֵ����֤
    point.setPoint(10, 20);  // ��������Ӧ���� (60+10, 80+20) = (70, 100)

    cout << "After calling setPoint(10, 20) ";
    point.display();

    return 0;
}