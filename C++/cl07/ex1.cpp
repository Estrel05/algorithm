#include <iostream>
using namespace std;

void fillLine(int n = 25, char c = '*') {  // 디폴트 매개변수를 가진 함수
    for (int i = 0; i < n; i++) cout << c;
    cout << endl;
}

int main() {
    fillLine();
    fillLine(10, '%');
}