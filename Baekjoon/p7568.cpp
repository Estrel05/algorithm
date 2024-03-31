#include <iostream>
#include <utility>
using namespace std;

int main() {
    int n, rank = 1;
    cin >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (p[i].first < p[j].first && p[i].second < p[j].second) rank++;
        cout << rank << ' ';
        rank = 1;
    }
}