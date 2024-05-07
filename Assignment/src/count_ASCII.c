#include <stdio.h>
#include <time.h>

#define ASCII_SIZE 128

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[smallest]) smallest = left;
    if (right < n && arr[right] > arr[smallest]) smallest = right;
    if (smallest != i) {
        swap(&arr[i], &arr[smallest]);
        heapify(arr, n, smallest);
    }
}

void heapsort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int ascii_table[ASCII_SIZE] = {0};
    int c, i = 0, sum = 0;
    clock_t start, end;
    double execution_time;

    start = clock();
    while ((c = fgetc(stdin)) != EOF) {
        ascii_table[c]++;
    }
    for (int i = 0; i < ASCII_SIZE; i++) {
        printf("count[%d] = %d\n", i, ascii_table[i]);
    }
    end = clock();

    execution_time = (double)(end - start) / CLOCKS_PER_SEC * 1000;
    printf("\nexecution time: %dms\n");

    heapsort(ascii_table, 128);
    while (!ascii_table[i]) i++;
    for (; i < 128; i++) {
        ascii_table[i + 1] += ascii_table[i];
        ascii_table[i] = 0;
        sum += ascii_table[i + 1];
        heapsort(ascii_table, 128);
    }
    printf("compressed file size: %dbits\n", sum);

    return 0;
}