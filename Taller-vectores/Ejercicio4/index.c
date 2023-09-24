//Presentado por: Juan david García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 4. Dado un arreglo con n números. Calcular el promedio de los elementos del arreglo y colocarlos en otro arreglo los los numeros mayores al promedio.

    //-----------------Codigo-----------------

    int longitud, i, suma = 0, j, k = 0;

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

    //Se halla el promedio
    for (i = 0; i < longitud; i++)
    {
        suma += vector[i];
    }

    float promedio = (float)suma / (float)longitud;

    printf("\nLa suma es: %d", suma);

    printf("\nEl promedio es: %f", promedio);

    //Se hallan los mayores al promedio

    for (i = 0; i < longitud; i++)
    {
        if (vector[i] > promedio)
        {
            vector2[k] = vector[i];
            k++;
        }
    }

    printf("\nLos numeros mayores al promedio son:\n");

    for (i = 0; i < k; i++)
    {
        printf(" %d", vector2[i]);
    }

    return 0;
}
