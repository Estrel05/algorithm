#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int a, b;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b >> s;
        for (int j = 0; j < s.length(); j++)
            for (int k = 0; k < b; k++) cout << s[j];
        cout << '\n';
    }
}