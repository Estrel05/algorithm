#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int alphabet[26];
    for (int i = 0; i < 26; i++) alphabet[i] = -1;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (alphabet[s[i] - 97] == -1) alphabet[s[i] - 97] = i;
    for (int i = 0; i < 26; i++) cout << alphabet[i] << ' ';
}