#include <stdio.h>
#include <stdbool.h>

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

    bool sw = true;
    int li = 0;

    do {
        li++;
        sw = true;

        for (int i = 0; i < n - li; i++) {
            if (v[i] > v[i + 1]) {
                // Intercambia los valores
                int temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                sw = false;
            }
        }
    } while (!sw);

    // Imprimir el arreglo ordenado
    printf("El arreglo ordenado es:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
