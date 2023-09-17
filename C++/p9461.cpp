#include <iostream>
using namespace std;

int main() {
    long long p[100];
    p[0] = 1;
    p[1] = 1;
    p[2] = 1;
    p[3] = 2;
    p[4] = 2;
    for (int i = 5; i < 100; i++) p[i] = p[i - 1] + p[i - 5];

    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << p[n - 1] << '\n';
    }
}