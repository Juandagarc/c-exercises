    //Presentado por Juan David García Arce

    //Movimiento del caballo en ajedrez

    #include <stdio.h>
    //Para radom
    #include <stdlib.h>
    #include <time.h>
    //Para system clear
    #include <unistd.h>
    //para valor absoluto
    #include <math.h>
    //Para colores
    //Se define el color rojo
    #define RED     "\033[31m"      /* Red */
    //Se resetea el color
    #define RESET   "\033[0m"

    int main () {

        srand(time(NULL));

        int x = 3, y = 3, i, j, n = 1;
        int contador = 1;
        int intentos = 0;
        //El caballo es la c en el taablero
        char matriz[8][8][100] = {{"■","□","■","□","■"},
                                {"□","■","□","■","□"},
                                {"■","□","■","□","■"},
                                {"□","■","□","■","□"},
                                {"■","□","■","□","■"}};

        while( n != 0) {
            // system("clear");
            // Se imprime la matriz caracter por caracter
            // for (i = 0; i < 8; i++) {
            //     for (j = 0; j < 8; j++) {
            //         //Se imprime rojo si es un numero en x y y
            //         if ((i == x) && (j == y)) {
            //             printf(RED"%s\t"RESET, matriz[i][j]);
            //         } else {
            //             printf("%s\t", matriz[i][j]);
            //         }
            //     }
            //     printf("\n");
            // }
            // se tira un dado aleatorio del 1 al 8
            int dadox = rand() % 8;
            int dadoy = rand() % 8;
            //Se verifica si el caballo se puede mover con valor absoluto
            if (abs(x - dadox) == 2 && abs(y - dadoy) == 1 && dadox >= 0 && dadoy >= 0 && dadox <= 4 && dadoy <= 4) {
                x = dadox;
                y = dadoy;
                //se agrega en la matriz en x y el numero de movimiento si no hay un numero
                if (strcmp(matriz[x][y], "■") == 0) {
                    sprintf(matriz[x][y], "%d", contador);
                    contador++;
                } else if (strcmp(matriz[x][y], "□") == 0) {
                    sprintf(matriz[x][y], "%d", contador);
                    contador++;
                }
            } else if (abs(x - dadox) == 1 && abs(y - dadoy) == 2 && dadox >= 0 && dadoy >= 0 && dadox <= 4 && dadoy <= 4 ) {
                x = dadox;
                y = dadoy;
                //se agrega en la matriz en x y el numero de movimiento si no hay un numero
                if (strcmp(matriz[x][y], "■") == 0) {
                    sprintf(matriz[x][y], "%d", contador);
                    contador++;
                } else if (strcmp(matriz[x][y], "□") == 0) {
                    sprintf(matriz[x][y], "%d", contador);
                    contador++;
                }
            } else {
                // printf("El caballo no se puede mover a esa posicion\n");
                x = 0;
                y = 0;
            }
            // printf("x: %d, y: %d\n Ingrese 1 para tirar el dado:\n", x, y);
            //se cuentan cuantos "□" y "■" quedan
            int contadorNegro = 0;
            int contadorBlanco = 0;
            for (i = 0; i < 8; i++) {
                for (j = 0; j < 8; j++) {
                    if (strcmp(matriz[i][j], "□") == 0) {
                        contadorNegro++;
                    } else if (strcmp(matriz[i][j], "■") == 0) {
                        contadorBlanco++;
                    }
                }
            }
            //Si no hay mas "□" y "■" se termina el juego
            if (contadorNegro == 0 && contadorBlanco == 0) {
                printf("El juego ha terminado\nIntentos: %d\n", intentos);
                //Se imprime la matriz caracter por caracter
                    for (i = 0; i < 8; i++) {
                        for (j = 0; j < 8; j++) {
                            //Se imprime rojo si es un numero en x y y
                            if ((i == x) && (j == y)) {
                                printf(RED"%s\t"RESET, matriz[i][j]);
                            } else {
                                printf("%s\t", matriz[i][j]);
                            }
                        }
                        printf("\n");
                    }
                return 0;
            }
        intentos++;
        }
        return 0;
    }