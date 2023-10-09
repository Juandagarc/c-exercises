#include <stdio.h>

int main() {
    int productos = 4;
    int meses = 12;
    int ventas[productos][meses];

    // Leer las unidades vendidas por producto y mes
    printf("Ingrese las unidades vendidas por producto y mes:\n");
    for (int i = 0; i < productos; i++) {
        printf("Producto %d:\n", i + 1);
        for (int j = 0; j < meses; j++) {
            printf("Mes %d: ", j + 1);
            scanf("%d", &ventas[i][j]);
        }
    }

    // Declarar e inicializar los arreglos después de leer los datos
    int unidadesAnuales[productos];
    int unidadesMensuales[meses];

    for (int i = 0; i < productos; i++) {
        unidadesAnuales[i] = 0;
    }

    for (int j = 0; j < meses; j++) {
        unidadesMensuales[j] = 0;
    }

    // Calcular la cantidad de unidades vendidas de cada producto en un año
    for (int i = 0; i < productos; i++) {
        for (int j = 0; j < meses; j++) {
            unidadesAnuales[i] += ventas[i][j];
        }
    }

    // Calcular la cantidad de unidades vendidas de los cuatro productos por cada mes
    for (int j = 0; j < meses; j++) {
        for (int i = 0; i < productos; i++) {
            unidadesMensuales[j] += ventas[i][j];
        }
    }

    // Encontrar el producto con menos ventas en un año
    int productoMenosVentas = 0;
    for (int i = 1; i < productos; i++) {
        if (unidadesAnuales[i] < unidadesAnuales[productoMenosVentas]) {
            productoMenosVentas = i;
        }
    }

    // Imprimir resultados
    printf("Unidades vendidas de cada producto en un año:\n");
    for (int i = 0; i < productos; i++) {
        printf("Producto %d: %d unidades\n", i + 1, unidadesAnuales[i]);
    }

    printf("Unidades vendidas de los cuatro productos por cada mes:\n");
    for (int j = 0; j < meses; j++) {
        printf("Mes %d: %d unidades\n", j + 1, unidadesMensuales[j]);
    }

    printf("Producto con menos ventas en un año: Producto %d\n", productoMenosVentas + 1);

    return 0;
}
