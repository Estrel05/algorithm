#include <iostream>
using namespace std;

int main() {
    int h, w, n, t, c, r;
    cin >> t;
    for (int i = 0; i < t; i++) {
        r = 0;
        cin >> h >> w >> n;
        if (n % h == 0) {
            r += h * 100;
            c = 0;
        } else {
            r += (n % h) * 100;
            c = 1;
        }
        r += n / h + c;
        cout << r << '\n';
    }
}