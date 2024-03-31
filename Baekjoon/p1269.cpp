#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, m, k, inter = 0;
    map<int, int> num;

    cin >> n >> m;
    for (int i = 0; i < n + m; i++) {
        cin >> k;
        num[k]++;
        if (num[k] > 1) inter++;
    }
    cout << n + m - 2 * inter << '\n';
}