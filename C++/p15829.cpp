#include <iostream>
using namespace std;

#define m 1234567891

int main() {
    int l, a;
    long r = 1, ar, sum = 0;

    cin >> l;
    char str[l];

    cin >> str;
    for (int i = 0; i < l; i++) {
        a = str[i] - 'a' + 1;
        ar = a * r % m;
        sum += ar % m;
        r = r * 31 % m;
    }
    cout << sum % m << '\n';
}