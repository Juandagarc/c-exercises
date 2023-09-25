//Presentado por: Juan David García Arce

#include <stdio.h>
//Para random
#include <stdlib.h>
#include <time.h>

int main () {

    //Tiempo
    srand(time(NULL));

    int vector[20], i, contadorPares = 0, contadorImpares = 0 , contadorPrimos = 0;

    for (i = 0; i < 20; i++)
    {
        vector[i] = rand() % 150;
    }

    printf("El vector es:\n");

    for (i = 0; i < 20; i++)
    {
        printf(" %d", vector[i]);
    }

    //Pares de 0 a 50

    for (i = 0; i < 20; i++)
    {
        if (vector[i] % 2 == 0 && vector[i] < 50)
        {
            contadorPares++;
        }
    }

    printf("\nEl numero de pares de 0 a 50 es: %d", contadorPares);

    int vectorPares[contadorPares], k = 0;

    printf("\nLos numeros pares de 0 a 50 son:\n");

    for (i = 0; i < 20; i++)
    {
        if (vector[i] % 2 == 0 && vector[i] < 50)
        {
            vectorPares[k] = vector[i];
            k++;
        }
    }

    for (i = 0; i < contadorPares; i++)
    {
        printf(" %d", vectorPares[i]);
    }

    //Impares de 51 a 100

    for (i = 0; i < 20; i++)
    {
        if (vector[i] % 2 != 0 && vector[i] > 50 && vector[i] < 100)
        {
            contadorImpares++;
        }
    }

    printf("\nEl numero de impares de 51 a 100 es: %d", contadorImpares);

    int vectorImpares[contadorImpares];

    printf("\nLos numeros impares de 51 a 100 son:\n");

    k = 0;

    for (i = 0; i < 20; i++)
    {
        if (vector[i] % 2 != 0 && vector[i] > 50 && vector[i] < 100)
        {
            vectorImpares[k] = vector[i];
            k++;
        }
    }

    for (i = 0; i < contadorImpares; i++)
    {
        printf(" %d", vectorImpares[i]);
    }

    //Primos de 101 a 150

    //Halla la cantidad de primos

    for (i = 0; i < 20; i++)
    {
        int contador = 0;
        for (int j = 1; j <= vector[i]; j++)
        {
            if (vector[i] % j == 0)
            {
                contador++;
            }
        }
        if (contador == 2 && vector[i] > 100 && vector[i] < 150)
        {
            contadorPrimos++;
        }
    }

    printf("\nEl numero de primos de 101 a 150 es: %d", contadorPrimos);

    int vectorPrimos[contadorPrimos];

    printf("\nLos numeros primos de 101 a 150 son:\n");

    k = 0;

    for (i = 0; i < 20; i++)
    {
        int contador = 0;
        for (int j = 1; j <= vector[i]; j++)
        {
            if (vector[i] % j == 0)
            {
                contador++;
            }
        }
        if (contador == 2 && vector[i] > 100 && vector[i] < 150)
        {
            vectorPrimos[k] = vector[i];
            k++;
        }
    }

    for (i = 0; i < contadorPrimos; i++)
    {
        printf(" %d", vectorPrimos[i]);
    }





    return 0;
}