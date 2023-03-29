#include <iostream>
using namespace std;

class Sample {
    int *p;
    int capacity;
    int size;

   public:
    Sample(int n) {
        capacity = n;
        p = new int[n];
    }
    void read();
    void write();
    int big();
    int getSize() { return size; }
    ~Sample() { delete[] p; }
};

void Sample::read() {
    cout << "정수의 개수를 입력해주십시오: ";
    cin >> size;
    cout << size << "개의 정수를 입력해주십시오: ";
    for (int i = 0; i < size; i++) cin >> *(p + i);
}

void Sample::write() {
    for (int i; i < size; i++) cout << *(p + i) << ' ';
}

int Sample::big() { int tmp; }

int main() {
    Sample s(10);
    s.read();
    cout << "동적배열 정수 " << s.getSize() << "개를 출력합니다.";
    s.write();
    cout << "가장 큰 수는 " << s.big() << endl;
}