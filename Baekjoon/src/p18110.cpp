#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>
using namespace std;

int main() {
    int n, m, r;
    deque<int> d;

    cin >> n;
    if (n == 0) {
        cout << 0 << '\n';
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> r;
        d.push_back(r);
    }
    sort(d.begin(), d.end());

    int t = round(float(n) * 0.15);
    for (int i = 0; i < t; i++) {
        d.pop_front();
        d.pop_back();
    }

    int sum = 0;
    for (int i = 0; i < d.size(); i++) sum += d[i];

    cout << round(float(sum) / float(d.size())) << '\n';
}