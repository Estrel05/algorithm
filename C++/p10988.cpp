#include <iostream>
#include <string>
using namespace std;

bool palindrome(string str) {
    for (int i = 0; i < str.length() - i - 1; i++)
        if (str[i] != str[str.length() - i - 1]) return 0;
    return 1;
}

int main() {
    string str;
    cin >> str;
    cout << palindrome(str) << '\n';
}