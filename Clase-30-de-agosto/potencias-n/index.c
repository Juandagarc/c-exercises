//Presentado por Juan David García Arce

#include <stdio.h>
#include <math.h>

int main () {

    int numero, potencia, i= 0, opcion;

    printf("Ingrese un numero:\n");
    scanf("%d", &numero);
    printf("Ingrese la potencia a la que desea llegar:\n");
    scanf("%d", &potencia);
    printf("Desea ver la tabla de potencias de este numero? \n 1. Si \n 2. No \n ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        while (i <= potencia)
    {
        printf("%d ^ %d = %d\n", numero, i, pow(numero, i));
        i++;
    }
        break;
    }
    return 0;
}