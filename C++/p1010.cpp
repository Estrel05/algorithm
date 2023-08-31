#include <iostream>
using namespace std;

int dp[30][30] = {0};

int combination(int n, int r) {
    if (n == r || r == 0) {
        return 1;
    } else if (dp[n][r] != 0)
        return dp[n][r];

    dp[n][r] = combination(n - 1, r - 1) + combination(n - 1, r);
    return dp[n][r];
}

int main() {
    int t, n, r;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> r >> n;
        cout << combination(n, r) << '\n';
    }
}