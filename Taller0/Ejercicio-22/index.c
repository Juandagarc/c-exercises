// 22. Escribir un programa que lea dos números enteros A y B, y obtenga los valores de la división entera de A dividido B y el residuo de esta.
// Presentado por: Juan David García Arce.

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

    //Se muestra el resultado de la división entera
    printf("El resultado de la división entera es: %d\n", a / b);
    //Se muestra el resultado del residuo
    printf("El residuo de la división es: %d\n", a % b);

    return 0;
}