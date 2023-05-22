#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
void Print(T1 a, T2 b, T3 c) {
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}

int main(void) {
    Print(1, 1, 1.1);
    Print(2, 2.2, 'a');
    Print("test", 3, 3.3);
}