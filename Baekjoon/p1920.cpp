#include <algorithm>
#include <iostream>
using namespace std;

void search(int arr[], int key, int n) {
    int start = 0, end = n - 1, mid;

    while (end >= start) {
        mid = (start + end) / 2;
        if (arr[mid] == key) {
            cout << 1 << "\n";
            return;
        } else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    cout << 0 << "\n";
}

int main() {
    int n, m, tmp;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        search(arr, tmp, n);
    }
}