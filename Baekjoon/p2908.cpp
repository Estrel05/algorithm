#include <iostream>
using namespace std;

int main() {
    char a[4], b[4], c[4], d[4];
    int e, f;
    cin >> a >> b;
    for (int i = 0; i < 3; i++) {
        c[2 - i] = a[i];
        d[2 - i] = b[i];
    }
    e = atoi(c);
    f = atoi(d);
    if (e > f)
        cout << e << '\n';
    else
        cout << f << '\n';
}