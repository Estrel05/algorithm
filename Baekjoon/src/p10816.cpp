#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, m, k;
    map<int, int> mp;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        mp[k]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> k;
        cout << mp[k] << ' ';
    }
    cout << '\n';
}