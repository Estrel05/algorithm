#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m, count = 0, min = 2500;
    cin >> n >> m;
    string board[n];
    for (int i = 0; i < n; i++) cin >> board[i];

    for (int j = 0; j < n - 7; j++)
        for (int k = 0; k < m - 7; k++) {
            for (int x = j; x < j + 8; x++)
                for (int y = k; y < k + 8; y++) {
                    if ((x + y) % 2 == 0 && board[x][y] != 'B')
                        count++;
                    else if ((x + y) % 2 == 1 && board[x][y] != 'W')
                        count++;
                }
            if (count < min) min = count;
            count = 0;
        }

    for (int j = 0; j < n - 7; j++)
        for (int k = 0; k < m - 7; k++) {
            for (int x = j; x < j + 8; x++)
                for (int y = k; y < k + 8; y++) {
                    if ((x + y) % 2 == 0 && board[x][y] != 'W')
                        count++;
                    else if ((x + y) % 2 == 1 && board[x][y] != 'B')
                        count++;
                }
            if (count < min) min = count;
            count = 0;
        }

    cout << min << '\n';
}