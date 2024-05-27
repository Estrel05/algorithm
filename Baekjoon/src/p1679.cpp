#include <iostream>
#include <queue>
using namespace std;

#define MAX 100001

void bfs(int *state, int x, int k) {
    queue<int> q;
    q.push(x);

    while (!q.empty()) {
        x = q.front();
        q.pop();
        if (x == k) {
            cout << state[x] << endl;
            return;
        }
        if (x + 1 < MAX && !state[x + 1]) {
            state[x + 1] = state[x] + 1;
            q.push(x + 1);
        }
        if (x - 1 >= 0 && !state[x - 1]) {
            state[x - 1] = state[x] + 1;
            q.push(x - 1);
        }
        if (2 * x < MAX && !state[2 * x]) {
            state[2 * x] = state[x] + 1;
            q.push(2 * x);
        }
    }
}

int main() {
    int n, k, state[MAX] = {0};

    cin >> n >> k;
    bfs(state, n, k);
}