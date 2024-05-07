#include <iostream>
#include <queue>
using namespace std;

int main() {
    int t;

    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m, cnt = 1;
        queue<pair<int, int>> q;
        priority_queue<int> pq;

        cin >> n >> m;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            q.push({j, x});
            pq.push(x);
        }
        while (!q.empty()) {
            if (q.front().second == pq.top()) {
                if (q.front().first == m) break;
                q.pop();
                pq.pop();
                cnt++;
            } else {
                q.push(q.front());
                q.pop();
            }
        }
        cout << cnt << '\n';
    }
}