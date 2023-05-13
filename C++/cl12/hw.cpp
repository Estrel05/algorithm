#include <iostream>
using namespace std;

class BaseArray {
    int capacity;
    int* mem;

   protected:
    BaseArray(int capacity = 100) {
        this->capacity = capacity;
        mem = new int[capacity];
    }
    ~BaseArray() {
        if (mem) delete[] mem;
    }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
    void putCapacity(int newCap);
};

void BaseArray::putCapacity(int newCap) {
    capacity = newCap;
    int* tmp = new int[capacity];
    for (int i = 0; i < capacity; i++) {
        tmp[i] = mem[i];
    }
    delete[] mem;
    mem = tmp;
}

class MyStack : public BaseArray {
    int tos = -1;

   public:
    MyStack(int capacity) : BaseArray(capacity){};
    int capacity() { getCapacity(); }
    int length() { return tos + 1; }
    void push(int n);
    int pop();
};

void MyStack::push(int n) {
    if (tos == capacity() - 1) {
        putCapacity(capacity() * 2);
    }
    put(++tos, n);
}

int MyStack::pop() {
    int tmp = get(tos--);
    if (tos > -1 && tos == capacity() / 4 - 1) {
        putCapacity(capacity() / 2);
    }
    return tmp;
}

int main() {
    MyStack mStack(1);
    int n;
    cout << "스택에 삽입할 5개의 정수를 입력하십시오: ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mStack.push(n);
    }
    cout << "스택 용량: " << mStack.capacity() << ", 스택 크기: " << mStack.length() << endl;
    cout << "스택의 모든 원소를 팝하여 출력합니다: ";
    while (mStack.length() > 0) {
        int k = mStack.pop();
        cout << k << ' ';
    }
    cout << "\n스택 용량: " << mStack.capacity() << ", 스택 크기: " << mStack.length() << endl;
}