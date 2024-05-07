#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string normal[n], color_blind[n];
    for (int i = 0; i < n; i++) {
        cin >> normal[i];
        color_blind[i] = normal[i];
        replace(color_blind[i].begin(), color_blind[i].end(), 'G', 'R');
    }
}