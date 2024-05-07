#include <iostream>
using namespace std;

int main() {
    const int S = 1000000;
    int n, t;
    bool era[S + 1];
    for (int i = 2; i <= S; i++) era[i] = 1;

    for (int i = 2; i * i <= S; i++)
        for (int j = 2; i * j <= S; j++) {
            if (!era[i])
                continue;
            else
                era[i * j] = 0;
        }

    cin >> t;
    for (int i = 0; i < t; i++) {
        int cnt = 0;

        cin >> n;
        for (int j = 2; j <= n / 2; j++)
            if (era[j] && era[n - j]) cnt++;
        cout << cnt << '\n';
    }
}