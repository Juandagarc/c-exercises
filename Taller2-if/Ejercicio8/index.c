//Presentado por: Juan David García Arce

#include<stdio.h>

int main () {

    int figura, base, altura, radio;
    float area;

    printf("Ingrese la figura de la cual desea calcular el area (1-rectangulo, 2-circulo, 3-triangulo): \n");
    scanf("%d", &figura);

    if ( figura == 1 ) {
        printf("Ingrese la base y la altura del rectangulo: \n");
        scanf("%d %d", &base, &altura);
        area = base * altura;
        printf("El area del rectangulo es: %.2f\n", area);
    } else if ( figura == 2 ) {
        printf("Ingrese el radio del circulo: \n");
        scanf("%d", &radio);
        area = 3.1416 * ( radio * radio );
        printf("El area del circulo es: %.2f\n", area);
    } else if ( figura == 3 ) {
        printf("Ingrese la base y la altura del triangulo: \n");
        scanf("%d %d", &base, &altura);
        area = ( base * altura ) / 2;
        printf("El area del triangulo es: %.2f\n", area);
    } else {
        printf("La figura ingresada no es valida.\n");
    }

    return 0;
}