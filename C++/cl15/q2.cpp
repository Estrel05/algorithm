#include <iostream>
using namespace std;

template <class T>
bool search(T element, T arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) return true;
    }
    return false;
}

int main() {
    int x[] = {1, 10, 100, 5, 4};
    if (search(100, x, sizeof(x) / 4))
        cout << "100이 배열 x에 포함되어 있다.";
    else
        cout << "100이 배열 x에 포함되어 있지 않다.";
    cout << endl;

    char c[] = {'h', 'e', 'l', 'l', 'o'};
    if (search('e', c, 5))
        cout << "e가 배열 c에 포함되어 있다.";
    else
        cout << "e가 배열 c에 포함되어 있다.";
    cout << endl;
}
/*
class의 일반화
1. 선언: template <class T>
    - class 앞
    - 함수의 구현부 앞
2. 일반화할 멤버 변수 및 지역 변수를 T로 선언
3. 멤버 함수 구현 시: "클래스 이름" <T>
    ex)
    template <class T>
    void MyStack <T>::pop()
*/