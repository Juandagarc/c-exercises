//Presentado por Juan David García Arce


#include <stdio.h>

int main () {

    //Se llena 3 matrices con numeros del 1 al 10
    int matriz1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    //Se imprime la matriz
    printf("Matriz 1\n");
    for (int i = 0; i < 3; i++) {
        printf("[");
        for (int j = 0; j < 3; j++) {
            printf("%d", matriz1[i][j]);
            if (j < 2) {
                printf(",");
            }
        }
        printf("]\n");
    }

    return 0;
}