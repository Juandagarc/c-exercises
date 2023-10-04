//Presentado por Juan David García Arce

#include <stdio.h>
//Para random
#include<stdlib.h>
#include<time.h>


int main () {

    srand(time(NULL));

    int largo, ancho;
    //Se genera la matriz con numeros de fibonacci
            int numeroAnterior = 0;
            int numeroActual = 1;
            int numeroSiguiente = 0;
            int i, j;
    //para numeros primos
            int k;
            int sumatoriaPrimos = 0;

    printf("Ingrese el largo de la matriz");
    scanf("%d", &largo);

    printf("Ingrese el ancho de la matriz");
    scanf("%d", &ancho);

    int matriz[largo][ancho];

    //Se determina el mayor y el menor
            int mayor = matriz[0][0];
            int menor = matriz[0][0];
    //Se determina el mayor de cada fila
            int mayorFila = matriz[0][0];

    int opcion;

    printf("1. Matriz con numeros de fibonacci\n");
    printf("2. Matriz con numeros aleatorios. se muestra el mayor y el menor(1-100)\n");
    printf("3. Matriz con numeros primos\n");
    printf("4. Se halla el mayor de cada fila\n");
    printf("5. Se ordena de menor a mayor\n");
    printf("Ingrese la opcion: ");

    scanf("%d", &opcion);

    switch(opcion){

        case 1:

            for (i = 0; i < largo; i++) {
                for (j = 0; j < ancho; j++) {
                    matriz[i][j] = numeroActual;
                    numeroSiguiente = numeroAnterior + numeroActual;
                    numeroAnterior = numeroActual;
                    numeroActual = numeroSiguiente;
                }
            }

            //Se imprime la matriz
            printf("Matriz:\n");
            for (i = 0; i < largo; i++) {
                for (j = 0; j < ancho; j++) {
                    printf("\t%d ", matriz[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:

                //Se genera la matriz con numeros aleatorios
                for (i = 0; i < largo; i++) {
                    for (j = 0; j < ancho; j++) {
                        matriz[i][j] = rand() % 100;
                    }
                }

                //Se imprime la matriz
                printf("Matriz:\n");
                for (i = 0; i < largo; i++) {
                    for (j = 0; j < ancho; j++) {
                        printf("\t%d ", matriz[i][j]);
                    }
                    printf("\n");
                }
                for (i = 0; i < largo; i++) {
                    for (j = 0; j < ancho; j++) {
                        if (matriz[i][j] > mayor) {
                            mayor = matriz[i][j];
                        }
                        if (matriz[i][j] < menor) {
                            menor = matriz[i][j];
                        }
                    }
                }
    
                printf("El mayor es: %d\n", mayor);
                printf("El menor es: %d\n", menor);
                break;

        case 3:
                
                //Se genera la matriz con numeros primos
                int numero = 1;
                int contador = 0;
                int esPrimo = 1;
    
                for (i = 0; i < largo; i++) {
                    for (j = 0; j < ancho; j++) {
                        esPrimo = 1;
                        numero++;
                        while (esPrimo == 1) {
                            contador = 0;
                            for ( k = 1; k <= numero; k++) {
                                if (numero % k == 0) {
                                    contador++;
                                }
                            }
                            if (contador == 2) {
                                esPrimo = 0;
                            } else {
                                numero++;
                            }
                        }
                        matriz[i][j] = numero;
                    }
                }
    
                //Se imprime la matriz
                printf("Matriz:\n");
                for (i = 0; i < largo; i++) {
                    for (j = 0; j < ancho; j++) {
                        printf("\t%d ", matriz[i][j]);
                    }
                    printf("\n");
                }

                //Suma primos de la diagonal
                for (i = 0; i < largo; i++) {
                    for (j = 0; j < ancho; j++) {
                        if (i == j) {
                            sumatoriaPrimos += matriz[i][j];
                        }
                    }
                }

                printf("Sumatoria de primos: %d", sumatoriaPrimos);
                break;
        
        case 4:
            //Se genera una matriz aleatoria
            for (i = 0; i < largo; i++) {
                for (j = 0; j < ancho; j++) {
                    matriz[i][j] = rand() % 100;
                }
            }

            //Se imprime la matriz
            printf("Matriz:\n");
            for (i = 0; i < largo; i++) {
                for (j = 0; j < ancho; j++) {
                    printf("\t%d ", matriz[i][j]);
                }
                printf("\n");
            }

            for (i = 0; i < largo; i++) {
                for (j = 0; j < ancho; j++) {
                    if (matriz[i][j] > mayorFila) {
                        mayorFila = matriz[i][j];
                    }
                }
                printf("El mayor de la fila %d es: %d\n", i, mayorFila);
                mayorFila = matriz[i + 1][0];
            }
            break;

        case 5:
            //Se genera una matriz aleatoria
            for (i = 0; i < largo; i++) {
                for (j = 0; j < ancho; j++) {
                    matriz[i][j] = rand() % 100;
                }
            }

            //Se imprime la matriz
            printf("Matriz:\n");
            for (i = 0; i < largo; i++) {
                for (j = 0; j < ancho; j++) {
                    printf("\t%d ", matriz[i][j]);
                }
                printf("\n");
            }

            //Se ordena la matriz
            int auxiliar;
            for (i = 0; i < largo; i++) {
                for (j = 0; j < ancho; j++) {
                    for (k = 0; k < largo; k++) {
                        for (int l = 0; l < ancho; l++) {
                            if (matriz[i][j] < matriz[k][l]) {
                                auxiliar = matriz[i][j];
                                matriz[i][j] = matriz[k][l];
                                matriz[k][l] = auxiliar;
                            }
                        }
                    }
                }
            }

            //Se imprime la matriz
            printf("Matriz ordenada:\n");
            for (i = 0; i < largo; i++) {
                for (j = 0; j < ancho; j++) {
                    printf("\t%d ", matriz[i][j]);
                }
                printf("\n");
            }
            break;



        default:
                printf("Opcion no valida");
                break;
    }

    return 0;
}