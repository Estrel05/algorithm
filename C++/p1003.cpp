#include <iostream>
using namespace std;

int main() {
    int fibonacci[41], t, n;
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2; i < 41; i++) fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n == 0)
            cout << 1 << ' ' << 0 << '\n';
        else if (n == 1)
            cout << 0 << ' ' << 1 << '\n';
        else
            cout << fibonacci[n - 1] << ' ' << fibonacci[n] << '\n';
    }
}