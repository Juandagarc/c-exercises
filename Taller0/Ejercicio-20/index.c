// 20. Escribir un programa que calcule el equivalente en pies de una longitud de x metros sabiendo que 1 metro equivale a 39.27 pulgadas y 12 pulgadas equivalen a 1 pie.
// Presentado por: Juan David García Arce.

#include <stdio.h>

int main() {

    //Se declaran las variables
    float metros = 0;
    float pulgadas = 0;
    float pies = 0;

    //Se pide el valor de los metros
    printf("Ingrese el valor de los metros: ");
    scanf("%f", &metros);

    //Se calculan las pulgadas
    pulgadas = metros * 39.27;

    //Se calculan los pies
    pies = pulgadas / 12;

    //Se muestra el resultado
    printf("El resultado es: %f pies\n", pies);

    return 0;
}