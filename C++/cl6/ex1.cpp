#include <iostream>
using namespace std;

int main() {
    int* a = new int(3);
    int* b = new int(5);
    cout << "a의 주소(복사 전): " << a << endl;
    cout << "b의 주소(복사 전): " << b << endl;

    a = b;
    *b = 10;
    cout << "a의 주소(복사 후): " << a << endl;
    cout << "b의 주소(복사 후): " << b << endl;

    cout << "a의 값: " << *a << endl;
    cout << "b의 값: " << *b << endl;

    delete a;
    delete b;
}