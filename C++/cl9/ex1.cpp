#include <iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s);

class Rect {
    int width, height;

   public:
    Rect(int width, int height) {
        this->width = width;
        this->height = height;
    }
    friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s) {
    if (r.width == s.width && r.height == s.height)
        return true;
    else
        return false;
}

int main() {
    Rect a(3, 4), b(4, 5);
    if (equals(a, b))
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
}

/*
overloading
ⓐ 함수의 중복: 이름이 같지만 다른 함수
ⓑ 연산자 중복: 같은 연산자이지만 다른 기능

friend 함수
ⓐ friend 초대 유형
    - 전역 함수: 클래스 외부에 선언된 전역 함수
    - 다른 클래스의 멤버 함수: 다른 클래스의 특정 멤버 함수
    - 다른 클래스 전체: 다른 클래스의 모든 멤버 함수

연산자 중복
ⓐ 객체를 기본 연산자와 같이 사용(편의성 제공)
ⓑ 연산자 중복 구현
    - 클래스의 멤버 함수로 구현
    - 외부 함수로 구현 후 friend 함수 선언
*/