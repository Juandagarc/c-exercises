// 9. Escribir un programa que calcule la longitud y el área de una circunferencia, capturando el valor del radio.
// longitud de la circunferencia = 2 * PI * radio
// área de la circunferencia = PI * radio2
// Presentado por: Juan David García Arce.

#include <stdio.h>

int main() {

    //Se declaran las variables
    int radio;

    //Se piden los datos
    printf("Ingrese el radio: ");
    scanf("%d", &radio);

    //Se muestra el resultado de la longitud
    printf("La longitud de la circunferencia es: %f\n", 2 * 3.1416 * radio);

    //Se muestra el resultado del área
    printf("El área de la circunferencia es: %f\n", 3.1416 * radio * radio);

    return 0;
}