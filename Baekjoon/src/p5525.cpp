#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m, ans = 0;
    string s;

    cin >> n >> m >> s;
    for (int i = 0; i < m - n * 2; i++) {
        int cnt = 0;

        if (s[i] == 'O') continue;
        while (s[i + 1] == 'O' && s[i + 2] == 'I') {
            cnt++;

            if (cnt >= n) ans++;
            i += 2;
        }
    }
    cout << ans << '\n';
}