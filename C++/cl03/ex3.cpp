#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 '&'입니다." << endl;
    getline(cin, s, '&');
    cin.ignore();
    string findWord, replaceWord;
    cout << endl << "find: ";
    getline(cin, findWord, '\n');
    cout << "replace: ";
    getline(cin, replaceWord, '\n');

    int startIndex = 0;
    while (true) {
        int fIndex = s.find(findWord, startIndex);
        if (fIndex == -1) break;
        s.replace(fIndex, findWord.length(), replaceWord);
        startIndex = fIndex + replaceWord.length();
    }
    cout << s << endl;
}