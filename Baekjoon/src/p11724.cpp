#include <iostream>
#include <vector>
using namespace std;

void makeGraph(vector<int> *g, int m) {
    int u, v;

    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
}

void dfs(vector<int> *g, bool *state, int s) {
    state[s] = true;

    for (int i = 0; i < g[s].size(); i++)
        if (!state[g[s][i]]) dfs(g, state, g[s][i]);
}

int main() {
    int n, m, c = 0;

    cin >> n >> m;
    vector<int> g[n + 1];
    bool state[n + 1] = {false};

    makeGraph(g, m);
    for (int i = 1; i < n + 1; i++)
        if (!state[i]) {
            dfs(g, state, i);
            c++;
        }

    cout << c << endl;
}