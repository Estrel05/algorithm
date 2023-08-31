#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = n / 5;
    while (k >= 0) {
        if ((n - k * 5) % 3 == 0) {
            cout << k + (n - k * 5) / 3 << '\n';
            return 0;
        }
        k--;
    }
    cout << -1 << '\n';
}