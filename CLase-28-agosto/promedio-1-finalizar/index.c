//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    double nota, promedio = 0;
    int contador = 0;   

    printf("Bienvenido al programa para calcular el promedio de notas\n");

    while ( nota != -1 )
    {
        printf("Ingrese la nota\n");
        scanf("%lf", &nota);
        getchar();

        if ( nota != -1)
        {
        promedio += nota;
        contador++;
        }
    }

    promedio /= contador;

    printf("El promedio de las notas es: %.2f", promedio);

    return 0;
}