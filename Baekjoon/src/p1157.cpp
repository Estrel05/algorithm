#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int alphabet[26] = {0}, max = 65, count = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 97)
            alphabet[str[i] - 97]++;
        else
            alphabet[str[i] - 65]++;
    }
    for (int i = 1; i < 26; i++)
        if (alphabet[i] > alphabet[max - 65]) max = 65 + i;
    for (int i = 0; i < 26; i++)
        if (alphabet[i] == alphabet[max - 65]) count++;
    if (count > 1) max = 63;
    cout << (char)max << '\n';
}