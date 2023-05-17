#include <iostream>
using namespace std;

class Base {
   public:
    virtual ~Base() { cout << "~Base()" << endl; }
};

class Derived : public Base {
   public:
    virtual ~Derived() { cout << "~Derived()" << endl; }
};

int main() {
    Derived* dp = new Derived();
    Base* bp = new Derived();

    delete dp;
    delete bp;
}

/*
순수 가상 함수
pure virtual function
함수의 코드가 없고 선언만 있는 가상 멤버 함수
인터페이스는 순수 가상 함수의 집합
선언 방법

    class Shape {
        public:
         virtual void draw() = 0;
    }

추상 class: 최소 하나의 순수 가상 멤버 함수를 가진 class
온전한 class가 아니므로 객체 생성 불가능
추상 클래스의 포인터는 선언 가능
순수 가상 함수를 통해 파생 클래스에서 구현할 함수의 원형을 보여주는 인터페이스 역할
추상 클래스의 모든 멤버 함수를 순수 가상 함수로 선언할 필요는 없음

인터페이스
인터페이스만 선언하고 구현을 분리하여, 작업자마다 다양한 구현을 할 수 있음
사용자는 구현의 내용은 모르지만, 인터페이스에 선언된 순수 가상 함수가 구현되어 있기 때문에 호출하여 사용하기만 하면 됨
*/