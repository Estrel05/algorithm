#include <stdio.h>
#define N 209

void print_digits(char d[N]) {
    int i = 0;
    while (d[i] == 0) i++;
    while (i < N) printf("%d", d[i++]);
}

void add_digits(char aa[N], char bb[N]) {
    int i = 0;
    int carry = 0;
    int j, s;

    while (aa[i] == 0) i++;
    for (j = N - 1; j >= i - 1; j--) {
        if ((s = carry + aa[j] + bb[j]) > 9) {
            bb[j] = s - 10;
            carry = 1;
        } else {
            bb[j] = s;
            carry = 0;
        }
    }
}

int main() {
    char aa[N] = {0}, bb[N] = {0};
    bb[N - 1] = 1;

    printf("F(0): 0\n");
    printf("F(1): 1\n");
    for (int i = 1; i < 500; i++) {
        add_digits(bb, aa);
        add_digits(aa, bb);
        printf("F(%d): ", 2 * i);
        print_digits(aa);
        printf("\n");
        printf("F(%d): ", 2 * i + 1);
        print_digits(bb);
        printf("\n");
    }
    add_digits(bb, aa);
    printf("F(1000): ");
    print_digits(aa);
    printf("\n");
}