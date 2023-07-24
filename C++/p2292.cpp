#include <iostream>
using namespace std;

int main() {
    int n, t = 0, count = 1, sum = 1;
    cin >> n;
    while (n - sum > 0) {
        count++;
        t += 6;
        sum += t;
    }
    cout << count << '\n';
}