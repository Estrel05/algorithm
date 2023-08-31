#include <iostream>
using namespace std;

int main() {
    int n, m, b, h, min = 256, max = 0, result = -1, hlargest = 0;

    cin >> n >> m >> b;
    int land[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> land[i][j];
            if (land[i][j] < min) min = land[i][j];
            if (land[i][j] > max) max = land[i][j];
        }

    for (h = min; h <= max; h++) {
        int build = 0, remove = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (h >= land[i][j])
                    build += h - land[i][j];
                else
                    remove += land[i][j] - h;
            }
        }
        if (remove + b < build) continue;
        int sum = build + remove * 2;
        if (result == -1 || result >= sum) {
            result = sum;
            hlargest = h;
        }
    }
    cout << result << ' ' << hlargest << '\n';
}