#include <deque>
#include <iostream>
using namespace std;

int main() {
    int n, m, b, c, tmp;
    deque<int> d;

    cin >> n;
    bool a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        cin >> b;
        if (a[i]) continue;
        d.push_back(b);
    }

    cin >> m;
    while (m--) {
        cin >> c;
        d.push_front(c);
        cout << d.back() << ' ';
        d.pop_back();
    }
}