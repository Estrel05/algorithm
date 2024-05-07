#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    vector<pair<int, int>> v;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> k;
        v.push_back({i, k});
    }

    vector<pair<int, int>>::iterator it = v.begin();
    while (v.size() > 1) {
        int tmp = it->second;
        cout << it->first << ' ';
        v.erase(it);

        if (tmp > 0) {
            --it;
            for (int i = 0; i < tmp; i++) {
                ++it;
                if (it == v.end()) it = v.begin();
            }
        } else
            for (int i = 0; i < -tmp; i++) {
                --it;
                if (it == v.begin() - 1) it = v.end() - 1;
            }
    }
    v.erase(it);
    cout << v[0].first << '\n';
}