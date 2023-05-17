#include <iostream>
using namespace std;

class Shape {
   public:
    void paint() { draw(); }
    virtual void draw() { cout << "Shape::draw() called" << endl; }
};

int main() {
    Shape *pShape = new Shape();
    pShape->paint();
    delete pShape;
}
/*
function overriding
실행조건
1. virtual keyword 사용
2. upcasting(pointer)
3. pBase->f(): 파생 class의 f() 수행
4. 함수 이름, 매개변수(개수, type), return type이 동일해야 함
Base *p = &obj(stack)
Base *p = new Derived()(heap)
*/