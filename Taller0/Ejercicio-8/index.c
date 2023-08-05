//8. Escribir un programa que calcule el área de un triángulo, capturando los valores de base y altura
// área del triángulo = (base * altura)/2
//Presentado por: Juan David García Arce.

#include <stdio.h>

int main() {

    //Se declaran las variables
    int base;
    int altura;

    //Se piden los datos
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese la altura: ");
    scanf("%d", &altura);

    //Se muestra el resultado del área
    printf("El área del triángulo es: %d\n", (base * altura)/2);

    return 0;
}