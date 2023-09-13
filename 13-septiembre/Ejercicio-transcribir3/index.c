#include <stdio.h>

int main() {
    int i, num;
    long fac;

    for (num = 1; num <= 5; num++) {
        fac = 1;

        for (i = 1; i <= num; i++) {
            fac = fac * i;
        }

        printf("El Factorial es: %ld\n", fac);
    }

    return 0;
}
