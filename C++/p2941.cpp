#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int count = str.length();
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == 'c' && str[i + 1] == '=')
            count--;
        else if (str[i] == 'c' && str[i + 1] == '-')
            count--;
        else if (str[i] == 'd' && str[i + 1] == '-')
            count--;
        else if (str[i] == 'l' && str[i + 1] == 'j')
            count--;
        else if (str[i] == 'n' && str[i + 1] == 'j')
            count--;
        else if (str[i] == 's' && str[i + 1] == '=')
            count--;
        else if (str[i] == 'z' && str[i + 1] == '=')
            count--;
    }
    if (str.length() > 2)
        for (int i = 0; i < str.length() - 2; i++)
            if (str[i] == 'd' && str[i + 1] == 'z')
                if (str[i + 2] == '=') count--;
    cout << count << '\n';
}