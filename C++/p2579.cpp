#include <iostream>
using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main() {
    int n, stair[301], dp[301];

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> stair[i];

    dp[0] = 0;
    dp[1] = stair[1];
    dp[2] = stair[1] + stair[2];
    for (int i = 3; i <= n; i++) dp[i] = stair[i] + max(dp[i - 2], stair[i - 1] + dp[i - 3]);
    cout << dp[n] << '\n';
}