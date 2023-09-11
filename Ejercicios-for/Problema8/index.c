#include <stdio.h>

int main() {
    int c, s, t, v;

    printf("Ingrese el número de columnas: ");
    scanf("%d", &v);

    for (c = v; c >= 1; c--) {
        for (t = c; t >= 1; t--) {
            printf(" ");
        }
        for (s = v; s >= c; s--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
