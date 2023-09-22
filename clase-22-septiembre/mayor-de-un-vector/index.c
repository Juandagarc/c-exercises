//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    printf("Ingrese la longitud del vector:\n");
    int longitud;
    scanf("%d", &longitud);

    int vector[longitud];

    for (int i = 0; i < longitud; i++)
    {
        printf("Ingrese el dato:\n");
        scanf("%d", &vector[i]);
    }

    printf("El vector es:\n");

    for (int i = 0; i < longitud; i++)
    {
        printf(" %d", vector[i]);
    }

    int suma = 0;

    for ( int i = 0; i < longitud; i++)
    {
        suma += vector[i];
    }

    printf(" La suma es: %d\n", suma);

    int elemento;

    do {
        printf("Que elemento desea buscar?\n");
        scanf("%d", &elemento);
    } while (elemento % 2 != 0);

    for (int i = 0; i < longitud; i++)
    {
        if (vector[i] == elemento )
        {
            printf("El elemento %d se encuentra en la posicion %d\n", elemento, i);
            break;
        }
    }

    //Se halla el mayor

    int mayor = 0;

    for (int i = 0; i < longitud; i++)
    {
        if (vector[i] > mayor)
        {
            mayor = vector[i];
        }
    }

    printf("El mayor es: %d\n", mayor);

    return 0;
}