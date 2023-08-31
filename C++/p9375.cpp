#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int t, n;
    string clothes, kind;

    cin >> t;
    for (int i = 0; i < t; i++) {
        map<string, int> c;
        int cnt = 1;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> clothes >> kind;
            c[kind]++;
        }
        for (auto it = c.begin(); it != c.end(); it++) cnt *= it->second + 1;
        cout << cnt - 1 << '\n';
    }
}