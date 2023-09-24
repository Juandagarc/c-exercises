//Presentado por: Juan david García Arce

#include <stdio.h>
#include <math.h>

int main () {

    //-----------------Enunciado-----------------
    // 3. Llenar un arreglo V de 10 elementos con los cuadrados de los 10 primeros elementos. Ej: (arreglos 1 4 9 16 25 36 49 64 81 100)

    //-----------------Codigo-----------------

    int V[10], i;

    for (i = 0; i < 10; i++)
    {
        V[i] = pow(i+1, 2);
    }

    printf("El vector es:\n");

    for (i = 1; i < 10; i++)
    {
        printf(" %d", V[i]);
    }


    return 0;
}