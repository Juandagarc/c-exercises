//Presentado por: Juan David García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 2.Que lea un numero y lo desconponga para meterlo en un vector

    //-----------------Codigo-----------------

    int numero, i, longitud = 0, numero2;

    printf("Ingrese el numero:\n");
    scanf("%d", &numero);

    numero2 = numero;

    while (numero2 > 0)
    {
        numero2 = numero2 / 10;
        longitud++;
    }

    int vector[longitud];

    for (i = 0; i < longitud; i++)
    {
        vector[i] = numero % 10;
        numero = numero / 10;
    }

    printf("El vector es:\n");

    for (i = longitud - 1; i >= 0; i--)
    {
        printf(" %d", vector[i]);
    }

    return 0;
}