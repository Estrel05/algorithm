#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n > 0) {
        stack<char> stk;
        string str, ans = "YES";
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(')
                stk.push(str[i]);
            else if (str[i] == ')' && !stk.empty())
                stk.pop();
            else {
                ans = "NO";
                break;
            }
        }
        if (!stk.empty()) ans = "NO";
        cout << ans << '\n';
        n--;
    }
}