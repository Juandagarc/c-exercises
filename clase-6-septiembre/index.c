//Presentado por Juan David García Arce

#include <stdio.h>

//Se definen los colores
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
//para resetear el color
#define ANSI_COLOR_RESET   "\x1b[0m"

int main ()
{

    int i = 0, j = 1, k = 0, n = 0, l = 0, m = 0, opcion;
    int numero2, contador2 = 2, es_primo = 1;
    int n2, m2, conteo = 0, divisor = 1, primo;


    printf(ANSI_COLOR_YELLOW "Ingrese el numero de ejercicio que desea ejecutar:\n" ANSI_COLOR_RESET);
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
            printf(ANSI_COLOR_YELLOW "Ingrese el numero de numeros de la serie de fibonacci:\n" ANSI_COLOR_RESET);
            scanf("%d", &n);
            printf("\n");

            while ( l < n)
            {
                printf(ANSI_COLOR_GREEN "%d" ANSI_COLOR_RESET, i);
                while ( m < i)
                {
                    printf(ANSI_COLOR_RED "*" ANSI_COLOR_RESET);
                    m++;
                }
                printf("\n");
                m=0;
                k = i + j;
                i = j;
                j = k;
                l++;
            }
            break;
        case 2:
            printf(ANSI_COLOR_YELLOW "Ingrese un numero: " ANSI_COLOR_RESET);
            scanf("%d", &numero2);

            if (numero2 <= 1) {
                printf(ANSI_COLOR_GREEN "%d no es primo\n" ANSI_COLOR_RESET, numero2);
                return 0;
            }

            while (contador2 * contador2 <= numero2) {
                if (numero2 % contador2 == 0) {
                    es_primo = 0;
                    break;
                }
                contador2++;
            }

            if (es_primo) {
                printf(ANSI_COLOR_GREEN "%d es primo\n" ANSI_COLOR_RESET, numero2);
            } else {
                printf(ANSI_COLOR_GREEN "%d no es primo\n" ANSI_COLOR_RESET, numero2);
            }
            break;
        case 3:

            printf(ANSI_COLOR_YELLOW  "Ingrese el numero de primos: " ANSI_COLOR_RESET);
            scanf("%d", &m2);
            n2 = 0;
            primo = n2;
            while (primo < m2) {
            (divisor > primo) ? (
                (conteo == 2) ? (
                    printf(ANSI_COLOR_GREEN "%d " ANSI_COLOR_RESET, primo),
                    conteo = 0,
                    divisor = 1,
                    primo++
                ) : (
                    conteo = 0,
                    divisor = 1,
                    primo++
                )
            ) : (
                (primo % divisor) == 0 ? (
                    conteo++,
                    divisor++
                ) : (
                    divisor++
                )
            );
        }
            break;
        case 4:
            printf(ANSI_COLOR_YELLOW "Ingrese el tamaño del rectangulo: " ANSI_COLOR_RESET);
            scanf("%d", &n);
            printf("\n");
            while(m < n)
            {
                while (l < n)
                {
                    printf(ANSI_COLOR_GREEN "%d" ANSI_COLOR_RESET, 1+l);
                    l++;
                }
                l = 0;
                printf("\n");
                m++;
            }
            break;
        case 5:
            printf(ANSI_COLOR_YELLOW "Ingrese el tamaño del rectangulo: " ANSI_COLOR_RESET);
            scanf("%d", &n);
            printf("\n");
            while(m < n)
            {
                while (l <= m)
                {
                    printf(ANSI_COLOR_GREEN "%d" ANSI_COLOR_RESET, 1+l);
                    l++;
                }
                l = 0;
                printf("\n");
                m++;
            }
            break;
        case 6:
            printf(ANSI_COLOR_YELLOW "Ingrese el tamaño del rectangulo: " ANSI_COLOR_RESET);
            scanf("%d", &n);
            printf("\n");
            l = n;
            i = 1;
            while(m <= n)
            {
                while (l > m)
                {
                    printf(ANSI_COLOR_GREEN "%d" ANSI_COLOR_RESET, i);
                    l--;
                    i++;
                }
                i = 1;
                l = n;
                printf("\n");
                m++;
            }
            break;
        case 7:
            j = 0;
            printf(ANSI_COLOR_YELLOW "Ingrese el numero de columnas:\n" ANSI_COLOR_RESET);
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
                    printf(ANSI_COLOR_GREEN "%d" ANSI_COLOR_RESET, k + 1);
                    k++;
                    if ( k == j)
                    {
                        printf("\n");
                    }
                }
            }
            break;
        case 8:
            j = 0;
            printf(ANSI_COLOR_YELLOW "Ingrese el numero de columnas:\n" ANSI_COLOR_RESET);
            scanf("%d", &i);
            printf("\n");
            while( j < i)
            {
                i--;
                n++;
                k = 1;
                while (k < n)
                {
                    printf(" ");
                    k++;
                }
                k = 0;
                while ( k <= i)
                {
                    printf(ANSI_COLOR_GREEN "%d" ANSI_COLOR_RESET, k + 1);
                    k++;
                }
                printf("\n");
            }
        break;
        // case 9:
        //     printf(ANSI_COLOR_YELLOW "Ingrese el tamaño del rectangulo: " ANSI_COLOR_RESET);
        //     scanf("%d", &n);
        //     printf("\n");
        //     m = 1;
        //     while ((l < (n-1)))
        //         {
        //             printf(ANSI_COLOR_GREEN "%d" ANSI_COLOR_RESET, k + 1);
        //             l++;
        //             k++;
        //         }
        //         k = m;
        //         l = 0;
        //         printf(ANSI_COLOR_GREEN "1\n" ANSI_COLOR_RESET);
        //         m++;
        //     while(m <= n/2)
        //     {
        //         while (l < n)
        //         {
        //             if (l == 0 || l == n - 1)
        //             {
        //                 printf(ANSI_COLOR_GREEN "%d" ANSI_COLOR_RESET, k + 1);
        //             }
        //             else
        //             {
        //                 printf(" ");
        //             }
        //             l++;
        //         }
        //         l = 0;
        //         printf("\n");
        //         m++;
        //     }
            
        //     break;
    }

    return 0;
}