#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int lcm(int a, int b) {
    if (b % a == 0)
        return a;
    else
        return lcm(b % a, a);
}

int main() {
    int n, k, gd;
    vector<int> t, d;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        t.push_back(k);
    }
    for (int i = 0; i < n - 1; i++) d.push_back(t[i + 1] - t[i]);
    sort(d.begin(), d.end());
    d.erase(unique(d.begin(), d.end()), d.end());

    gd = d[0];
    for (int i = 1; i < n - 1; i++) gd = lcm(gd, d[i]);
    cout << (t[n - 1] - t[0]) / gd - n + 1 << '\n';
}