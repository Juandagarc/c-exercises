//Presentado por Juan David García Arce

#include <stdio.h>
//Para el random
#include <stdlib.h>
#include <time.h>

int main () {

     srand(time(NULL));

    int opcion, longitud, i, primo = 1, j, numeroPrimoGuardado = 100, primerDato = 0;
    printf("Ingrese una opcion:\n");
    scanf("%d", &opcion);

    printf("Ingrese la longitud del vector:\n");
    scanf("%d", &longitud);

    int vector[longitud];

    switch (opcion)
    {
        case 1:
            printf("Usted eligio la opcion 1\n");

            for (i = 0; i < longitud; i++)
            {
                //Solo lee randoms pares
                do {
                    //Menores que 100 y time 0
                    printf("Ingrese el dato:\n");
                    scanf("%d", &vector[i]);
                } while (vector[i] % 2 != 0);
            }

            printf("El vector es:\n");

            for (i = 0; i < longitud; i++)
            {
                printf(" %d", vector[i]);
            }
            break;

        case 2:
            printf("Usted eligio la opcion 2\n");

            for (i = 0; i < longitud; i++)
            {
                //Solo lee randoms pares
                do {
                    //Menores que 100 y time 0
                    vector[i] = rand() % 100;
                } while (vector[i] % 2 != 0);
            }

            printf("El vector es:\n");

            for (i = 0; i < longitud; i++)
            {
                printf(" %d", vector[i]);
            }

            break;
        case 3:
            printf("Usted eligio la opcion 3\n");
            for (i = 0; i < longitud; i++)
            {
                //Aplica la serie de fibonacci
                if (i == 0 || i == 1)
                {
                    vector[i] = 1;
                }
                else
                {
                    vector[i] = vector[i - 1] + vector[i - 2];
                }
            }

            printf("El vector es:\n");

            for (i = 0; i < longitud; i++)
            {
                printf(" %d", vector[i]);
            }

            break;
            case 4:
            printf("Usted eligio la opcion 4\n");
            for (i = 0; i < longitud; i++)
            {
                //añade numeros ramdoms
                vector[i] = rand() % 10;
            }

            printf("El vector es:\n");

            for (i = 0; i < longitud; i++)
            {
                printf(" %d", vector[i]);
            }

            //Se hallan los primos
            for (i = 0; i < longitud; i++)
            {
                primo = 1;
                for (j = 2; j < vector[i]; j++)
                {
                    if (vector[i] % j == 0)
                    {
                        primo = 0;
                        break;
                    }
                }
                if (primo == 1 && vector[i] > 1 && primerDato == 0)
                {
                    numeroPrimoGuardado = vector[i];
                    primerDato = 1;
                }
            }

            printf("\nEl numero primo guardado es: %d\n", numeroPrimoGuardado);
            break;
            case 5:
            printf("Usted eligio la opcion 5\n");
            for (i = 0; i < longitud; i++)
            {
                //añade numeros ramdoms
                vector[i] = rand() % 10;
            }

            printf("El vector es:\n");

            for (i = 0; i < longitud; i++)
            {
                printf(" %d", vector[i]);
            }

            //Se hallan los primos
            for (i = 0; i < longitud; i++)
            {
                primo = 1;
                for (j = 2; j < vector[i]; j++)
                {
                    if (vector[i] % j == 0)
                    {
                        primo = 0;
                        break;
                    }
                }
                if (primo == 1 && vector[i] > 1 && primerDato == 0)
                {
                    numeroPrimoGuardado = vector[i];
                }
            }

            printf("\nEl numero primo guardado es: %d\n", numeroPrimoGuardado);


                break;

        default:
            printf("Usted eligio una opcion invalida\n");
            break;
    }

    return 0;
}