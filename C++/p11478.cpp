#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string str;
    set<string> s;

    cin >> str;
    for (int i = 0; i < str.length(); i++)
        for (int j = 1; j < str.length() - i + 1; j++) s.insert(str.substr(i, j));
    cout << s.size() << '\n';
}