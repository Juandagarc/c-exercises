// 13. Escribir un programa que evalúe la siguiente expresión:
// (a+5) * 3 / 2 * b – b
// presentado por: Juan David García Arce.

#include <stdio.h>

int main() {
    
    //Se declaran las variables
    int a;
    int b;

    //Se piden los números
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);

    //Se muestra el resultado de la suma
    printf("El resultado de la operación es: %d\n", (a + 5) * 3 / 2 * b - b);

    return 0;
}