#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n, e;

    cin >> n >> e;
    vector<vector<int>> list(n + 1);
    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        list[a].push_back(b);
        list[b].push_back(a);
    }

    int cnt = 0;
    bool vis[n + 1] = {0};
    vis[1] = 1;
    queue<int> node;
    node.push(1);
    while (!node.empty()) {
        int tmp = node.front();
        node.pop();
        for (int i = 0; i < list[tmp].size(); i++) {
            if (vis[list[tmp][i]]) continue;
            node.push(list[tmp][i]);
            vis[list[tmp][i]] = 1;
            cnt++;
        }
    }

    cout << cnt << '\n';
}