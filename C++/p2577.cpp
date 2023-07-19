#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c, count[10] = {0};
    cin >> a;
    cin >> b;
    cin >> c;
    string str = to_string(a * b * c);
    for (int i = 0; i < str.length(); i++) count[str[i] - 48]++;
    for (int i = 0; i < 10; i++) cout << count[i] << '\n';
}