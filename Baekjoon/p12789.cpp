#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int n, k;
    queue<int> line1;
    stack<int> line2;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        line1.push(k);
    }

    for (int i = 1; i <= n; i++) {
        if (line2.empty()) {
            line2.push(line1.front());
            line1.pop();
        }
        while (line2.top() != i) {
            if (line1.empty()) {
                cout << "Sad\n";
                return 0;
            } else {
                line2.push(line1.front());
                line1.pop();
            }
        }
        line2.pop();
    }
    cout << "Nice\n";
}