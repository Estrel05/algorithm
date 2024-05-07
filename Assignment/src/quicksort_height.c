#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 2048
#define M 100000

int data[N];
int depth;

void swap(int *x, int *y) {
    int temp = *x;

    *x = *y;
    *y = temp;
}

int partition(int arr[], int l, int r) {
    int x = arr[l];
    int i = l + 1;
    int j = r;

    while (1) {
        while (arr[i] <= x && i <= r) i++;
        while (arr[j] > x && j >= l) j--;
        if (i < j)
            swap(&arr[i], &arr[j]);
        else
            break;
    }

    swap(&arr[l], &arr[j]);
    return j;
}

void myQuicksort(int arr[], int l, int r, int d) {
    int p;

    if (depth < d) depth = d;
    if (l < r) {
        p = partition(arr, l, r);

        myQuicksort(arr, l, p - 1, d + 1);
        myQuicksort(arr, p + 1, r, d + 1);
    }
}

int main() {
    time_t t;
    int i;
    float sum = 0;

    srand((unsigned)time(&t));
    for (int k = 0; k < M; k++) {
        for (i = 0; i < N; i++) {
            data[i] = rand();
        }
        depth = 0;
        myQuicksort(data, 0, N - 1, 0);
        sum += depth;
    }
    printf("Average height = %f", sum / M);
}