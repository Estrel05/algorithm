#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, t;
    vector<int> v;

    cin >> n >> k;
    t = k - 1;
    for (int i = 0; i < n; i++) v.push_back(i + 1);

    vector<int>::iterator it = v.begin() + t;
    cout << '<' << *it;
    v.erase(it);
    while (!v.empty()) {
        if (it + t >= v.end())
            it = v.begin() + (t + it - v.end()) % v.size();
        else
            it += k - 1;
        cout << ", " << *it;
        v.erase(it);
    }
    cout << '>' << '\n';
}