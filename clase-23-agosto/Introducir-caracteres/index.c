//Presentado por: Juan David García Arce.

#include<stdio.h>

int main () {

printf("Introduzca una vocal\n");

    char vocal;
    vocal = getchar();

    switch (vocal)
    {
    case 'a':
        printf("La vocal es a");
        break;
    case 'e':
        printf("La vocal es e");
        break;
    case 'i':
        printf("La vocal es i");
        break;
    case 'o':
        printf("La vocal es o");
        break;
    case 'u':
        printf("La vocal es u");
        break;
    default:
        printf("No eligio ninguna vocal");
        break;
    }

    return 0;
}