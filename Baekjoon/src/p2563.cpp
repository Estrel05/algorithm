#include <iostream>
using namespace std;

int main() {
    int n, x, y, cnt = 0;
    bool p[100][100] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        for (int j = x; j < x + 10; j++)
            for (int k = y; k < y + 10; k++)
                if (!p[j][k]) {
                    cnt++;
                    p[j][k] = 1;
                }
    }
    cout << cnt << '\n';
}