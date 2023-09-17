#include <iostream>
#include <string>
using namespace std;

void isPalandrome(string s) {
    int f = 0, b = s.length() - 1, ans = 1, cnt = 0;

    while (1) {
        cnt++;
        if (f >= b) break;
        if (s[f] != s[b]) {
            ans = 0;
            break;
        }
        f++;
        b--;
    }
    cout << ans << ' ' << cnt << '\n';
}

int main() {
    int t;
    string s;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> s;
        isPalandrome(s);
    }
}