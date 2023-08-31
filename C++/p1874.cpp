#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n, k, cnt = 1;
    stack<int> s;
    vector<char> v;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        while (cnt <= k) {
            s.push(cnt);
            v.push_back('+');
            cnt++;
        }
        if (k == s.top()) {
            s.pop();
            v.push_back('-');
        } else {
            cout << "NO\n";
            return 0;
        }
    }
    for (int i = 0; i < v.size(); i++) cout << v[i] << '\n';
}