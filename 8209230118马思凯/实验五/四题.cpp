#include <iostream>	
using namespace std;
#include<vector>
class Student {
public:
    int id;         // 学号
    float score;    // 成绩

    // 构造函数
    Student(int id, float score) : id(id), score(score) {}

    // 默认构造函数
    Student() : id(0), score(0.0f) {}
};
void max(const vector<Student> &students, int size) {
    int maxIndex = 0;
    float maxScore = students[0].score;
    for (int i = 1; i < size; i++) {
        if (students[i].score > maxScore) {
            maxScore = students[i].score;
            maxIndex = i;
        }
    }
    cout << "maxID" << students[maxIndex].id << endl;
    cout << "maxScore" << students[maxIndex].score << endl;
}
int main() {
    cout << "多少学生";
    int size;
    cin >> size;
    vector<Student>students;
    int id;
    float score;
    for (int i = 0; i < size; i++) {
        std::cout << "Enter ID for student " << i + 1 << ": ";
        std::cin >> id;
        std::cout << "Enter score for student " << i + 1 << ": ";
        std::cin >> score;
        students.emplace_back(id, score);
    }
    max(students, size);
    return 0;

}