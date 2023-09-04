//Presentado por Juan David García Arce

#include<stdio.h>

int main (){

    int i = 0, j = 0;
    int k = 0;

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
            printf("*");
            k++;
            if ( k == j)
            {
                printf("\n");
            }
        }
    }

    return 0;
}