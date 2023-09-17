#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, h, ans, low = 0, high = 0;
    vector<int> tree;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> h;
        tree.push_back(h);
        if (h > high) high = h;
    }

    while (low <= high) {
        long long mid = (low + high) / 2, sum = 0;

        for (int i = 0; i < tree.size(); i++)
            if (tree[i] > mid) sum += tree[i] - mid;
        if (sum < m)
            high = mid - 1;
        else if (sum > m) {
            ans = mid;
            low = mid + 1;
        } else {
            ans = mid;
            break;
        }
    }

    cout << ans << '\n';
}