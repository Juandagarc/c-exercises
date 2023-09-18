//Presentadoo por: Juan David García Arce

#include <stdio.h>

int main () {


    int numero, sumatoria = 0, contador = 0;
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    do {
        sumatoria += contador;
        printf("%d\t%d\t\n", contador, sumatoria, numero);
        contador++;
    } while (contador < numero);

    return 0;
}