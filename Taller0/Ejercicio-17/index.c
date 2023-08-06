// 17. Escribir un programa que calcula el equivalente en grados Fahrenheit o Celsius de una temperatura t.
// Celsius / 5 = (Fahrenheit – 32) 9
// persentado por: Juan David García Arce.

#include <stdio.h>

int main() {
    
    //Se declaran las variables
    float t = 0;
    float f = 0;
    float c = 0;

    //Se pide la temperatura
    printf("Ingrese la temperatura: ");
    scanf("%f", &t);

    //Se calcula la temperatura en Fahrenheit
    f = (t * 9 / 5) + 32;

    //Se calcula la temperatura en Celsius
    c = (f - 32) * 5 / 9;

    //Se muestra el resultado
    printf("La temperatura en Fahrenheit es: %f\n", f);
    printf("La temperatura en Celsius es: %f\n", c);

    return 0;
}