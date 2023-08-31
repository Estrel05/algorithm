#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {
    int n, k, sum = 0;
    map<int, int> m;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        sum += k;
        m[k]++;
    }
    vector<pair<int, int>> v(m.begin(), m.end());

    int idx = 0, cnt = 0;
    while (1) {
        cnt += v[idx].second;
        if (cnt >= n / 2 + 1) break;
        idx++;
    }
    int avg = int(round(float(sum) / float(n)));
    int med = v[idx].first;
    int range = v.back().first - v.front().first;

    sort(v.begin(), v.end(), compare);
    int mode = (v.size() == 1 || v[0].second != v[1].second) ? v[0].first : v[1].first;

    cout << avg << '\n' << med << '\n' << mode << '\n' << range << '\n';
}