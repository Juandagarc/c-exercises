//Presentado por Juan david García Arce

#include <stdio.h>

int main ()
{
    int numero1, numero2;
    printf("Ingrese por favor un numero para determinar cual es mayor");
    scanf("%d", &numero1);
    printf("Ingrese por favor el segundo numero:");
    scanf("%d", &numero2);

    if (numero1 < numero2)
    {
        int mayor = numero2;
        printf("El numero %d es mayor que el numero %d", mayor, numero1);
    } else if (numero1 == numero2)
    {
        printf("Los numeros son iguales");
    } else
    {
        int mayor = numero1;
        printf("El numero %d es mayor que el numero %d", mayor, numero2);
    }
    

    return 0;
}