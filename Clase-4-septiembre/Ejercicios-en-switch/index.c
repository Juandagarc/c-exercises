//Presentado por Juan David García Arce

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Se definen los colores
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
//para resetear el color
#define ANSI_COLOR_RESET   "\x1b[0m"

int main ()
{
    int i, j, k, opcion, numero1, numero2, mcd, numero3;
    int decimal = 0, resto;
    float i1 = 0.0;
    float j1 = 0.0;

    printf("Ingrese una opcion:\n");
    printf("1. Asteriscos.\n");
    printf("2. Columnas en forma triangular.\n");
    printf("3. Pasar de decimal a binario y viceversa.\n");
    printf("4. Coordenadas.\n");
    printf("5. mcd para dos numeros.\n");
    printf("6. mcd para tres numeros.\n");
    printf("7. Salir.\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        j = 0;
        i = 0;
        printf("Asteriscos:\n");
        while ( i < 4)
        {
            while ( j < 4)
            {
                //Se imprime el astersico rojo
                printf(ANSI_COLOR_RED "* " ANSI_COLOR_RESET);
                j++;
            }
            if ( j == 4 )
                {
                    printf("\n");
                    j = 0;
                }
            i++;
        }
        break;
    //_____________________________________________________________________
    case 2:
        printf("Columnas en forma triangular:\n");
        j = 0;
        i = 0;
        k = 0;
        printf("Ingrese el numero de columnas:\n");
        scanf("%d", &i);
        printf("\n");
        while( j < i)
        {
            j++;
            k = i - j;
            while (k > 0)
            {
                printf(" ");
                k--;
            }
            k = 0;
            while ( k < j)
            {
                //Se imprime el asterisco amarillo
                printf(ANSI_COLOR_YELLOW "*" ANSI_COLOR_RESET);
                k++;
                if ( k == j)
                {
                    printf("\n");
                }
            }
        }
        break;
    //_____________________________________________________________________
    case 3:
        printf("Convertir un número decimal a otra base\n");
        printf("Ingrese el número ");
        i = 0;
        scanf("%d", &numero1);

        printf("Ingrese la base (2 para binario, 10 para decimal): ");
        scanf("%d", &numero2);

        printf(ANSI_COLOR_RED"El número %d en base %d es: "ANSI_COLOR_RESET, numero1, numero2);

        if (numero2 == 2) {
            // Conversión a binario
            while (numero1 > 0) {
                printf(ANSI_COLOR_GREEN"%d"ANSI_COLOR_RESET, numero1 % 2);
                numero1 = numero1 / 2;
            }
        } else  if (numero2 == 10) {
            // Conversión a decimal
            while (numero1 > 0) {
                resto = numero1 % 10;
                numero1 = numero1 / 10;
                decimal = decimal + resto * pow(2, i); // Utiliza pow() en lugar de (2 ^ i)
                i++;
            }
            printf(ANSI_COLOR_GREEN"%d"ANSI_COLOR_RESET, decimal);
        } else
        {
            printf(ANSI_COLOR_RED"Base no válida. Intente con 2 o 10."ANSI_COLOR_RESET);
        }

        printf("\n");
        break;
    //_____________________________________________________________________
    case 4:
        printf("Coordenadas:\n");
        while (i1 < 4)
        {
            while (j1 < 4)
        {
                //Se imprime verde printf("%.1f\t", j1);
                printf(ANSI_COLOR_GREEN "%.1f\t" ANSI_COLOR_RESET, j1);
                j1++;
            }
                printf("\n");
                i1++;
                j1 = 0.0 + i1/10;
        }
        break;
    //_____________________________________________________________________
    case 5:
        printf("mcd para dos numeros:\n");
        i = 1;
        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);

        while ( i <= numero1 && i <= numero2)
        {
            if ( numero1 % i == 0 && numero2 % i == 0)
            {
                mcd = i;
            }
            i++;
        }
        printf("%d x %d =\x1B[31m %d\033[0m\n", numero1, mcd, numero1/mcd);
        printf("%d x %d =\x1B[31m %d\033[0m\n", numero2, mcd, numero2/mcd);
        printf("El maximo comun divisor es:\x1B[32m %d\033[0m\n", mcd);
        break;
    //_____________________________________________________________________
    case 6:
        printf("mcd para tres numeros:\n");
        i = 1;
        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        printf("ingrese el tercer numero:\n");
        scanf("%d", &numero3);

        while ( i <= numero1 && i <= numero2 && i <= numero3)
        {
            if ( numero1 % i == 0 && numero2 % i == 0 && numero3 % i == 0)
            {
                mcd = i;
            }
            i++;
        }
        printf("%d x %d =\x1B[31m %d\033[0m\n", numero1, mcd, numero1/mcd);
        printf("%d x %d =\x1B[31m %d\033[0m\n", numero2, mcd, numero2/mcd);
        printf("%d x %d =\x1B[31m %d\033[0m\n", numero3, mcd, numero3/mcd);
        printf("El maximo comun divisor es:\x1B[32m %d\033[0m\n", mcd);
        break;
    //_____________________________________________________________________
    case 7:
        printf("Salir.\n");
        break;
    //_____________________________________________________________________
    default:
        system("clear");
        printf("Opcion no valida.\n");
        main();
        break;
    }

    return 0;
}