#include <iostream>
using namespace std;

int white = 0, blue = 0;
bool paper[128][128];

void cut(int x, int y, int n) {
    bool have_to_cut = false;

    for (int i = x; i < x + n; i++)
        for (int j = y; j < y + n; j++)
            if (paper[i][j] != paper[x][y]) {
                have_to_cut = true;
                break;
            }

    if (have_to_cut) {
        cut(x, y, n / 2);
        cut(x + n / 2, y, n / 2);
        cut(x, y + n / 2, n / 2);
        cut(x + n / 2, y + n / 2, n / 2);
    } else {
        if (!paper[x][y])
            white++;
        else
            blue++;
    }
}

int main() {
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> paper[i][j];
    cut(0, 0, n);
    cout << white << '\n' << blue << '\n';
}