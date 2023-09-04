//Presentado por: Juan David García Arce

#include <stdio.h>
int main () {

    char clase;
    int cpasajes;
    double incremento, total, ppasaje, descuento;
    printf("Ingresar la clase -a -b -c (clase del boleto de viaje)");
    scanf("%c", &clase);
    getchar();
    printf("Ingresar la cantidad de pasajes:");
    scanf("%d", &cpasajes);
    printf("Ingresar el precio del pasaje: ");
    scanf("%f", &ppasaje);

    switch(clase) {
        case 'a':
            incremento = ( cpasajes * ppasaje ) * 0.20;
            break;
        case 'b':
            incremento = ( cpasajes * ppasaje ) * 0.15;
            break;
        case 'c':
            incremento = ( cpasajes * ppasaje ) * 0.10;
            break;
    }
    if( cpasajes > 5 ){
        descuento = ( ( cpasajes * ppasaje ) + incremento ) * 0.11;
    } else {
        descuento = 0;
    }
    total = ( ( cpasajes * ppasaje ) + incremento ) - descuento;
    printf("El total a pagar es: %f", total);


    return 0;
}