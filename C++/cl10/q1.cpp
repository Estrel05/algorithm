#include <iostream>
using namespace std;

class CPoint {
    int x, y;

   public:
    CPoint(int a = 0, int b = 0) : x(a), y(b) {}
    CPoint operator-() { return CPoint(-x, -y); }
    void Print() { cout << '(' << x << ',' << y << ')' << endl; };
};

int main(void) {
    CPoint P1(2, 2);
    CPoint P2 = -P1;
    CPoint P3 = -(-P1);

    P1.Print();
    P2.Print();
    P3.Print();
}