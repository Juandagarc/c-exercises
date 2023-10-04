//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    int largo, ancho;

    printf("Ingrese el largo de la matriz");
    scanf("%d", &largo);

    printf("Ingrese el ancho de la matriz");
    scanf("%d", &ancho);

    //Se ingresan los valores de la matriz
    int matriz[largo][ancho];

    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            printf("Ingrese el valor de la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
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

    //Se determina si la matriz es magica
    int sumatoria = 0;
    int sumatoriaDiagonal = 0;
    int sumatoriaDiagonalInversa = 0;
    int sumatoriaFila = 0;
    int sumatoriaColumna = 0;
    int esMagica = 1;


    //Se suman los numeros de la matriz
    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            sumatoria += matriz[i][j];
        }
    }

    //Suma diagonal
    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            if (i == j) {
                sumatoriaDiagonal += matriz[i][j];
            }
        }
    }

    //Suma diagonal inversa
    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            if (i + j == largo - 1) {
                sumatoriaDiagonalInversa += matriz[i][j];
            }
        }
    }

    //Suma filas
    for (int i = 0; i < largo; i++) {
        sumatoriaFila = 0;
        for (int j = 0; j < ancho; j++) {
            sumatoriaFila += matriz[i][j];
        }
        if (sumatoriaFila != sumatoria) {
            esMagica = 0;
        }
    }


    //Suma columnas
    for (int i = 0; i < largo; i++) {
        sumatoriaColumna = 0;
        for (int j = 0; j < ancho; j++) {
            sumatoriaColumna += matriz[j][i];
        }
        if (sumatoriaColumna != sumatoria) {
            esMagica = 0;
        }
    }

    if (sumatoriaDiagonal != sumatoria) {
        esMagica = 0;
    }

    if (sumatoriaDiagonalInversa != sumatoria) {
        esMagica = 0;
    }

    if (esMagica == 1) {
        printf("La matriz es magica");
    } else {
        printf("La matriz no es magica");
    }

    return 0;
}