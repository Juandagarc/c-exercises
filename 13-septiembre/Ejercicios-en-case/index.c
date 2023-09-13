//Presentado por Juan david García Arce
#include <stdio.h>
#include <stdlib.h> // para system("cls")
#include <unistd.h> // para sleep

int main (){

    int opcion;

    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    switch(opcion){
        case 1:
        int HORA, MINUTO, SEGUNDO;

        for (HORA = 0; HORA < 24; HORA++) {
            for (MINUTO = 0; MINUTO < 60; MINUTO++) {
                for (SEGUNDO = 0; SEGUNDO < 60; SEGUNDO++) {
                    system("clear"); // Borra la pantalla de la consola en sistemas Unix/Linux

                    printf("Cronometro %d:%d:%d\n", HORA, MINUTO, SEGUNDO);

                    // Retardo de un segundo
                    sleep(1);
                }
            }
        }
        break;
        case 2:
        int cont, contr;
        for (cont = 0, contr = 6; cont <= 9; cont++, contr--) {
            printf("cont = %d contr = %d\n", cont, contr);
        }
        break;
        case 3:
        int i, num;
        long fac;

        for (num = 1; num <= 5; num++) {
            fac = 1;

            for (i = 1; i <= num; i++) {
                fac = fac * i;
            }

            printf("El Factorial es: %ld\n", fac);
        }
        case 4:

            int digito = 0;
            while (digito <= 9) {
                printf("%d ", digito);
                digito++;
        }
        case 5:
        int segundos, minutos, horas;
        segundos = minutos = horas = 0;

        for (;;) { // Bucle infinito
            segundos++;

            // Esperar 1 segundo (1000 ms)
            sleep(1);

            if (segundos == 60) {
                minutos++;
                segundos = 0;
            }

            if (minutos == 60) {
                horas++;
                minutos = 0;
            }

            if (horas == 24) {
                horas = 0;
                minutos = 0;
                segundos = 0;
            }

            printf("%02d:%02d:%02d\n", horas, minutos, segundos);
        }
        break;
        case 6:
        int nlineas, i, naster;

        for (nlineas = 3; nlineas <= 9; nlineas++) {
            if (nlineas % 2 != 0) {
                printf("%d. | ", nlineas);
                for (naster = 1; naster <= nlineas; naster++) {
                    printf("*");
                }
                printf("\n");
            } else {
                printf("   |");
                for (i = 1; i <= 12; i++) {
                    printf("_");
                }
                printf("\n\n");
            }
        }
        break;
        case 7:
        for (int x = 1; x <= 20; x++) {
            printf("%d", x);
            if (x % 5 == 0) {
                printf("\n");
            } else {
                printf("\t");
            }
        }
    }

    return 0;
}