#include <iostream>
using namespace std;

class Complex {
    double re, im;

   public:
    Complex(double r = 0, double i = 0) : re(r), im(i) {}
    void Output() { cout << re << " + " << im << "i" << endl; }
    Complex& operator+=(Complex);
    Complex& operator-();
    friend Complex operator+(Complex&, Complex&);
    friend Complex operator++(Complex&);
    friend Complex operator++(Complex&, int);
    friend ostream& operator<<(ostream& os, Complex&);
};

Complex& Complex::operator+=(Complex c) {
    re = re + c.re;
    im = im + c.im;
    return *this;
}

Complex& Complex::operator-() {
    re = -re + 0.0;  // -0의 출력을 막기 위해 0.0을 더했습니다.
    im = -im + 0.0;
    return *this;
}

Complex operator+(Complex& c1, Complex& c2) {
    Complex tmp;
    tmp.re = c1.re + c2.re;
    tmp.im = c1.im + c2.im;
    return tmp;
}

Complex operator++(Complex& c) {
    c.re++;
    c.im++;
    return c;
}

Complex operator++(Complex& c, int x) {
    Complex tmp = c;
    c.re++;
    c.im++;
    return tmp;
}

ostream& operator<<(ostream& os, Complex& c) {
    os << '(' << c.re << " + " << c.im << "i)" << endl;
    return os;
}

int main() {
    Complex c1(1, 2), c2(3, 4), c(9, 200);
    c1.Output();
    c2.Output();
    c1 += c2;
    c1.Output();
    Complex c3 = c1 + c2;
    Complex c4 = c1 += c2, c5, c6;
    c3.Output();
    c5 = ++c4;
    c4.Output();
    c5.Output();
    c6 = c4++;
    c4.Output();
    c6.Output();
    c2 = -c2;
    cout << c2;
    cout << c;
}