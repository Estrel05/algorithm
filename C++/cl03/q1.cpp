#include <iostream>
#include <string>
using namespace std;

class Date {
    int day;
    int month;
    int year;

   public:
    Date(int y, int m, int d);
    Date(string s);
    void show();
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }
};

Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

Date::Date(string s) {
    int index = s.find("/");
    int index1 = s.find("/", index + 1);
    year = stol(s.substr(0, index));
    month = stol(s.substr(index + 1, index1));
    day = stol(s.substr(index1 + 1));
}

void Date::show() { cout << year << "³â " << month << "¿ù " << day << "ÀÏ" << endl; }

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    birth.show();
    cout << birth.getYear() << '.' << birth.getMonth() << '.' << birth.getDay() << endl;
}