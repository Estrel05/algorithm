#include <iostream>
using namespace std;

int main() {
    int a, b, n, m, tmp;
    cin >> n >> m;
    int basket[n];
    for (int i = 0; i < n; i++) basket[i] = i + 1;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        tmp = basket[a - 1];
        basket[a - 1] = basket[b - 1];
        basket[b - 1] = tmp;
    }
    for (int i = 0; i < n; i++) cout << basket[i] << ' ';
}