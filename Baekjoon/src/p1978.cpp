#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int k) {
    for (int i = 2; i <= sqrt(k); i++)
        if (k % i == 0) return false;
    return true;
}

int main() {
    int n, k, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k != 1 && isPrime(k)) count++;
    }
    cout << count << '\n';
}