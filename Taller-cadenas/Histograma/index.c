//Presentado por Juan David García Arce

#include <stdio.h>
#include <string.h>

int main () {

    char palabra[200];

    printf("Ingrese la frase: ");
    scanf("%99[^\n]", palabra);

    int longitudPalabra = strlen(palabra), a = 0, e = 0, i= 0, o = 0, u = 0, contador = 0;

    while (contador < longitudPalabra) {

        if (palabra[contador] == 'a') {
            a++;
        } else if (palabra[contador] == 'e') {
            e++;
        } else if (palabra[contador] == 'i') {
            i++;
        } else if (palabra[contador] == 'o') {
            o++;
        } else if (palabra[contador] == 'u') {
            u++;
        }

        contador++;
    }

    printf("La frase tiene %d a, %d e, %d i, %d o, %d u", a, e, i, o, u);

    //Se halla el mayor
    int mayor = a;
    int numeroMayor = 0;

    if (e > mayor) {
        mayor = e;
        numeroMayor = 1;
    } else if (i > mayor) {
        mayor = i;
        numeroMayor = 2;
    } else if (o > mayor) {
        mayor = o;
        numeroMayor = 3;
    } else if (u > mayor) {
        mayor = u;
    }
    printf("El mayor es %d", mayor);

    //Histograma
    printf("\n\n┌───┬───┬───┬───┬───┐\n");
    char fila[100] = "│   │   │   │   │   │";
    int filas = mayor;
    int contador2 = 0;
    for ( contador2 = 0; contador2 < filas; contador2++) {
        if (a != 0 && a >= e && a >= i && a >= o && a >= u && numeroMayor != 0) {
            fila[4] = 'x';
            a--;
        }
        if (e != 0 && e >= a && e >= i && e >= o && e >= u && numeroMayor != 1) {
            fila[10] = 'x';
            e--;
        }
        if (i != 0 && i >= a && i >= e && i >= o && i >= u && numeroMayor != 2) {
            fila[16] = 'x';
            i--;
        }
        if (o != 0 && o >= a && o >= e && o >= i && o >= u && numeroMayor != 3) {
            fila[22] = 'x';
            o--;
        }
        if (u != 0 && u >= a && u >= e && u >= i && u >= o) {
            fila[28] = 'x';
            u--;
        }
        if (a != 0 && a >= e && a >= i && a >= o && a >= u && numeroMayor == 0) {
            fila[4] = 'x';
            a--;
        }
        if (e != 0 && e >= a && e >= i && e >= o && e >= u && numeroMayor == 1) {
            fila[10] = 'x';
            e--;
        }
        if (i != 0 && i >= a && i >= e && i >= o && i >= u && numeroMayor == 2) {
            fila[16] = 'x';
            i--;
        }
        if (o != 0 && o >= a && o >= e && o >= i && o >= u && numeroMayor == 3) {
            fila[22] = 'x';
            o--;
        }
        printf("%s\n", fila);
        printf("├───┼───┼───┼───┼───┤\n");
        //reset
        fila[4] = ' ', fila[10] = ' ', fila[16] = ' ', fila[22] = ' ', fila[28] = ' ';
    }
    printf("│ a │ e │ i │ o │ u │\n");
    printf("└───┴───┴───┴───┴───┘\n");

    return 0;
}