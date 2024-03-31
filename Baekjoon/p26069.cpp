#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n, cnt = 1;
    string a, b;
    map<string, bool> m;

    m["ChongChong"] = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (m[a] && m[b])
            continue;
        else if (m[a] || m[b]) {
            m[a] = 1;
            m[b] = 1;
            cnt++;
        } else {
            m[a] = 0;
            m[b] = 0;
        }
    }
    cout << cnt << '\n';
}