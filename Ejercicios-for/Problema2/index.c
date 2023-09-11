#include <stdio.h>

int main() {
    int n;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    for (int i = 0; i <= 10; i++) {
        int resultado = n * i;
        printf("%d * %d = %d\n", n, i, resultado);
    }

    printf("Terminado...\n");
    return 0;
}
