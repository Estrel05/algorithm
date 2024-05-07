#include <iostream>
using namespace std;

int main() {
    int n, m, i, j;

    cin >> n >> m;
    int arr[n], sum[n + 1];
    for (int k = 0; k < n; k++) cin >> arr[k];

    sum[0] = 0;
    for (int k = 1; k <= n; k++) sum[k] = sum[k - 1] + arr[k - 1];
    for (int k = 0; k < m; k++) {
        cin >> i >> j;
        cout << sum[j] - sum[i - 1] << '\n';
    }
}