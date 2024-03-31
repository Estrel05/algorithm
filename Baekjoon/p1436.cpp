#include <iostream>
using namespace std;

int main() {
    int n, num = 666, count = 0;

    cin >> n;
    while (1) {
        int tmp = num;
        while (1) {
            if (tmp % 1000 == 666) {
                count++;
                break;
            } else if (tmp < 666)
                break;
            tmp /= 10;
        }
        if (count == n) break;
        num++;
    }
    cout << num << '\n';
}