#include <iostream>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int countPrime(int n) {
    int cnt = 0;
    for (int i = n + 1; i <= 2 * n; i++)
        if (isPrime(i)) cnt++;
    return cnt;
}

int main() {
    int n;

    while (1) {
        cin >> n;
        if (n == 0) return 0;
        cout << countPrime(n) << '\n';
    }
}