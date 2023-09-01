//Presentado por Juan David García Arce.

#include<stdio.h>

int main () {

    char eleccion;

    printf("Ellija un color:\n");
    printf("r-rojo\n");
    printf("b-blanco\n");
    printf("a-azul\n");

    switch (eleccion=getchar())
    {
    case 'r':
    case 'R':
        printf("El color es rojo");
        break;
    case 'b':
    case 'B':
        printf("El color es blanco");
        break;
    case 'a':
    case 'A':
        printf("El color es azul");
        break;
    default:
        printf("No eligio ningun color");
        break;
    }

    return 0;
}