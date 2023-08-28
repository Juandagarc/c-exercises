//Presentado por Juan David García Arce

#include <stdio.h>

int main (){

    int n = 0;
    int m;

    scanf("%d", &m);


    while (n < m)
    {
        n++;
        if (n % 3 == 0)
        {
            printf("%d\n", n);
        }
    }

    return 0;
}