#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void llenarMatriz(int matriz[100][100], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            matriz[i][j] = rand() % 10 + 1;
        }
    }
}

void mostrarMatriz(int matriz[100][100], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int esPrimo(int numero) {
    int i, contador = 0;
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }
    return contador == 2;
}

int sumaDiagonalPrimos(int matriz[100][100], int n, int m) {
    int i, j, suma = 0;
    int min_dim = n < m ? n : m; // Tomar la dimensión más pequeña para la diagonal principal

    for (i = 0; i < min_dim; i++) {
        if (esPrimo(matriz[i][i])) {
            suma += matriz[i][i];
        }
    }
    return suma;
}

void llenarVectoresParesImpares(int matriz[100][100], int pares[], int impares[], int n, int m) {
    int i, j, k = 0, l = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares[k] = matriz[i][j];
                k++;
            } else {
                impares[l] = matriz[i][j];
                l++;
            }
        }
    }
}

void mostrarVectores(int pares[], int impares[], int n, int m) {
    int i;
    printf("Pares: ");
    for (i = 0; i < n * m; i++) {
        if (pares[i] < 10 && pares[i] > 0) {
            printf("%d\t", pares[i]);
        }
    }

    printf("\nImpares: ");
    for (i = 0; i < n * m; i++) {
        if (impares[i] < 10 && impares[i] > 0) {
            printf("%d\t", impares[i]);
        }
    }
    printf("\n");
}

void elevarAlCuadrado(int matriz[100][100], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            matriz[i][j] = matriz[i][j] * matriz[i][j];
        }
    }
}

void sumarFilasPares(int matriz[100][100], int n, int m) {
    int i, j, suma = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (matriz[i][j] % 2 == 0) {
                suma += matriz[i][j];
            }
        }
        printf("La suma de la fila %d es: %d\n", i + 1, suma);
        suma = 0;
    }
}

void ordenarDiagonalSecundaria(int matriz[100][100], int n, int m) {
    int i, j, k, aux;
    int min_dim = n < m ? n : m; // Tomar la dimensión más pequeña para la diagonal secundaria

    for (i = 0; i < min_dim; i++) {
        for (j = 0; j < min_dim; j++) {
            if (i + j == min_dim - 1) {
                for (k = 0; k < min_dim; k++) {
                    if (matriz[i][j] < matriz[k][k]) {
                        aux = matriz[i][j];
                        matriz[i][j] = matriz[k][k];
                        matriz[k][k] = aux;
                    }
                }
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int matriz[100][100];
    int pares[100 * 100];
    int impares[100 * 100];
    int opcion;
    int n, m;

    do {
        printf("\nMenu\n");
        printf("1. Llenar una matriz\n");
        printf("2. Mostrar matriz\n");
        printf("3. Suma de primos en la diagonal principal\n");
        printf("4. Colocar en dos vectores los pares y los impares\n");
        printf("5. Elevar al cuadrado la matriz\n");
        printf("6. Sumar de las filas los números pares\n");
        printf("7. Ordenar de menor a mayor la diagonal secundaria\n");
        printf("8. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el tamaño de la matriz\n");
                printf("Filas: ");
                scanf("%d", &n);
                printf("Columnas: ");
                scanf("%d", &m);
                llenarMatriz(matriz, n, m);
                break;
            case 2:
                mostrarMatriz(matriz, n, m);
                break;
            case 3:
                printf("La suma de primos en la diagonal principal es: %d\n", sumaDiagonalPrimos(matriz, n, m));
                break;
            case 4:
                llenarVectoresParesImpares(matriz, pares, impares, n, m);
                mostrarVectores(pares, impares, n, m);
                break;
            case 5:
                elevarAlCuadrado(matriz, n, m);
                break;
            case 6:
                sumarFilasPares(matriz, n, m);
                break;
            case 7:
                ordenarDiagonalSecundaria(matriz, n, m);
                break;
            case 8:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
                break;
        }
    } while (opcion != 8);

    return 0;
}
