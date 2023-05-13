#include <iostream>
#include <string>
using namespace std;

class Shape {
    int x, y;

   public:
    Shape() { cout << "Shape 持失切()" << endl; }
    Shape(int xloc, int yloc) : x(xloc), y(yloc) { cout << "Shape 持失切(" << xloc << ',' << yloc << ')' << endl; }
    ~Shape() { cout << "Shape 社瑚切()" << endl; }
};

class Rectangle : public Shape {
    int width, height;

   public:
    Rectangle(int xloc, int yloc, int w, int h);
    ~Rectangle() { cout << "Rectangle 社瑚切()" << endl; }
};

int main() { Rectangle r(4, 6, 100, 100); }