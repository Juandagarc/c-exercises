//Presentado por: Juan David García Arce

#include <stdio.h>

int main () {

    //-----------------Enunciado-----------------
    // 15. Colocar en un arreglo los numeros primos de desde 2 hasta el tamaño del vector.

    //-----------------Codigo-----------------

    int longitud, i, j, k = 0, contador = 0;

    printf("Ingrese la longitud del vector:\n");
    scanf("%d", &longitud);

    if (longitud < 2) {
        printf("La longitud del vector debe ser al menos 2.\n");
        return 1; // Salir del programa con error
    }

    int vector[longitud], vector2[longitud];

    // Se llena el vector con números primos
    for (i = 2; contador < longitud; i++) {
        int primo = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo == 1) {
            vector[k] = i;
            k++;
            contador++;
        }
    }

    printf("El vector es:\n");
    for (i = 0; i < k; i++) {
        printf(" %d", vector[i]);
    }

    // Se hallan los primos
    k = 0;
    for (i = 0; i < longitud; i++) {
        int primo = 1;
        for (j = 2; j * j <= vector[i]; j++) {
            if (vector[i] % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo == 1 && vector[i] > 1) {
            vector2[k] = vector[i];
            k++;
        }
    }

    printf("\nLos numeros primos son:\n");
    for (i = 0; i < k; i++) {
        printf(" %d", vector2[i]);
    }

    return 0;
}