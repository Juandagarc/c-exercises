//Presentado por: Juan David García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    //Hacer un programa que reciba un arreglo de enteros y lo ordene ascendentemente con pasos.

    //-----------------Codigo-----------------

    int longitud, i, j, aux;

    printf("Ingrese la longitud del vector:\n");
    scanf("%d", &longitud);

    int vector[longitud];

    for (i = 0; i < longitud; i++) {
        printf("Ingrese el dato:\n");
        scanf("%d", &vector[i]);
    }

    printf("El vector es:\n");
    for (i = 0; i < longitud; i++) {
        printf(" %d", vector[i]);
    }

    // Se ordena el vector usando el método de burbuja
    for (i = 0; i < longitud - 1; i++) {
        for (j = 0; j < longitud - 1 - i; j++) {
            if (vector[j] > vector[j + 1]) {
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
        printf("\nPaso %d:\n", i + 1);
        for (j = 0; j < longitud; j++) {
        printf(" %d", vector[j]);
        }
    }

    printf("\nEl vector ordenado es:\n");
    for (i = 0; i < longitud; i++) {
        printf(" %d", vector[i]);
    }


    return 0;
}