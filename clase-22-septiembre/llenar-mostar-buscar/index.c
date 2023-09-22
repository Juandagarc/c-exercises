//Presentado por: Juan David García Arce

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

    printf("\nQue elemento desea buscar?\n");
    int elemento;
    scanf("%d", &elemento);

    for (int i = 0; i < longitud; i++)
    {
        if (vector[i] == elemento)
        {
            printf("El elemento %d se encuentra en la posicion %d\n", elemento, i);
            return 0;
        }
    }

    return 0;
}