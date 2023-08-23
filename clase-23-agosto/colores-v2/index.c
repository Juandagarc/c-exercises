//Presentado por Juan David García Arce.

#include<stdio.h>
//Libreria para usar toupper
#include<ctype.h>

int main () {

    char eleccion;

    printf("Ellija un color:\n");
    printf("r-rojo\n");
    printf("b-blanco\n");
    printf("a-azul\n");

    switch (eleccion=toupper(getchar()))
    {
    case 'R':
        printf("El color es rojo");
        break;
    case 'B':
        printf("El color es blanco");
        break;
    case 'A':
        printf("El color es azul");
        break;
    default:
        printf("No eligio ningun color");
        break;
    }

    return 0;
}