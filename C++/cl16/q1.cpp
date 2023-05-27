#include <iostream>
using namespace std;

template <typename T>
class Point {
    T x, y;

   public:
    Point(T a = 0, T b = 0) : x(a), y(b) {}
    template <typename T>
    friend ostream& operator<<(ostream& out, Point<T>& Po);
};

template <typename T>
ostream& operator<<(ostream& out, Point<T>& Po) {
    out << '(' << Po.x << ", " << Po.y << ')';
    return out;
}

int main() {
    Point<int> a(3, 5);
    cout << a << endl;
    Point<double> b(3.5, 5.5);
    cout << b << endl;
}