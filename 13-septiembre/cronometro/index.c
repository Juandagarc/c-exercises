#include <stdio.h>
#include <stdlib.h> // para system("cls")
#include <unistd.h> // para sleep

int main() {
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

    return 0;
}
