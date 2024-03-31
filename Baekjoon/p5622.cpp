#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int sum = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] < 65)
            sum += 2;
        else if (str[i] < 68)
            sum += 3;
        else if (str[i] < 71)
            sum += 4;
        else if (str[i] < 74)
            sum += 5;
        else if (str[i] < 77)
            sum += 6;
        else if (str[i] < 80)
            sum += 7;
        else if (str[i] < 84)
            sum += 8;
        else if (str[i] < 87)
            sum += 9;
        else
            sum += 10;
    }
    cout << sum << '\n';
}