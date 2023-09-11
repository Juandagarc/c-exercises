//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    //Sumar los numeros del 1 al n con for
    int n, i, suma = 0;

    printf("Ingrese un numero: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++) {
        suma += i;
    }

    printf("La suma de los numeros del 1 al %d es: %d", n, suma);

    return 0;
}