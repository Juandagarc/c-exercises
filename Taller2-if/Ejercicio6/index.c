//Presentado por Juan David García Arce

#include<stdio.h>

int main () {

    int libros, cuadernos, discos, precioLibros, precioCuadernos, precioDiscos, totalLibros, totalCuadernos, totalDiscos, total, totalDescuento, totalDescuentoContado;
    float descuento, descuentoContado;

    printf("Ingrese la cantidad de libros, cuadernos y discos: \n");
    scanf("%d %d %d", &libros, &cuadernos, &discos);

    printf("Ingrese el precio de los libros, cuadernos y discos: \n");
    scanf("%d %d %d", &precioLibros, &precioCuadernos, &precioDiscos);

    totalLibros = libros * precioLibros;
    totalCuadernos = cuadernos * precioCuadernos;
    totalDiscos = discos * precioDiscos;

    total = totalLibros + totalCuadernos + totalDiscos;

    if ( totalLibros > 0 ) {
        descuento = 0.2;
    } else if ( totalDiscos > 0 ) {
        descuento = 0.15;
    } else {
        descuento = 0;
    }

    totalDescuento = total - ( total * descuento );

    if ( totalLibros > 0 ) {
        descuentoContado = 0.26;
    } else if ( totalDiscos > 0 ) {
        descuentoContado = 0.21;
    } else {
        descuentoContado = 0;
    }

    totalDescuentoContado = total - ( total * descuentoContado );

    printf("El total de la orden es: %d\n", total);
    printf("El total de la orden con descuento es: %d\n", totalDescuento);
    printf("El total de la orden con descuento de contado es: %d\n", totalDescuentoContado);

    return 0;
}