//Presentado por Juan David García Arce

#include<stdio.h>

int main (){

    float i = 0.0;
    float j = 0.0;

    while (i < 4)
    {
        while (j < 4)
    {
            printf("%.1f\t", j);
            j++;
        }
            printf("\n");
            i++;
            j = 0.0 + i/10;
    }


    return 0;
}