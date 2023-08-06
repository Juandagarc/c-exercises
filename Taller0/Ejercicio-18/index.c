// 18. Escribir un programa que calcule el número de horas, minutos y segundos que hay en 3700 segundos.
// Presentado por: Juan David García Arce.

#include <stdio.h>

int main() {

    //Se declaran las variables
    int segundos = 3700;
    int horas;
    int minutos;

    //Se calculan las horas
    horas = segundos / 3600;
    segundos = segundos % 3600;

    //Se calculan los minutos
    minutos = segundos / 60;
    segundos = segundos % 60;

    //Se muestra el resultado
    printf("El resultado es: %d horas, %d minutos y %d segundos\n", horas, minutos, segundos);

    return 0;
}