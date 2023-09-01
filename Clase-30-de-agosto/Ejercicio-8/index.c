#include <stdio.h>

int main() {
    int inicio, fin, numero;

    printf("Ingresa el inicio del rango: ");
    scanf("%d", &inicio);

    printf("Ingresa el final del rango: ");
    scanf("%d", &fin);

    printf("Números primos en el rango [%d, %d]: ", inicio, fin);

    if (inicio < 2) {
        inicio = 2;
    }

    numero = inicio;
    while (numero <= fin) {
        int esPrimo = 1;  // Suponemos que el número es primo
        int divisor = 2;

        while (divisor * divisor <= numero) {
            if (numero % divisor == 0) {
                esPrimo = 0;  // Si es divisible por algún número, no es primo
                break;
            }
            divisor++;
        }

        if (esPrimo) {
            printf("%d ", numero);
        }

        numero++;
    }

    printf("\n");

    return 0;
}
