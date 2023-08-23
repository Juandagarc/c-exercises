//Presentado por: Juan David García Arce.

#include<stdio.h>

int main () {

    int opcion;

    printf("Elija el dia de la semana con un número");
    scanf("%d", opcion);

    switch (opcion)
    {
    case 1:
        printf("El día es Lunes");
        break;
    case 2:
        printf("El día es Martes");
        break;
    case 3:
        printf("El día es Miercoles");
        break;
    case 4:
        printf("El día es Jueves");
        break;
    case 5:
        printf("El día es Viernes");
        break;
    case 6:
        printf("El día es Sabado");
        break;
    case 7:
        printf("El día es Domingo");
        break;
    default:
    printf("El número ingresado no corresponde a un día de la semana");
        break;
    }

    return 0;
}