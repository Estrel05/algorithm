#include <iostream>
using namespace std;

class Circle {
    int radius;

   public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    double getArea();
};

double Circle::getArea() { return 3.14 * radius * radius; }

int main() {
    Circle circleArray[3] = {Circle(10), Circle(20), Circle()};
    Circle *p = circleArray;
    for (int i = 0; i < 3; i++) {
        cout << "circleArray[] " << i << "ÀÇ ³ÐÀÌ´Â " << circleArray[i].getArea() << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << "*(circleArray + i) " << i << "ÀÇ ³ÐÀÌ´Â " << (*(circleArray + i)).getArea() << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << "p[i] " << i << "ÀÇ ³ÐÀÌ´Â " << p[i].getArea() << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << "*(p + i)" << i << "ÀÇ ³ÐÀÌ´Â" << (*(p + 1)).getArea() << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << "p-> " << i << "ÀÇ ³ÐÀÌ´Â " << p->getArea() << endl;
    }
}