#include <iostream>
#include <set>
#include <string>
using namespace std;

class Set {
    set<int> s;

   public:
    void add(int x);
    void remove(int x);
    bool check(int x);
    void toggle(int x);
    void all();
    void empty();
};

void Set::add(int x) { s.insert(x); }

void Set::remove(int x) { s.erase(x); }

bool Set::check(int x) { return s.find(x) != s.end(); }

void Set::toggle(int x) {
    if (check(x))
        remove(x);
    else
        add(x);
}

void Set::all() {
    for (int i = 1; i <= 20; i++) add(i);
}

void Set::empty() { s.clear(); }

int main() {
    int m, x;
    string f;
    Set S;

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> f;
        if (f == "add") {
            cin >> x;
            S.add(x);
        } else if (f == "remove") {
            cin >> x;
            S.remove(x);
        } else if (f == "check") {
            cin >> x;
            cout << S.check(x) << '\n';
        } else if (f == "toggle") {
            cin >> x;
            S.toggle(x);
        } else if (f == "all") {
            S.all();
        } else if (f == "empty") {
            S.empty();
        }
    }
}