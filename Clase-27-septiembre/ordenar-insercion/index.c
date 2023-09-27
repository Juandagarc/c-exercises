#include <stdio.h>

int main() {
    int n; // Tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int v[n]; // Declaración del arreglo

    // Ingresar elementos del arreglo
    for (int i = 0; i < n; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (int i = 1; i < n; i++) {
        int temp = v[i];
        int j = i - 1;

        while (j >= 0 && temp < v[j]) {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = temp;
    }

    // Imprimir el arreglo ordenado
    printf("El arreglo ordenado es:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
