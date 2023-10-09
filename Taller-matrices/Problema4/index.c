//Presentado por: Juan David García Arce

#include <stdio.h>
//Para random
#include <stdlib.h>
#include <time.h>

int main() {
    srandom(time(NULL));
    int N;
    printf("Ingrese la dimensión N de la matriz: ");
    scanf("%d", &N);

    int mat[N][N];

    //Se llena la matriz con números aleatorios
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++){
            mat[i][j] = random() % 10;
        }
    }

    int sumas[N];

    int opcion;
    printf("Seleccione la operación a realizar:\n");
    printf("1. Poner cero en ambas diagonales de la matriz.\n");
    printf("2. Poner cero en la primera y la última fila, y en la primera y la última columna de la matriz.\n");
    printf("3. Llenar la matriz de tal forma que mat[i][j] sea igual a i+j.\n");
    printf("4. Llenar la diagonal principal de la matriz con los números 1,2,3,...N.\n");
    printf("5. Llenar todas las filas pares con los números 1,2,3,...N, y las filas impares con los números N,N-1,N-2,...1.\n");
    printf("6. Calcular las sumas de las filas de la matriz y guardarlas en un arreglo.\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            // Poner cero en ambas diagonales de la matriz
            for (int i = 0; i < N; i++) {
                mat[i][i] = 0;                 // Diagonal principal
                mat[i][N - i - 1] = 0;         // Diagonal secundaria
            }
            break;

        case 2:
            // Poner cero en la primera y la última fila, y en la primera y la última columna
            for (int j = 0; j < N; j++) {
                mat[0][j] = 0;                 // Primera fila
                mat[N - 1][j] = 0;             // Última fila
            }
            for (int i = 0; i < N; i++) {
                mat[i][0] = 0;                 // Primera columna
                mat[i][N - 1] = 0;             // Última columna
            }
            break;

        case 3:
            // Llenar la matriz de tal forma que mat[i][j] sea igual a i+j
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    mat[i][j] = i + j;
                }
            }
            break;

        case 4:
            // Llenar la diagonal principal de la matriz con los números 1,2,3,...N
            for (int i = 0; i < N; i++) {
                mat[i][i] = i + 1;
            }
            break;

        case 5:
            // Llenar todas las filas pares con los números 1,2,3,...N, y las filas impares con los números N,N-1,N-2,...1
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (i % 2 == 0) {
                        mat[i][j] = j + 1;     // Filas pares
                    } else {
                        mat[i][j] = N - j;     // Filas impares
                    }
                }
            }
            break;

        case 6:
            // Calcular las sumas de las filas de la matriz y guardarlas en un arreglo
            for (int i = 0; i < N; i++) {
                sumas[i] = 0;
                for (int j = 0; j < N; j++) {
                    sumas[i] += mat[i][j];
                }
            }
            // Imprimir las sumas de las filas
            printf("Sumas de las filas de la matriz:\n");
            for (int i = 0; i < N; i++) {
                printf("Fila %d: %d\n", i + 1, sumas[i]);
            }
            break;

        default:
            printf("Opción no válida.\n");
            return 1;
    }

    // Imprimir la matriz resultante
    printf("Matriz resultante:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
