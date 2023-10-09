//Presentado por: Juan David García Arce

#include <stdio.h>

int main() {
    int n;

    // Solicitar la dimensión de la matriz al usuario
    printf("Ingrese la dimensión de la matriz cuadrada: ");
    scanf("%d", &n);

    // Declarar la matriz de tamaño n x n
    int matriz[n][n];

    // Solicitar los datos de la matriz al usuario
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular la suma de la primera fila para su comparación
    int sumaFila = 0;
    for (int j = 0; j < n; j++) {
        sumaFila += matriz[0][j];
    }

    // Verificar si la matriz es mágica
    int esMagica = 1; // Suponemos que es mágica por defecto

    // Comprobar las sumas de filas
    for (int i = 1; i < n; i++) {
        int sumaFilaActual = 0;
        for (int j = 0; j < n; j++) {
            sumaFilaActual += matriz[i][j];
        }
        if (sumaFilaActual != sumaFila) {
            esMagica = 0; // No es mágica
            break;
        }
    }

    // Comprobar las sumas de columnas
    for (int j = 0; j < n; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < n; i++) {
            sumaColumna += matriz[i][j];
        }
        if (sumaColumna != sumaFila) {
            esMagica = 0; // No es mágica
            break;
        }
    }

    // Comprobar la suma de la diagonal principal
    int sumaDiagonalPrincipal = 0;
    for (int i = 0; i < n; i++) {
        sumaDiagonalPrincipal += matriz[i][i];
    }
    if (sumaDiagonalPrincipal != sumaFila) {
        esMagica = 0; // No es mágica
    }

    // Comprobar la suma de la diagonal secundaria
    int sumaDiagonalSecundaria = 0;
    for (int i = 0; i < n; i++) {
        sumaDiagonalSecundaria += matriz[i][n - i - 1];
    }
    if (sumaDiagonalSecundaria != sumaFila) {
        esMagica = 0; // No es mágica
    }

    // Imprimir el resultado
    if (esMagica) {
        printf("La matriz es mágica.\n");
    } else {
        printf("La matriz no es mágica.\n");
    }

    return 0;
}
