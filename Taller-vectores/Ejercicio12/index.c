//Presentado por: Juan David García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 12. Dado un arreglo con solo números, colocar en un nuevo arreglo todos los numero primos.

    //-----------------Codigo-----------------

    int longitud, i, j = 0, k = 0, primo = 0;

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

            //Se hallan los primos

            for (i = 0; i < longitud; i++)
            {
                primo = 1;
                for (j = 2; j < vector[i]; j++)
                {
                    if (vector[i] % j == 0)
                    {
                        primo = 0;
                        break;
                    }
                }
                if (primo == 1 && vector[i] > 1)
                {
                    vector2[k] = vector[i];
                    k++;
                }
            }

            printf("\nLos numeros primos son:\n");

            for (i = 0; i < k; i++)
            {
                printf(" %d", vector2[i]);
            }

    return 0;
}