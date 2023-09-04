//Presentado por Juan David García Arce

#include<stdio.h>

int main (){

    int i = 0, j = 0;

    while ( i < 4)
    {
        while ( j < 4)
        {
            printf("*");
            j++;
        }
        if ( j == 4 )
            {
                printf("\n");
                j = 0;
            }
        i++;
    }
    

    return 0;
}