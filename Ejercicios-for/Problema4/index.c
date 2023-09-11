#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int suma = 0;

    for (numero = 2; numero <= 6; numero = numero + 2) {
        suma = suma + numero;
    }

    printf("La suma de los números pares de 2 hasta 6 es: %d\n", suma);

    system("PAUSE");
    return 0;
}
