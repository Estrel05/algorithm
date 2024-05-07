#include <cmath>
#include <iostream>
using namespace std;

int n, r, c;
int ans = 0;

void traverse_Z(int x, int m, int n) {
    int size = pow(2, x);

    if (m == r && n == c)
        printf("%d\n", ans);
    else if (r < m + size && r >= m && c < n + size && c >= n) {
        traverse_Z(x - 1, m, n);
        traverse_Z(x - 1, m, n + size / 2);
        traverse_Z(x - 1, m + size / 2, n);
        traverse_Z(x - 1, m + size / 2, n + size / 2);
    } else
        ans += size * size;
}

int main() {
    cin >> n >> r >> c;
    traverse_Z(n, 0, 0);
}