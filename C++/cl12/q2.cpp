#include <iostream>
#include <string>
using namespace std;

class Shape {
    int x, y;

   public:
    Shape() { cout << "Shape ������()" << endl; }
    Shape(int xloc, int yloc) : x(xloc), y(yloc) { cout << "Shape ������(" << xloc << ',' << yloc << ')' << endl; }
    ~Shape() { cout << "Shape �Ҹ���()" << endl; }
};

class Rectangle : public Shape {
    int width, height;

   public:
    Rectangle(int xloc, int yloc, int w, int h);
    ~Rectangle() { cout << "Rectangle �Ҹ���()" << endl; }
};

int main() { Rectangle r(4, 6, 100, 100); }