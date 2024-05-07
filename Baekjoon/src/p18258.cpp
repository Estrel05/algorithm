#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int n, x;
    string str;
    queue<int> q;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == "push") {
            cin >> x;
            q.push(x);
        } else if (str == "pop") {
            if (q.empty())
                cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        } else if (str == "size")
            cout << q.size() << '\n';
        else if (str == "empty")
            cout << q.empty() << '\n';
        else if (str == "front")
            cout << (q.empty() ? -1 : q.front()) << '\n';
        else if (str == "back")
            cout << (q.empty() ? -1 : q.back()) << '\n';
    }
}