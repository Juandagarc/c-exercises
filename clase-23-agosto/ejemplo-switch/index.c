//Presentado por Juan David García Arce.

#include<stdio.h>

int main () {

    printf("Elija que desea hacer:\n");
    printf("1.Consignacion\n");
    printf("2.Retiro\n");
    printf("3. pago de servicios\n");
    printf("4. Cambio de clave\n");
    printf("5. Consulta de saldo\n");

    int opcion;
    scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
            printf("Usted eligio consignacion");
            break;
        case 2:
            printf("Usted eligio retiro");
            break;
        case 3:
            printf("Usted eligio pago de servicios");
            break;
        case 4:
            printf("Usted eligio cambio de clave");
            break;
        case 5:
            printf("Usted eligio consulta de saldo");
            break;
    }
    return 0;
}