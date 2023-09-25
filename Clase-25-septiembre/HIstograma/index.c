//Presentado por Juan David García Arce

#include <stdio.h>

// Constantes
#define N 5
#define MAXDATOS 100

// Variables
int i, j, totalDatos;
int coleccion[MAXDATOS];
int histograma[N];

int main() {
    printf("Por favor digite el número de datos de la colección: (inferior o igual a 100)\n");
    scanf("%d", &totalDatos);

    for (i = 0; i < totalDatos; i++) {
        printf("Por favor digite el dato %d:\n", i + 1);
        scanf("%d", &coleccion[i]);
    }

    for (i = 0; i < N; i++) {
        histograma[i] = 0;
    }

    for (i = 0; i < totalDatos; i++) {
        int d = coleccion[i] - 1;
        histograma[d]++;
    }

    for (i = 0; i < N; i++) {
        printf("%d: ", i + 1);
        int f = histograma[i];

        for (j = 0; j < f; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
