#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void heapify(int tree[], int n) {
    int root, child = n - 1;
    while (child > 0) {
        root = (child - 1) / 2;
        if (tree[root] < tree[child]) swap(&tree[root], &tree[child]);
        child--;
    }
}

void heapsort(int tree[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        swap(&tree[0], &tree[i]);
        heapify(tree, i);
    }
}

int main() {
    int n;
    cin >> n;
    int tree[n];
    for (int i = 0; i < n; i++) cin >> tree[i];
    heapify(tree, n);
    heapsort(tree, n);
    for (int i = 0; i < n; i++) cout << tree[i] << '\n';
}