//Presentado por: Juan David García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 13. Dado un arreglo con solo números, colocar en arreglo_1 todos los numero pares y en el arreglo_2 todo los impares.

    //-----------------Codigo-----------------

    int longitud, i, j = 0, k = 0;

    printf("Ingrese la longitud del vector:\n");
    scanf("%d", &longitud);

    int vector[longitud], vector2[longitud], vector3[longitud];

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

            //Se hallan los pares e impares

            for (i = 0; i < longitud; i++)
            {
                if (vector[i] % 2 == 0)
                {
                    vector2[j] = vector[i];
                    j++;
                }
                else
                {
                    vector3[k] = vector[i];
                    k++;
                }
            }

            printf("\nLos numeros pares son:\n");

            for (i = 0; i < j; i++)
            {
                printf(" %d", vector2[i]);
            }

            printf("\nLos numeros impares son:\n");

            for (i = 0; i < k; i++)
            {
                printf(" %d", vector3[i]);
            }

    return 0;
}