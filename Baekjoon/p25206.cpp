#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    string major, grade, grade_table[] = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F", "P"};
    double credit, score = 0, sum = 0, score_table[] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};

    for (int i = 0; i < 20; i++) {
        cin >> major >> credit >> grade;
        for (int j = 0; j < 10; j++) {
            if (grade == grade_table[j]) {
                num = j;
                break;
            }
        }
        if (num == 9)
            continue;
        else {
            score += credit * score_table[num];
            sum += credit;
        }
    }
    cout << score / sum << '\n';
}