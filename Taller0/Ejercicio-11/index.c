// 11. Escribir un programa que calcule el volumen de una esfera de radio = r
// Volumen de la esfera = 4/3 * PI * radio3
// Presentado por: Juan David García Arce.

#include <stdio.h>
//libreria de matematicas
#include <math.h>

int main() {

    //Se declaran las variables
    int radio;

    //Se piden los datos
    printf("Ingrese el radio: ");
    scanf("%d", &radio);

    //Se muestra el resultado del volumen
    printf("El volumen de la esfera es: %f\n", 4.0/3.0 * 3.1416 * pow(radio, 3));
    
    return 0;
}