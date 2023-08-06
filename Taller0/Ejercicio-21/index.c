// 21. Escribir un programa que calcule el área de un rectángulo a partir de sus coordenadas x1, y1,x2, y2.
// presentado por: Juan David García Arce.

#include <stdio.h>

int main() {

    //Se declaran las variables
    int x1;
    int y1;
    int x2;
    int y2;

    //Se piden los datos
    printf("Ingrese la coordenada x1: ");
    scanf("%d", &x1);
    printf("Ingrese la coordenada y1: ");
    scanf("%d", &y1);
    printf("Ingrese la coordenada x2: ");
    scanf("%d", &x2);
    printf("Ingrese la coordenada y2: ");
    scanf("%d", &y2);

    //Se muestra el resultado del área
    printf("El área del rectángulo es: %d\n", (x2 - x1) * (y2 - y1));

    return 0;
}