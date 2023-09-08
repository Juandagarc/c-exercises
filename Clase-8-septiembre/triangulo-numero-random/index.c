//Presentado por: Juan David Garintcía Arce
//Presentado por: Maximiliano Giraldo Ocampo

#include<stdio.h>
//Libreria para random
#include<stdlib.h>

int main() {
    int i = 1, j = 1, n = 0, k = 1, m = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    while (i <= n)
    {
        k = 0;
        while (k < j)
        {
            m = rand() % 100;
            printf("%d\t", m);
            k++;
        }
        printf("\n");
        i++;
        j++;
    }


    return 0;
}