#include <iostream>
using namespace std;

int dp[1000001];

int main() {
    int n;

    cin >> n;
    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        int min = dp[i - 1];
        if (i % 3 == 0 && dp[i / 3] < min) min = dp[i / 3];
        if (i % 2 == 0 && dp[i / 2] < min) min = dp[i / 2];
        dp[i] = min + 1;
    }

    cout << dp[n] << '\n';
}