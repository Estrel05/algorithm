#include <iostream>
#include <string>
using namespace std;

bool checker(string str) {
    for (int i = 0; i < str.length(); i++)
        if (str[i] != str[i + 1])
            for (int j = i + 2; j < str.length(); j++)
                if (str[i] == str[j]) return 0;
    return 1;
}

int main() {
    int num, sum = 0;
    string str;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> str;
        if (checker(str)) sum++;
    }
    cout << sum << '\n';
}