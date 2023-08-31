#include <iostream>
using namespace std;

bool isPrime(long long n) {
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

long long nextPrime(long long n) {
    if (n < 2) n = 2;
    while (1) {
        if (isPrime(n)) return n;
        n++;
    }
}

int main() {
    int t;
    long long n;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << nextPrime(n) << '\n';
    }
}