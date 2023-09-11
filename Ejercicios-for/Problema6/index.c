#include <stdio.h>

int main() {
    int A = 1, B, C, D;

    printf("Ingrese el número de columnas: ");
    scanf("%d", &D);

    while (A <= D) {
        B = A;

        while (B <= D) {
            printf("*");
            B = B + 1;
        }

        printf("\n");
        A = A + 1;
    }

    return 0;
}
