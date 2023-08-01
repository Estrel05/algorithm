#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b) { return a.first < b.first; }

int main() {
    int n;
    vector<pair<int, string>> mem;
    pair<int, string> p;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p.first >> p.second;
        mem.push_back(p);
    }
    stable_sort(mem.begin(), mem.end(), cmp);
    vector<pair<int, string>>::iterator i;
    for (i = mem.begin(); i != mem.end(); i++) cout << i->first << ' ' << i->second << '\n';
}