#include <iostream>
#include <string>
using namespace std;

int main() {
    int b, x = 1, sum = 0;
    string n;
    cin >> n >> b;
    for (int i = n.length() - 1; i >= 0; i--) {
        if (n[i] >= 'A')
            sum += x * (n[i] - 'A' + 10);
        else
            sum += x * (n[i] - '0');
        x *= b;
    }
    cout << sum << '\n';
}