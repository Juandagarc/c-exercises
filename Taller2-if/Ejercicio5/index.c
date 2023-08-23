//Presentado por: Juan David García Arce

#include<stdio.h>

int main () {

    int numero;

    printf("Ingrese el numero de la licencia: \n");
    scanf("%d", &numero);

    if ( numero == 123 ) {
        printf("La licencia pertenece a Turbo C\n");
    } else if ( numero == 234 ) {
        printf("La licencia pertenece a Word\n");
    } else if ( numero == 345 ) {
        printf("La licencia pertenece a Power Point\n");
    } else if ( numero == 456 ) {
        printf("La licencia pertenece a Excel\n");
    } else if ( numero == 567 ) {
        printf("La licencia pertenece a Autocad\n");
    } else if ( numero == 678 ) {
        printf("La licencia pertenece a Matlab\n");
    } else if ( numero == 789 ) {
        printf("La licencia pertenece a Corel Draw\n");
    } else if ( numero == 890 ) {
        printf("La licencia pertenece a Otros programas\n");
    } else {
        printf("La licencia ingresada no es valida.\n");
    }

    return 0;
}