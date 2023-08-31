#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n, cnt = 0;
    string name;
    set<string> s;

    cin >> n;
    while (n--) {
        cin >> name;
        if (name == "ENTER") {
            cnt += s.size();
            s.clear();
        } else
            s.insert(name);
    }
    cnt += s.size();
    cout << cnt << '\n';
}