//Presentado por: Juan david García Arce

#include <stdio.h>

int main()
{
    printf("Ingrese por favor un numero para determinar si es capicuo:\n");
    int numero;
    scanf("%d", &numero);
   //Formula para 3 digitos
    if ( (numero / 100) == (numero % 10))
    {
        printf("El numero %d es capicuo", numero);
    }
    else
    {
        printf("El numero %d no es capicuo", numero);
    }
    //Se valida si el numero es de 3 digitos
    if  ( ( (numero  / 100) > 1 ) && ( (numero / 100) < 10 ) )
    {
        printf("\nEl numero %d es de 3 digitos", numero);
    }
    else
    {
        printf("\nEl numero %d no es de 3 digitos", numero);
    }
    return 0;
}