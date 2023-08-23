#include <stdio.h>

int main() {

    float frutasVerduras, productosAseo, carnes, ropaCalzado, licores;
    int hora, minutos;
    float descuentoHoraBaja, descuentoHoraAlta;
    float totalCompra, ahorro;

    printf("Ingrese la hora de compra (en formato HH:MM): ");
    scanf("%d:%d", &hora, &minutos);

    printf("Ingrese el monto de compras de frutas y verduras: $");
    scanf("%f", &frutasVerduras);

    printf("Ingrese el monto de compras de productos de aseo: $");
    scanf("%f", &productosAseo);

    printf("Ingrese el monto de compras de carnes: $");
    scanf("%f", &carnes);

    printf("Ingrese el monto de compras de ropa y calzado: $");
    scanf("%f", &ropaCalzado);

    printf("Ingrese el monto de compras de licores: $");
    scanf("%f", &licores);

    if (hora < 8 || (hora == 8 && minutos <= 30)) {
        descuentoHoraBaja = 0.10; // Descuento en la hora baja
        descuentoHoraAlta = 0.05; // Descuento en la hora alta
    } else if (hora < 9 || (hora == 9 && minutos <= 30)) {
        descuentoHoraBaja = 0.05; // Descuento en la hora baja
        descuentoHoraAlta = 0.02; // Descuento en la hora alta
    } else {
        descuentoHoraBaja = 0.0; // Sin descuento
        descuentoHoraAlta = 0.0; // Sin descuento
    }

    // Calculo del el total de la compra y el ahorro
    totalCompra = frutasVerduras + productosAseo + carnes + ropaCalzado + licores;
    ahorro = (frutasVerduras * descuentoHoraBaja + productosAseo * descuentoHoraBaja +
              carnes * descuentoHoraBaja + ropaCalzado * descuentoHoraBaja +
              licores * descuentoHoraBaja) -
             (frutasVerduras * descuentoHoraAlta + productosAseo * descuentoHoraAlta +
              carnes * descuentoHoraAlta + ropaCalzado * descuentoHoraAlta +
              licores * descuentoHoraAlta);

    printf("Total de la compra: $%.2f\n", totalCompra);
    printf("Ahorro por madrugar: $%.2f\n", ahorro);

    return 0;
}
