#include <iostream>
using namespace std;

class Circle {
    int radius;

   public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle &c) {
    int r;
    cout << "정수 값으로 반지름을 입력하세요: ";
    cin >> r;
    c.setRadius(r);
}

int main() {
    Circle donut;
    readRadius(donut);
    cout << "donut의 넓이는 " << donut.getArea() << endl;
}
/*
1. 참조 변수는 선언과 동시에 초기화해야 함
2. 선언에 따라 참조 변수, 일반 변수를 구분
ex) int a = 10;
int& refa = a;
int b = refa;
이때 b가 참조 함수는 아니다.
단지 참조변수 refa의 값이 b와 같은 것뿐다.
*/