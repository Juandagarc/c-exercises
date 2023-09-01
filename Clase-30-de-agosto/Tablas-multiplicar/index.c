//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    int numero, i= 0, opcion;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    printf("Desea ver la tabla de multiplicar de este numero? \n 1. Si \n 2. No \n ");
    scanf("%d", &opcion);
    
    switch (opcion)
    {
    case 1:
        while (i < 10)
    {
        i++;
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
        break;
    }

    return 0;
}