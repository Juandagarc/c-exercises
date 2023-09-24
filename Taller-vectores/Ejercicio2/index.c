//Presentado por: Juan david García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 2. Dado un arreglo con solo números, realizar la suma de sus elementos impares.

    //-----------------Codigo-----------------

    int longitud, i, suma = 0;

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

            //Se suman los impares

            for (i = 0; i < longitud; i++)
            {
                if (vector[i] % 2 != 0)
                {
                    suma = suma + vector[i];
                }
            }

            printf("\nLa suma de los numeros impares es: %d", suma);

    return 0;
}