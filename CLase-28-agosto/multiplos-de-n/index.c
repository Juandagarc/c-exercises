//Presentado por Juan David García Arce

#include <stdio.h>

int main (){

    int n = 0;
    int m, i;

    printf("Ingrese el número del que desea conocer sus múltiplos: ");
    scanf("%d", &i);
    printf("Ingrese el número hasta el que desea conocer sus múltiplos: ");
    scanf("%d", &m);


    while (n < m)
    {
        n++;
        if (n % i == 0)
        {
            printf("%d\n", n);
        }
    }

    return 0;
}