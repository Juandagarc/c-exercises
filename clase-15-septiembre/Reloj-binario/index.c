#include <stdio.h>
#include <stdlib.h> // para system("cls")
#include <unistd.h> // para sleep

int main() {
    int opcion;
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:

        int HORA, MINUTO, SEGUNDO, HORAaux, MINUTOaux, SEGUNDOaux;

        for (HORA = 0; HORA < 24; HORA++) {
            for (MINUTO = 0; MINUTO < 60; MINUTO++) {
                for (SEGUNDO = 0; SEGUNDO < 60; SEGUNDO++) {
                    system("cls"); // Borra la pantalla de la consola en sistemas Unix/Linux
                    //UN for para pasar el tiempo a binario
                    for (HORAaux = HORA; HORAaux > 0; HORAaux = HORAaux / 2) {
                        printf("%d", HORAaux % 2);
                    }
                    if (HORA < 1) {
                        printf("0");
                    }
                    printf(":");
                    for (MINUTOaux = MINUTO; MINUTOaux > 0; MINUTOaux = MINUTOaux / 2) {
                        printf("%d", MINUTOaux % 2);
                    }
                    if (MINUTO < 1) {
                        printf("0");
                    }
                    printf(":");
                    for (SEGUNDOaux = SEGUNDO; SEGUNDOaux > 0; SEGUNDOaux = SEGUNDOaux / 2) {
                        printf("%d", SEGUNDOaux % 2);
                    }
                    if (SEGUNDO < 1) {
                        printf("0");
                    }

                    // Retardo de un segundo
                    sleep(1);
                }
            }
        }
        break;
        case 2:
        
        int cont, contr = 1, aux = 1, aux2 = 1;
        //Muestra los primeros 8 numeros de una serie fibonacci
        printf("+---+---+---+");
        printf("+ 1 + 1 +");
        for ((cont = 0); cont < 6; cont++) {
            contr = aux;
            aux = aux2;
            aux2 = aux+contr;
            printf(" %d", aux2);
        }
    }

    return 0;
}
