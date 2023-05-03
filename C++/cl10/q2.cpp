#include <iostream>
using namespace std;

class CPoint {
    int x, y;

   public:
    CPoint(int a = 0, int b = 0) : x(a), y(b) {}
    friend CPoint operator-(CPoint);
    void Print() { cout << '(' << x << ',' << y << ')' << endl; };
};

CPoint operator-(CPoint a) { return CPoint(-a.x, -a.y); }

int main(void) {
    CPoint P1(2, 2);
    CPoint P2 = -P1;
    CPoint P3 = -(-P1);

    P1.Print();
    P2.Print();
    P3.Print();
}