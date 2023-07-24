#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool cmp(string str1, string str2) {
    if (str1.length() == str2.length())
        return str1 < str2;
    else
        return str1.length() < str2.length();
}

int main() {
    int n;
    cin >> n;
    string dictionary[n];

    for (int i = 0; i < n; i++) cin >> dictionary[i];
    sort(dictionary, dictionary + n, cmp);

    for (int i = 0; i < n; i++) {
        if (dictionary[i] == dictionary[i - 1]) continue;
        cout << dictionary[i] << '\n';
    }
}