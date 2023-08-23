//Presentado por: Juan David García Arce
#include<stdio.h>

int main (){

    int largo, ancho, area, precio, descuento;

    printf("Ingrese el largo y el ancho del terreno: \n");
    scanf("%d %d", &largo, &ancho);

    area = largo * ancho;

    if ( area < 100 || area > 800 ) {
        printf("El area del terreno no es valida.\n");
    } else {
        printf("El area del terreno es valida.\n");
    }

    printf("Ingrese el precio del metro cuadrado: \n");
    scanf("%d", &precio);

    if ( area > 600 ) {
        descuento = 25;
    } else if ( area > 400 && area <= 600 ) {
        descuento = 17;
    } else if ( area > 200 && area <= 400 ) {
        descuento = 10;
    } else {
        descuento = 0;
    }

    printf("El descuento es de: %d%%\n", descuento);
    printf("El precio total del terreno es: %d\n", ( area * precio ) - ( ( area * precio ) * ( descuento / 100 ) ) );

    return 0;
} 