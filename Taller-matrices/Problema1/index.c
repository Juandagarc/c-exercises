//Presentado por: Juan David García Arce

#include <stdio.h>

int main() {
    // Definir la matriz con los valores proporcionados
    int matriz[8][7] = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 1, 0},
        {0, 0, 0, 0, 1, 1, 0},
        {0, 0, 0, 1, 1, 1, 0},
        {0, 0, 0, 1, 1, 1, 0},
        {0, 1, 0, 0, 1, 1, 0},
        {0, 0, 0, 0, 0, 0, 0}
    };

    // Área de cada parcela en metros cuadrados
    int areaParcela = 10;

    // Obtener el número de filas y columnas de la matriz
    int filas = sizeof(matriz) / sizeof(matriz[0]);
    int columnas = sizeof(matriz[0]) / sizeof(matriz[0][0]);


    int areaCultivada = 0;
    float perimetroCultivado = 0;
    int areaNoCultivada = 0;

    // Recorrer la matriz para calcular las áreas y el perímetro
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++){
            if (matriz[i][j] == 1) {
                areaCultivada += areaParcela;
                //Se halla el perimetro de la parcela sin repetir los lados
                if (matriz[i][j - 1] == 0) {
                    perimetroCultivado += 3.17;
                }
                if (matriz[i][j + 1] == 0) {
                    perimetroCultivado += 3.17;
                }
                if (matriz[i - 1][j] == 0) {
                    perimetroCultivado += 3.17;
                }
                if (matriz[i + 1][j] == 0) {
                    perimetroCultivado += 3.17;
                }
            } else {
                areaNoCultivada += areaParcela;
            }
        }
    }

    // Imprimir resultados
    printf("Área Cultivada: %dm^2\n", areaCultivada);
    printf("Perímetro del Área Cultivada: %.2fm\n", perimetroCultivado); // Convertir a metros
    printf("Área No Cultivada: %dm^2\n", areaNoCultivada);

    return 0;
}
