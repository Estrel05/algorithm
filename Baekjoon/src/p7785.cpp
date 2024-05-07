#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    string name, ent;
    map<string, bool, greater<string>> m;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> ent;
        if (ent == "enter")
            m[name] = 1;
        else
            m[name] = 0;
    }

    map<string, bool>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
        if (it->second == 1) cout << it->first << '\n';
}