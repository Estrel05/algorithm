#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {
    if (a.second == b.second) {
        if (a.first.length() == b.first.length()) return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}

int main() {
    int n, m;
    string str;
    map<string, int> word;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str.length() >= m) word[str]++;
    }

    vector<pair<string, int>> voca(word.begin(), word.end());
    sort(voca.begin(), voca.end(), compare);
    for (int i = 0; i < voca.size(); i++) cout << voca[i].first << '\n';
}