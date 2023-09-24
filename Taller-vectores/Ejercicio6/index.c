//Presentado por: Juan david García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 6. Dado un arreglo, hacer un programa que invierta sus datos y devuelva el arreglo invertido utilizar un solo vector.

    //-----------------Codigo-----------------

    int longitud, i, j, aux;

    printf("Ingrese la longitud del vector:\n");
    scanf("%d", &longitud);

    int vector[longitud];

    for (i = 0; i < longitud; i++)
            {
                //pide datos
                printf("Ingrese el dato:\n");
                scanf("%d", &vector[i]);
            }

            printf("El vector es:\n");

            for (i = 0; i < longitud; i++)
            {
                printf(" %d", vector[i]);
            }

            //Se invierte el vector

            for (i = 0, j = longitud - 1; i < longitud / 2; i++, j--)
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }

            printf("\nEl vector invertido es:\n");

            for (i = 0; i < longitud; i++)
            {
                printf(" %d", vector[i]);
            }
    return 0;
} 