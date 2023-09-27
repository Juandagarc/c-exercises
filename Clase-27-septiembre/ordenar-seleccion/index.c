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

    for (int i = 0; i < n - 1; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (v[k] > v[j]) {
                k = j;
            }
        }

        int temp = v[i];
        v[i] = v[k];
        v[k] = temp;
    }

    // Imprimir el arreglo ordenado
    printf("El arreglo ordenado es:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
