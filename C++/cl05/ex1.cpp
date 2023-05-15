#include <iostream>
using namespace std;

char c = 'a';               // c는 전역 변수
char& find() { return c; }  // char 타입의 참조 리턴, 변수 c에 대한 참조 리턴

int main() {
    char& ref = find();  // ref는 c에 대한 차조
    ref = 'M';
    cout << "c = " << c << "    ref = " << ref << endl;

    char ch = find();
    cout << "ch = " << ch << endl;  // ch는 별도 공간

    find() = 'b';
    cout << "c = " << c << "    ref = " << ref << endl;
    cout << "ch = " << ch << endl;
}