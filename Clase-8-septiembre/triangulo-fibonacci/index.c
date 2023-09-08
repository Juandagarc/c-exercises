//Presentado por: Juan David Garintcía Arce
//Presentado por: Maximiliano Giraldo Ocampo

#include<stdio.h>
int main () {

    int i = 1, j = 1, n = 0, k = 1, numero1 = 1, numero2 = 1, numero3 = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &n);
    
    while (i <= n)
    {
        k = 0;
        while (k < j)
        {
            printf("%d\t", numero1);
            k++;
            numero3 = numero1 + numero2;
            numero1 = numero2;
            numero2 = numero3;
        }
        printf("\n");
        i++;
        j++;
    }

    return 0;
}