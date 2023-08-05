//3. Escribir un programa que lea dos números y los sume.
//Presentado por: Juan David García Arce.

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
    printf("El resultado de la suma es: %d\n", a + b);

    return 0;
}
