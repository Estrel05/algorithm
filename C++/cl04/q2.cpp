#include <iostream>
using namespace std;

class Circle {
    int radius;

   public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    void setRadius(int radius) { this->radius = radius; }
    void readRadius();
    double getArea() { return 3.14 * radius * radius; }
};

void Circle::readRadius() {
    int r;
    cout << "정수 값으로 반지름을 입력하세요: ";
    cin >> r;
    setRadius(r);
}

int main() {
    Circle donut;
    donut.readRadius();
    cout << "donut의 넓이는 " << donut.getArea() << endl;
}