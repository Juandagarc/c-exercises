//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    char respuesta;
    double nota, promedio = 0;
    int contador = 0;   

    printf("Bienvenido al programa para calcular el promedio de notas\n Desea ingresar alguna nota? (s/n)\n");

    scanf("%c", &respuesta);
    getchar();

    while ( respuesta == 's' || respuesta == 'S' )
    {
        printf("Ingrese la nota\n");
        scanf("%lf", &nota);
        getchar();

        promedio += nota;
        contador++;

        printf("Desea ingresar otra nota? (s/n)\n");
        scanf("%c", &respuesta);
        
    }

    promedio /= contador;

    printf("El promedio de las notas es: %.2f", promedio);

    return 0;
}