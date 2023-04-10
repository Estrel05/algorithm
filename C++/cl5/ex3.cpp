#include <iostream>
using namespace std;

int& addConst(int& x, int y) {
    x = x + 200;
    y = y + 200;
    cout << "addConst함수에서 x, y를 출력합니다." << endl;
    cout << "&x = " << &x << "  x = " << x << endl;  // addConst의 x와 main의 a는 같은 기억 장소를 공유한다
    cout << "&y = " << &y << "  y = " << y << endl;  // addConst의 y와 main의 b는 다른 기억 장소를 갖는다
    return x;
}

int main() {
    int a = 100, b = 10;
    addConst(a, b) = 555;  // addConst()가 리턴한 변수x와 공유, x와 a에 555 저장
    cout << "main함수에서 addConst(a, b) = 555일 때의 a, b를 출력합니다." << endl;
    cout << "&a = " << &a << "  a = " << a << endl;
    cout << "&b = " << &b << "  b = " << b << endl;
    return 0;
}