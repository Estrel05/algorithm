#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    stack<char> s;

    while (1) {
        string ans("yes");
        while (!s.empty()) s.pop();
        getline(cin, str);
        if (str == ".") return 0;

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(' || str[i] == '[')
                s.push(str[i]);
            else if (str[i] == ')') {
                if (!s.empty() && s.top() == '(')
                    s.pop();
                else {
                    ans = "no";
                    break;
                }
            } else if (str[i] == ']') {
                if (!s.empty() && s.top() == '[')
                    s.pop();
                else {
                    ans = "no";
                    break;
                }
            }
        }
        if (!s.empty()) ans = "no";
        cout << ans << '\n';
    }
}
