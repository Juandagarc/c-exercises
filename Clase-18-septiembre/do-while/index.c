//Presentado por Juan david García Arce

#include <stdio.h>

int main () {

    int opcion;
    int numero1, numero2;
    int datos_leidos = 0;
    int caso = 0;
    int mostrar_resultado = 0;


    do
    {
        printf("0. Terminar\n");
        printf("Menú de operaciones\n");
        printf("1. Leer datos\n");
        printf("2. Hallar primos en el intervalo\n");
        printf("3. Hallar fibonacci en el intervalo\n");
        printf("4. Hallar pares en el intervalo\n");
        printf("5. Hallar impares en el intervalo\n");
        printf("6. Mostrar Resultado\n");

        scanf("%d", &opcion);

        switch(opcion){
            case 0:
            return 0;
            break;
        case 1:
            printf("Ingrese el primer número: ");
            scanf("%d", &numero1);
            printf("Ingrese el segundo número: ");
            scanf("%d", &numero2);
            datos_leidos = 1;
            break;
        case 2:
        caso = 2;
        break;
        case 3:
        caso = 3;
        break;
        case 4:
        caso = 4;
        break;
        case 5:
        caso = 5;
        break;

        case 6:
        mostrar_resultado = 1;
        break;

        }

        if (mostrar_resultado == 1){
        switch (caso)
        {

        case 2:
            int numeroPrimo = numero1;
            int cont2, cont3, cont4;
            if (datos_leidos == 1)
            {
            int num = 2, n = numero2;

            do {
                int esPrimo = 1; // Suponemos que el número es primo al principio
                int i = 2;

                while (i * i <= num) {
                    if (num % i == 0) {
                        esPrimo = 0; // Si es divisible por algún número, no es primo
                        break;
                    }
                    i++;
                }

                if (esPrimo) {
                    printf("%d ", num); // Si es primo, lo mostramos
                }

                num++;
            } while (num <= n);
            }
            else
            {
                printf("Primero ingresa los datos.\n");
            }
            break;

        case 3:
            int cont, contr = 1, aux = 1, aux2 = 1;

            if (datos_leidos == 1)
            {
                if( numero1 <= 1 )
                {
                    printf("1 1 ");
                }
                do
                {
                    contr = aux;
                    aux = aux2;
                    aux2 = aux + contr;
                    if (aux2 >= numero1 && aux2 <= numero2)
                    {
                        printf(" %d", aux2);
                    }
                    cont++;
                } while (cont < numero2);

                printf("\n");
            }
            else
            {
                printf("Primero ingresa los datos.\n");
            }
            break;
        
        case 4:
            int numeroPar =numero1;
            if (datos_leidos == 1)
            {
                do
                {
                    if (numeroPar % 2 == 0)
                    {
                        printf("%d ", numeroPar);
                    }
                    numeroPar++;
                } while (numeroPar <= numero2);
                printf("\n");
            }
            else
            {
                printf("Primero ingresa los datos.\n");
            }
            break;
        case 5:
            int numeroImpar = numero1;
            if (datos_leidos == 1)
            {
                do
                {
                    if (numeroImpar % 2 != 0)
                    {
                        printf("%d ", numeroImpar);
                    }
                    numeroImpar++;
                } while (numeroImpar <= numero2);
                printf("\n");
            }
            else
            {
                printf("Primero ingresa los datos.\n");
            }
            break;


        default:
            break;
        }
        mostrar_resultado = 0;
        }
    } while (1);
    

    return 0;
}