#include <ctime>
#include <iostream>
using namespace std;

int main() {
    time_t curTime = time(NULL);
    struct tm* t = localtime(&curTime);
    cout << t->tm_year + 1900 << '-';
    cout.width(2);
    cout.fill('0');
    cout << t->tm_mon + 1 << '-';
    cout.width(2);
    cout.fill('0');
    cout << t->tm_mday << '\n';
}