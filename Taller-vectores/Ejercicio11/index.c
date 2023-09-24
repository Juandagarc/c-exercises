//Presentado por: Juan David García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 11. Dado un arreglo con solo números, colocar en un nuevo arreglo todos los numero pares

    //-----------------Codigo-----------------

    int longitud, i, j = 0;

    printf("Ingrese la longitud del vector:\n");
    scanf("%d", &longitud);

    int vector[longitud], vector2[longitud];

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

            //Se hallan los pares

            for (i = 0; i < longitud; i++)
            {
                if (vector[i] % 2 == 0)
                {
                    vector2[j] = vector[i];
                    j++;
                }
            }

            printf("\nLos numeros pares son:\n");

            for (i = 0; i < j; i++)
            {
                printf(" %d", vector2[i]);
            }

    return 0;
}