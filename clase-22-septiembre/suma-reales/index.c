//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    int vector[19], suma = 0, promedio = 0;

    for ( int i = 0; i < 19; i++)
    {
        printf("Ingrese el dato:\n");
        scanf("%d", &vector[i]);
    }

    for ( int i = 0; i < 19; i++)
    {
        suma += vector[i];
    }

    printf("La suma es: %d\n", suma);

    promedio = suma / 19;

    printf("El promedio es: %d\n", promedio);


    return 0;
}