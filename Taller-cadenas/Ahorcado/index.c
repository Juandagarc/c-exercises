//Presentado por: Juan David García Arce

#include <stdio.h>
#include <string.h>
//Para random
#include <stdlib.h>
#include <time.h>
//Para system clear
#include <unistd.h>

//Se definen colores

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define CYAN    "\033[36m"      /* Cyan */

int main () {

    srandom(time(NULL));
    //Palabras del ahorcado

    char palabras[10][100] = {"casa", "perro", "gato", "computador", "celular", "cama", "mesa", "silla", "teclado", "mouse"};

    //Abecedario
    char alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    //letras usadas
    char letrasUsadas[26];

    //Firgura del ahorcado

    int intentos = 0;

    //Fondo

    char fondo[100] = "┌───┐\n│   │ \n│     \n│     \n│     \n│     \n│     \n┴───────";

    //Titulo de color cyan

    printf( CYAN "BINEVENIDO A AHORCADO!\n\n" RESET);

    //Se define la palabra a adivinar
    int numeroAleatorio = random() % 10;
    char palabra[100];
    strcpy(palabra, palabras[numeroAleatorio]);
    int longitudPalabra = strlen(palabra), i = 0;
    //Palabra con _
    char palabraConGuiones[100];

    //Se reemplazan las letras por guiones
    while (i < longitudPalabra) {
        palabraConGuiones[i] = '_';
        i++;
    }

    //Se añade el caracter nulo al final de la palabra
    palabraConGuiones[i] = '\0';

    printf("Palabra: %s", palabra);

    while (1) {

        //Si se ha perdido un intento se dibuja la parte del cuerpo correspondiente
        switch(intentos) {
            case 1:
                fondo[33] = 'O';
                break;
            case 2:
                fondo[42] = '|';
                break;
            case 3:
                fondo[43] = '\\';
                break;
            case 4:
                fondo[41] = '/';
                break;
            case 5:
                fondo[51] = '|';
                break;
            case 6:
                fondo[59] = '/';
                break;
            case 7:
                fondo[61] = '\\';
                break;
        }

        //Se dibuja la figura
        printf("\n%s\n", fondo);

        //Se muestra la palabra con guiones
        printf("%s\n", palabraConGuiones);

        //Se imprime el alfabeto y si la letra ya fue usada se imprime en rojo, si la letra pertenece a la palabra se imprime en verde
        int j = 0;
        while (j < 26) {
            int boolean = 0;
            int k = 0;
            while (k < longitudPalabra) {
                if (alfabeto[j] == palabraConGuiones[k]) {
                    boolean = 1;
                    break;
                }
                k++;
            }
            if (j == 13) {
                printf("\n");
            }
            if (boolean == 1) {
                printf(GREEN "%c " RESET, alfabeto[j]);
            } else {
                int l = 0;
                while (l < 26) {
                    if (alfabeto[j] == letrasUsadas[l]) {
                        printf(RED "%c " RESET, alfabeto[j]);
                        boolean = 1;
                        break;
                    }
                    l++;
                }
                if (boolean == 0) {
                    printf("%c ", alfabeto[j]);
                }
            }
            j++;
        }

        //Se verifica si la palabra ya fue adivinada
        if (strcmp(palabra, palabraConGuiones) == 0) {
            printf(GREEN "\nFelicidades, has ganado!\n" RESET);
            return 0;
        }

        if (intentos == 7) {
            printf(RED "\nLo siento, has perdido\n" RESET);
            return 0;
        }

        printf("\nIngrese una letra: ");
        char letra;
        scanf(" %c", &letra);

        //Se verifica si la letra ya fue usada
        int k = 0;
        while (k < 26) {
            if (letrasUsadas[k] == letra) {
                printf(RED "\nLa letra ya fue usada\n" RESET);
                //el programa espera 2 segundos
                sleep(1);
                intentos++;
                break;
            }
            k++;
        }

        //Si la letra no ha sido usada se agrega al arreglo de letras usadas
        int boolean2 = 0;
        int l = 0;
        while (l < 26) {
            if (letrasUsadas[l] == letra) {
                boolean2 = 1;
                break;
            }
            l++;
        }
        if (boolean2 == 0) {
            letrasUsadas[i] = letra;
            i++;
        }

        //Se busca la letra en la palabra
        j = 0;
        int boolean = 0;
        while (j < longitudPalabra) {
            if (palabra[j] == letra) {
                palabraConGuiones[j] = letra;
                boolean = 1;
            }
            j++;
        }
        if (boolean == 0) {
            intentos++;
        }
        system("clear");
    }


    return 0;
}