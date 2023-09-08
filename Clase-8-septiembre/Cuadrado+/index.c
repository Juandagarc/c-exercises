//Presentado por: Juan David Garintcía Arce
//Presentado por: Maximiliano Giraldo Ocampo

#include <stdio.h>

int main () {

    int i = 0, j = 0, n;

    printf("Ingrese un numero");
    scanf("%d", &n);

    while (i < n) {
        while (j < n) {
            printf("+");
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }

    printf("\n\n\n");

    int contadorMas = 0, contadorMenos = 0, contadorPor = 0, contadorVertical = 0;
    i = 0;

    while( contadorVertical <= n) {
        if( contadorMas == 0 ){
            printf("+");
        }
        while (i < contadorPor) {
            printf("*");
            i++;
        }
        i = 0;
        contadorPor++;
        if( contadorMas != 0 ){
            printf("+");
            contadorMas++;
        }
        while ((i < n) && ( (i + contadorPor) <= n)) {
            printf("-");
            i++;
        }
        i = 0;
        printf("\n");
        contadorMenos++;
        contadorVertical++;
        if( contadorMas == 0 ){
            contadorMas++;
        }
    }

    return 0;
}