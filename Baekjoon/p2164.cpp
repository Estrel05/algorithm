#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    queue<int> q;
    cin >> n;
    for (int i = 1; i <= n; i++) q.push(i);
    if (q.size() == 1) {
        cout << q.front() << '\n';
        return 0;
    }

    while (1) {
        q.pop();
        if (q.size() == 1) {
            cout << q.front() << '\n';
            return 0;
        }
        q.push(q.front());
        q.pop();
    }
}
