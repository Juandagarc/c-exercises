// 12. Escribir un programa que evalúe la siguiente expresión:
// (a+7*c)/(b+2-a)+2*b
// presentado por: Juan David García Arce.

#include <stdio.h>

int main() {
    //Se declaran las variables
    int a;
    int b;
    int c;

    //Se piden los números
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
    printf("Ingrese el tercer número: ");
    scanf("%d", &c);

    //Se muestra el resultado de la suma
    printf("El resultado de la operación es: %d\n", (a + 7 * c) / (b + 2 - a) + 2 * b);

    return 0;
} 