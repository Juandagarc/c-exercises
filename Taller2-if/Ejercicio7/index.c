//Presentado por: Juan David García Arce

#include<stdio.h>

int main () {

    float temperatura, temperaturaConvertida;
    int escala;

    printf("Ingrese la temperatura: \n");
    scanf("%f", &temperatura);

    printf("Ingrese la escala a la que desea convertir la temperatura (1: Farenheit, 2: Kelvin): \n");
    scanf("%d", &escala);

    if ( escala == 1 ) {
        temperaturaConvertida = ( temperatura * 1.8 ) + 32;
        printf("La temperatura en Farenheit es: %.2f\n", temperaturaConvertida);
    } else if ( escala == 2 ) {
        temperaturaConvertida = temperatura + 273.15;
        printf("La temperatura en Kelvin es: %.2f\n", temperaturaConvertida);
    } else {
        printf("La escala ingresada no es valida.\n");
    }

    return 0;
}