#include <iostream>
using namespace std;

int main() {
    int num, count = 0, remainder[10];
    for (int i = 0; i < 10; i++) {
        cin >> num;
        remainder[i] = num % 42;
    }
    for (int i = 0; i < 10; i++) {
        if (remainder[i] == -1) continue;
        for (int j = i + 1; j < 10; j++)
            if (remainder[i] == remainder[j]) remainder[j] = -1;
    }
    for (int i = 0; i < 10; i++)
        if (remainder[i] != -1) count++;
    cout << count << '\n';
}