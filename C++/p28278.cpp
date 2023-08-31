#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t, n, x, tmp;
    stack<int> s;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n == 1) {
            cin >> x;
            s.push(x);
        } else if (n == 2) {
            tmp = s.empty() ? -1 : s.top();
            cout << tmp << '\n';
            if (tmp != -1) s.pop();
        } else if (n == 3)
            cout << s.size() << '\n';
        else if (n == 4)
            cout << s.empty() << '\n';
        else if (n == 5) {
            tmp = s.empty() ? -1 : s.top();
            cout << tmp << '\n';
        }
    }
}