#include "backend1.h"

#include <stdio.h>

#define NUMBER_OF_RECORDS 100

char data_name[NUMBER_OF_RECORDS][3];
char data_number[NUMBER_OF_RECORDS][4];
int k = 0;

void add(char name[3], char number[4]) {
    if (k < NUMBER_OF_RECORDS) {
        data_name[k][0] = name[0];
        data_name[k][1] = name[1];
        data_name[k][2] = name[2];
        data_number[k][0] = number[0];
        data_number[k][1] = number[1];
        data_number[k][2] = number[2];
        data_number[k][3] = number[3];
        print_name(k);
        printf(" : ");
        print_number(k);
        printf(" was successfully added!\n");
        k++;
    } else
        printf("Can¡¯t add. Address book is full.\n");
}

int search_index(char name[3]) {
    int i;

    for (i = 0; i < k; i++) {
        int j;

        for (j = 0; j < 3; j++)
            if (data_name[i][j] != name[j]) break;
        if (j == 3) break;
    }
    if (i == k) return -1;
    return i;
}

void search(char name[3]) {
    int s_result;
    s_result = search_index(name);

    if (s_result == -1)
        printf("%c%c%c doesn't exist.\n", name[0], name[1], name[2]);
    else {
        print_name(s_result);
        printf(" : ");
        print_number(s_result);
        printf(" was found.\n");
    }
}

void delete(char name[3]) {
    int s_result;
    s_result = search_index(name);

    if (s_result == -1)
        printf("Can't delete. %c%c%c doesn't exist.\n", name[0], name[1], name[2]);
    else {
        for (int i = s_result; i < k; i++) {
            data_name[i][0] = data_name[i + 1][0];
            data_name[i][1] = data_name[i + 1][1];
            data_name[i][2] = data_name[i + 1][2];
            data_number[i][0] = data_number[i + 1][0];
            data_number[i][1] = data_number[i + 1][1];
            data_number[i][2] = data_number[i + 1][2];
            data_number[i][3] = data_number[i + 1][3];
            k--;
        }
        printf("%c%c%c was successfully deleted!\n", name[0], name[1], name[2]);
    }
}

void print_name(int i) { print_data(data_name[i], 3); }

void print_number(int i) { print_data(data_number[i], 4); }

void print_data(char* s, int n) {
    int i;

    for (i = 0; i < n; i++) putchar(s[i]);
}

void print_list() {
    int i;

    for (i = 0; i < k; i++) {
        print_name(i);
        printf(" : ");
        print_number(i);
        printf("\n");
    }
}