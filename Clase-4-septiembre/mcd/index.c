//presentado por Juan david García Arce
//Programa que calcula el maximo comun divisor de dos numeros
#include<stdio.h>

int main (){

    int numero1, numero2, mcd, i = 1, numero3;

    printf("Ingrese el primer numero:\n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &numero2);
    printf("ingrese el tercer numero:\n");
    scanf("%d", &numero3);

    while ( i <= numero1 && i <= numero2)
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
    
    return 0;
}