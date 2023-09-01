//Presentado por Juan David García Arce

#include <stdio.h>

int main ()
{

    int numero1 = 0, numero2 = 1, sumatoria = 0, cantidad, esPrimo1 = 1, esPrimo2 = 1, i = 2;

    printf("Ingrese el primer numero:\n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &numero2);
    printf("Ingrese la cantidad de numeros de la serie:\n");
    scanf("%d", &cantidad);

    while ( i < numero1 || i < numero2)
    {
        if (numero1 % i == 0 && i != numero1)
        {
            esPrimo1 = 0;
        }
        if (numero2 % i == 0 && i != numero2)
        {
            esPrimo2 = 0;
        }
        i++;
    }
    //Condicional ternario: -El profe lo permitio.
    ((esPrimo1 == 1) && (esPrimo2 == 1)) ? printf("El numero %d y %d son primos\n", numero1, numero2) : printf("El numero %d y/o %d no son primos\n", numero1, numero2);

    i = 0;

    printf("%d %d ", numero1, numero2);

    while ( i < (cantidad - 2))
    {
        sumatoria = numero1 + numero2;
        printf("%d ", sumatoria);
        numero1 = numero2;
        numero2 = sumatoria;
        i++;
    }

    return 0;
}