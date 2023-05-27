#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
    string title;
    string author;
    int year;

   public:
    Book(){};
    Book(string title, string author, int year) {
        this->title = title;
        this->author = author;
        this->year = year;
    }
    string getAuthor() { return author; }
    int getYear() { return year; }
    void show();
};

void Book::show() { cout << year << "년도, " << title << ", " << author << endl; }

class BookManager {
    vector<Book> v;
    void searchByAuthor();
    void searchByYear();
    void bookIn();

   public:
    void run();
};

void BookManager::searchByAuthor() {
    string author;
    cout << "검색하고자 하는 저자 이름을 입력하세요: ";
    cin >> author;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].getAuthor() == author) v[i].show();
    }
}

void BookManager::searchByYear() {
    int year;
    cout << "검색하고자 하는 연도를 입력하세요: ";
    cin >> year;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].getYear() == year) v[i].show();
    }
}

void BookManager::bookIn() {
    string title;
    string author;
    int year;

    cout << "입고할 책을 입력하세요. 연도에 -1을 입력하면 입고를 종료합니다." << endl;
    for (;;) {
        cout << "연도: ";
        cin >> year;
        if (year == -1) break;
        cout << "제목: ";
        cin >> title;
        cout << "저자: ";
        cin >> author;
        Book b(title, author, year);
        v.push_back(b);
    }
    cout << "총 입고된 책은 " << v.size() << "권입니다.";
}

void BookManager::run() {
    bookIn();
    searchByAuthor();
    searchByYear();
}

int main() {
    BookManager man;
    man.run();
}