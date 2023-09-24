//Presentado por: Juan David García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 10. Realizar la suma de dos arreglos en un tercer arreglo.

    //-----------------Codigo-----------------

    int longitud1, longitud2, i, j;

    printf("Ingrese la longitud del primer vector:\n");
    scanf("%d", &longitud1);

    printf("Ingrese la longitud del segundo vector:\n");
    scanf("%d", &longitud2);

    int vector1[longitud1], vector2[longitud2], vector3[longitud1 + longitud2];

    for (i = 0; i < longitud1; i++)
            {
                //pide datos
                printf("Ingrese el dato del primer vector:\n");
                scanf("%d", &vector1[i]);
            }

            printf("El primer vector es:\n");

            for (i = 0; i < longitud1; i++)
            {
                printf(" %d", vector1[i]);
            }

            for (i = 0; i < longitud2; i++)
            {
                //pide datos
                printf("\nIngrese el dato del segundo vector:\n");
                scanf("%d", &vector2[i]);
            }

            printf("\nEl segundo vector es:\n");

            for (i = 0; i < longitud2; i++)
            {
                printf(" %d", vector2[i]);
            }

            //Se suman los vectores

            for (i = 0; i < longitud1; i++)
            {
                vector3[i] = vector1[i] + vector2[i];
            }

            printf("\nLa suma de los vectores es:\n");

            if (longitud1 == longitud2)
            {
                for (i = 0; i < longitud1; i++)
                {
                    printf(" %d", vector3[i]);
                }
            }
            else
            {
                printf("Los vectores no se pueden sumar");
            }

    return 0;
}