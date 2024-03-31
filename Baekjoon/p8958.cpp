#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum = 0, score = 0, n;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == 'X')
                score = 0;
            else if (str[j] == 'O')
                score++;
            sum += score;
        }
        cout << sum << '\n';
        sum = 0;
        score = 0;
    }
}
