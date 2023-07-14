#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 1;
    getline(cin, str);
    int space = str.find_first_not_of(' ');
    str.erase(0, space);
    space = str.find_last_not_of(' ');
    str.erase(space + 1);
    for (int i = 0; i < str.length(); i++)
        if (str[i] == ' ') count++;
    cout << count << '\n';
}