#include <iostream>
using namespace std;

class CCircle {
    double Radius;
    const double PI;

   public:
    CCircle(double r = 0) : Radius(r), PI(3.14) {}
    void SetRadius(double r) { Radius = r; }
    double GetArea() const { return (PI * Radius * Radius); }
};

int main(void) {
    const CCircle Cir1(1);
    cout << "넓이: " << Cir1.GetArea() << endl;
}  // const는 멤버 변수의 수정을 막는 역할을 한다. const객체에서 비const 함수의 호출이 불가능하다.