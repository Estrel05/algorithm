#include <iostream>
using namespace std;

int main() {
    int m, n, min = 10000, sum = 0;

    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        bool p = 1;
        if (i == 1) continue;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0) {
                p = 0;
                break;
            }
        if (p) {
            sum += i;
            if (i < min) min = i;
        }
    }
    if (sum == 0)
        cout << -1 << '\n';
    else
        cout << sum << '\n' << min << '\n';
}