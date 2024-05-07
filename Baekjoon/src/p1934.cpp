#include <iostream>
using namespace std;

int lcm(int a, int b) {
    if (b % a == 0)
        return a;
    else
        return lcm(b % a, a);
}

int main() {
    int t, a, b;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << a * b / lcm(a, b) << '\n';
    }
}