#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, b;
    deque<int> d;
    string str;

    cin >> n >> b;
    while (n > 0) {
        d.push_front(n % b);
        n /= b;
    }
    deque<int>::iterator it;
    for (it = d.begin(); it < d.end(); it++) {
        if (*it > 9)
            str += *it - 10 + 'A';
        else
            str += *it + '0';
    }
    cout << str << '\n';
}