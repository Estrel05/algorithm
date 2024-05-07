#include <math.h>
#include <stdio.h>

int main() {
    double Hn = 1, C = 1;

    for (double i = 2; i <= 1000000; i++) {
        Hn += 1 / i;
        C = Hn - log(i);
        printf("%lf\n", C);
    }
}