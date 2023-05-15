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
    while (1) {
        cout << "정수의 개수를 입력하십시오: ";
        cin >> size;
        if (size < 1)
            cout << "정수의 개수는 " << capacity << " 이하의 자연수여야 합니다." << endl;
        else if (size > 10)
            cout << "정수의 개수는 " << capacity << " 이하의 자연수여야 합니다." << endl;
        else
            break;
    }
    cout << size << "개의 정수를 입력하십시오: ";
    for (int i = 0; i < size; i++) cin >> *(p + i);
}

void Sample::write() {
    for (int i = 0; i < size; i++) cout << *(p + i) << ' ';
    cout << endl;
}

int Sample::big() {
    int tmp = 0;
    for (int i = 0; i < size; i++)
        if (p[i] > tmp) tmp = p[i];
    return tmp;
}

int main() {
    Sample s(10);
    s.read();
    cout << "동적배열 정수 " << s.getSize() << "개를 출력합니다." << endl;
    s.write();
    cout << "가장 큰 수는 " << s.big() << "입니다." << endl;
}