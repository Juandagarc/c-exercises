#include <stdio.h>
#include <math.h>

int main() {
    int b, d = 0, e = 0, c = 0;

    printf("Ingrese un número en base 10: ");
    scanf("%d", &b);

    while (b >= 10) {
        c = 0;

        while (b >= 10) {
            b = b - 10;
        }

        e = e + 1;
        c++;

        d = d + b * pow(2, e);

        b = c;
    }

    d = d + c * pow(2, e);

    printf("El número en base 2 es: %d\n", d);

    return 0;
}
