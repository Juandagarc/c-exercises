//Presentado por: Juan david García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 5. Dado un arreglo V de enteros y un número X, devolver el valor que corresponde al número de veces que está X en el arreglo.

    //-----------------Codigo-----------------

    int longitud, i, numero, contador = 0;

    printf("Ingrese la longitud del vector:\n");
    scanf("%d", &longitud);

    int V[longitud];

    for (i = 0; i < longitud; i++)
            {
                //pide datos
                printf("Ingrese el dato:\n");
                scanf("%d", &V[i]);
            }

            printf("El vector es:\n");

            for (i = 0; i < longitud; i++)
            {
                printf(" %d", V[i]);
            }

            printf("\nIngrese el numero a buscar:\n");
            scanf("%d", &numero);

            for (i = 0; i < longitud; i++)
            {
                if (V[i] == numero)
                {
                    contador++;
                }
            }

            printf("El numero %d se repite %d veces", numero, contador);



    return 0;
}