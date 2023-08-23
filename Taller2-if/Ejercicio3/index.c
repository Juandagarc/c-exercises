//Presentado por: Juan David García Arce

#include<stdio.h>

int main () {

    int hora, minutos, segundos, tiempo, costo, dia, horaSalida, minutosSalida, segundosSalida;

    printf("Ingrese la hora de inicio de la llamada (hora-minutos-segundos): \n");
    scanf("%d %d %d", &hora, &minutos, &segundos);

    printf("Ingrese el tiempo de la llamada en segundos: \n");
    scanf("%d", &tiempo);

    printf("Ingrese el dia de la llamada: \n");
    scanf("%d", &dia);

    if ( dia >= 1 && dia <= 5 ) {
        costo = tiempo * 3;
    } else if ( dia == 6 || dia == 7 ) {
        costo = tiempo * 2;
    } else {
        printf("El dia ingresado no es valido.\n");
    }

    segundosSalida = segundos + tiempo;
    minutosSalida = minutos;
    horaSalida = hora;

    if ( segundosSalida >= 60 ) {
        segundosSalida = segundosSalida - 60;
        minutosSalida = minutosSalida + 1;
    }

    if ( minutosSalida >= 60 ) {
        minutosSalida = minutosSalida - 60;
        horaSalida = horaSalida + 1;
    }

    printf("La hora de salida de la llamada es: %d:%d:%d\n", horaSalida, minutosSalida, segundosSalida);
    printf("El costo de la llamada es: $%d\n", costo);

    return 0;
}