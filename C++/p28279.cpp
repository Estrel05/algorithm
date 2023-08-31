#include <deque>
#include <iostream>
using namespace std;

int main() {
    int n, k, x;
    deque<int> d;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k == 1) {
            cin >> x;
            d.push_front(x);
        } else if (k == 2) {
            cin >> x;
            d.push_back(x);
        } else if (k == 3) {
            if (d.empty())
                cout << -1 << '\n';
            else {
                cout << d.front() << '\n';
                d.pop_front();
            }
        } else if (k == 4) {
            if (d.empty())
                cout << -1 << '\n';
            else {
                cout << d.back() << '\n';
                d.pop_back();
            }
        } else if (k == 5)
            cout << d.size() << '\n';
        else if (k == 6)
            cout << d.empty() << '\n';
        else if (k == 7)
            cout << (d.empty() ? -1 : d.front()) << '\n';
        else if (k == 8)
            cout << (d.empty() ? -1 : d.back()) << '\n';
    }
}