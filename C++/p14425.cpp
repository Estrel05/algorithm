#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, m, cnt = 0;
    string str;
    vector<string> v;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> str;
        v.push_back(str);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < m; i++) {
        int low = 0, high = n - 1;
        cin >> str;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (str == v[mid]) {
                cnt++;
                break;
            } else if (str < v[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
    }
    cout << cnt << '\n';
}