//Presentado por: Juan David García Arce
#include<stdio.h>

int main() {
    printf("Bienvenido a la tienda de Don Nicolas:\n");
    printf("¿Qué deseas comprar?");
    printf("1. Arroz ( 500.000 pesos ) \n");
    printf("2. Frijoles ( 600.000 pesos ) \n");
    printf("3. Leche ( 700.000 pesos ) \n");
    printf("4. Huevos ( 800.000 pesos )\n");
    printf("5. Sal ( 100.000 pesos )\n");

    //Se define el precio de los productos.
    int arroz = 500000;
    int frijoles = 600000;
    int leche = 700000;
    int huevos = 800000;
    int sal = 100000;

    //Se define la opcion.

    int opcion;
    scanf("%d", &opcion);

    if ( opcion = 1 ){
        printf("El precio del arroz es de: %d", arroz);
        printf("El precio del arroz con el 40%% adicional es de: %0.f", arroz * 1.4);
    } else if ( opcion = 2 ){
        printf("El precio de los frijoles es de: %d", frijoles);
        printf("El precio de los frijoles con el 40%% adicional es de: %0.f", frijoles * 1.4);
    } else if ( opcion = 3 ){
        printf("El precio de la leche es de: %d", leche);
        printf("El precio de la leche con el 40%% adicional es de: %0.f", leche * 1.4);
    } else if ( opcion = 4 ){
        printf("El precio de los huevos es de: %d", huevos);
        printf("El precio de los huevos con el 40%% adicional es de: %0.f", huevos * 1.4);
    } else if ( opcion = 5 ){
        printf("El precio de la sal es de: %d", sal);
        printf("El precio de la sal con el 50%% adicional es de: %0.f", sal * 1.5);
    } else {
        printf("No tenemos ese producto");
    }
}