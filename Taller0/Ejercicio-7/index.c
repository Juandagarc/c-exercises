//6. Escribir un programa que calcule el área de un rectángulo.
//Presentado por: Juan David García Arce.

#include <stdio.h>

int main() {

    //Se declaran las variables
    int lado1;
    int lado2;

    //Se piden los datos
    printf("Ingrese el primer lado: ");
    scanf("%d", &lado1);
    printf("Ingrese el segundo lado: ");
    scanf("%d", &lado2);

    //Se muestra el resultado del área
    printf("El área del rectángulo es: %d\n", lado1 * lado2);

    return 0;
}