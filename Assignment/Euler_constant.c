#include <math.h>
#include <stdio.h>

int main() {
    float Hn = 1, C = 1;

    for (float i = 2; i < 1000000; i++) {
        Hn += 1 / i;
        C = Hn - log(i);
        printf("%f\n", C);
    }
}