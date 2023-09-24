//Presentado por: Juan David García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 7. Hacer un programa que reciba un arreglo de enteros y devuelva el número mayor y la posición en el arreglo donde se encuentre. Los números pueden ser positivos o negativos.

    //-----------------Codigo-----------------

    int longitud, i, mayor = 0, posicion = 0;

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

            //Se halla el mayor
            for (i = 0; i < longitud; i++)
            {
                if (vector[i] > mayor)
                {
                    mayor = vector[i];
                    posicion = i;
                }
            }

            printf("\nEl numero mayor es: %d y se encuentra en la posicion %d", mayor, posicion);

    return 0;
}