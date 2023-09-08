//Presentado por: Juan David Garintcía Arce
//Presentado por: Maximiliano Giraldo Ocampo

#include<stdio.h>
int main () {

    int i = 1, j = 1, n = 0, k = 1, primo = 2, booleanoPrimo = 0 , l = 2;

    printf("Ingrese un numero: ");
    scanf("%d", &n);
    
    while (i <= n)
    {
        if( i == 1 )
        {
            printf("%d\n", primo);
            i++;
            j++;
            continue;
        }
        k = 0;
        while (k < j)
        {
            while( booleanoPrimo == 0 )
        {
            primo++;
            l = 2;
            while( l < primo )
            {
                if( primo % l == 0 )
                {
                    booleanoPrimo = 0;
                    break;
                }
                else
                {
                    booleanoPrimo = 1;
                }
                l++;
            }
        }
            printf("%d\t", primo);
            k++;
            booleanoPrimo = 0;
        }
        printf("\n");
        i++;
        j++;
    }
    return 0;
    }