#include <stdio.h>

int main() {
    int a, b, md, min, k;
    
    printf("Ingrese el primer número (a): ");
    scanf("%d", &a);

    printf("Ingrese el segundo número (b): ");
    scanf("%d", &b);

    if (a < b) {
        min = a;
    } else {
        min = b;
    }

    k = 1;
    while (k <= min) {
        if (a % k == 0 && b % k == 0) {
            md = k;
        }
        k = k + 1;
    }

    printf("El máximo común divisor (md) es: %d\n", md);

    return 0;
}
