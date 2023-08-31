#include <iostream>
#include <vector>
using namespace std;

int main() {
    while (1) {
        int n, sum = 0;
        vector<int> div;

        cin >> n;
        if (n == -1)
            return 0;
        else {
            for (int i = 1; i < n; i++)
                if (n % i == 0) {
                    div.push_back(i);
                    sum += i;
                }
            if (sum != n) {
                cout << n << " is NOT perfect.\n";
                continue;
            }
        }
        cout << n << " = " << div[0];
        for (int i = 1; i < div.size(); i++) cout << " + " << div[i];
        cout << '\n';
    }
}