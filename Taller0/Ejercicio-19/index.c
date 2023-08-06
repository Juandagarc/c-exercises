// 19. Escribir un programa que calcule el capital producido por un capital de x de pesos, al cabo de un año depositado a un interés del y % mensual.
// Presentado por: Juan David García Arce.

#include <stdio.h>

int main() {

    //Se declaran las variables
    int capital;
    int interes;

    //Se piden los datos
    printf("Ingrese el capital: ");
    scanf("%d", &capital);
    printf("Ingrese el interés: ");
    scanf("%d", &interes);

    //Se muestra el resultado del capital
    printf("El capital producido es: %d\n", capital * (interes/100));

    return 0;
}