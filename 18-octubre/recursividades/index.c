#include <stdio.h>

// Función de recursión simple
int sumaRecursividadSimple(int n) {
    if (n == 0)
        return 0;
    return n + sumaRecursividadSimple(n - 1);
}

int sumaRecursividadMultiple(int n) {
    if (n == 0)
        return 0;
    return n + sumaRecursividadMultiple(n - 1);
}

int sumaRecursividadAnidada(int n) {
    if (n == 0)
        return 0;
    return n + sumaRecursividadAnidada(n - 1);
}


// Función de recursión cruzada e indirecta
int sumaRecursividadCruzadaIndirecta(int n, int flag) {
    if (n == 0)
        return 0;
    if (flag == 0)
        return n + sumaRecursividadCruzadaIndirecta(n - 1, 1);
    else
        return n + sumaRecursividadCruzadaIndirecta(n - 1, 0);
}

int main() {
    int n, opcion;
    
    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    printf("Seleccione el tipo de recursión:\n");
    printf("1. Recursividad Simple\n");
    printf("2. Recursividad Múltiple\n");
    printf("3. Recursividad Anidada\n");
    printf("4. Recursividad Cruzada e Indirecta\n");
    scanf("%d", &opcion);

    int resultado = 0;

    switch (opcion) {
        case 1:
            resultado = sumaRecursividadSimple(n);
            break;
        case 2:
            resultado = sumaRecursividadMultiple(n);
            break;
        case 3:
            resultado = sumaRecursividadAnidada(n);
            break;
        case 4:
            resultado = sumaRecursividadCruzadaIndirecta(n, 0);
            break;
        default:
            printf("Opción no válida.\n");
            return 1;
    }

    printf("La suma de los números desde 0 hasta %d es: %d\n", n, resultado);

    return 0;
}
