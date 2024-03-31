#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n, m;
    string name, quiz;
    map<string, int> pName;
    map<int, string> pNum;

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> name;
        pName.insert({name, i});
        pNum.insert({i, name});
    }

    for (int i = 0; i < m; i++) {
        cin >> quiz;
        if (quiz[0] < 'A')
            cout << pNum[stoi(quiz)] << '\n';
        else
            cout << pName[quiz] << '\n';
    }
}