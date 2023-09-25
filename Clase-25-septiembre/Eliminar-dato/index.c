//presentado por: Juan David García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 3. Permite borrar datos del vector

    //-----------------Codigo-----------------

    int longitud, i, j, dato;

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

    printf("\nIngrese el dato que desea eliminar:\n");
    scanf("%d", &dato);

    for (i = 0; i < longitud; i++)
    {
        if (vector[i] == dato)
        {
            // vector[i] = vector[i + 1];
            for (j = i; j < longitud; j++)
            {
                vector[j] = vector[j + 1];
            }
        }
    }
    
    printf("El vector es:\n");

    for (i = 0; i < longitud - 1; i++)
    {
        printf(" %d", vector[i]);
    }

    return 0;
}