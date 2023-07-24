#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, count = 0;
    long num = 665;

    cin >> n;
    while (1) {
        num++;
        string strnum = to_string(num);
        if (strnum.find("666") != string::npos) count++;
        if (count == n) break;
    }
    cout << num << '\n';
}