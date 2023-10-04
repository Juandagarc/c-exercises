//Presentaado por: Juan David García Arce

#include <stdio.h>
//Para random
#include<stdlib.h>
#include<time.h>


int main () {
    srand(time(NULL));

    int largo, ancho;

    printf("Ingrese el largo de la matriz");
    scanf("%d", &largo);

    printf("Ingrese el ancho de la matriz");
    scanf("%d", &ancho);

    //Se genera la matriz con numeros aleatorios
    int matriz[largo][ancho];

    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            matriz[i][j] = rand() % 10;
        }
    }

    //Se imprime la matriz
    printf("Matriz:\n");
    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            printf("\t%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Se suman los numeros de la matriz
    int sumatoria = 0;
    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            sumatoria += matriz[i][j];
        }
    }

    printf("Sumatoria: %d", sumatoria);

    //Suma diagonal
    int sumatoriaDiagonal = 0;
    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            if (i == j) {
                sumatoriaDiagonal += matriz[i][j];
            }
        }
    }

    printf("\nSumatoria diagonal: %d", sumatoriaDiagonal);

    //Suma diagonal inversa
    int sumatoriaDiagonalInversa = 0;

    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            if (i + j == largo - 1) {
                sumatoriaDiagonalInversa += matriz[i][j];
            }
        }
    }

    printf("\nSumatoria diagonal inversa: %d", sumatoriaDiagonalInversa);

    //Se suman las filas de la matriz con otro vector de igual tamaño

    int vector[ancho];

    for (int i = 0; i < ancho; i++) {
        vector[i] = rand() % 10;
    }

    printf("\nVector:\n");
    for (int i = 0; i < ancho; i++) {
        printf("\t%d ", vector[i]);
    }

    int sumatoriaFilas = 0;
    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            sumatoriaFilas += matriz[i][j] + vector[i];
        }
        printf("\nSumatoria fila %d: %d", i, sumatoriaFilas);
        sumatoriaFilas = 0;
    }




    return 0;
}