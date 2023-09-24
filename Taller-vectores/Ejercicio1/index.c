//Presentado por: Juan david García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 1. Hacer un programa que reciba un arreglo, y muestre el último dato primo del arreglo.

    //-----------------Codigo-----------------

    int longitud, i, primo = 1, j, numeroPrimoGuardado = 100, primerDato = 0;

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
                if (primo == 1 && vector[i] > 1 && primerDato == 0)
                {
                    numeroPrimoGuardado = vector[i];
                }
            }

            if (numeroPrimoGuardado == 100)
            {
                printf("\nNo hay numeros primos en el vector");
            }
            else
            {
                printf("\nEl ultimo numero primo es: %d", numeroPrimoGuardado);
            }
            


    return 0;
}