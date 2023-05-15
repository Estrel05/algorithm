#include <iostream>
using namespace std;

class Employee {
    string name;
    double salary;
    static int count;

   public:
    Employee(string n = "", double s = 0.0) : name(n), salary(s) { count++; }
    ~Employee() { count--; }
    static int getCount() { return count; }
};

int Employee::count = 0;

int main() {
    Employee e1("±èÃ¶¼ö");
    Employee e2;
    Employee e3("±èÃ¶È£", 20000);

    int n = Employee::getCount();
    cout << "ÇöÀç Á÷¿ø ¼ö: " << n << endl;
}