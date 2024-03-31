#include <iostream>
using namespace std;

int main() {
    int n, k = 2;
    cin >> n;
    for (int i = 0; i < n; i++) k += k - 1;
    cout << k * k << '\n';
}
