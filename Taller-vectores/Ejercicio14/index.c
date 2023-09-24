//Presentado por: Juan david García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 14. Colocar en un arreglo la serie de fibonacci hasta n terminos (n es el tamaño del vector).

    //-----------------Codigo-----------------

    int longitud, i;

    printf("Ingrese la longitud del vector:\n");
    scanf("%d", &longitud);

    int vector[longitud];

    vector[0] = 0;
    vector[1] = 1;

    for (i = 2; i < longitud; i++)
    {
        vector[i] = vector[i - 1] + vector[i - 2];
    }

    printf("La serie de fibonacci es:\n");

    for (i = 0; i < longitud; i++)
    {
        printf(" %d", vector[i]);
    }
    return 0;
}