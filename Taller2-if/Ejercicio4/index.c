//Presentado por: Juan David García Arce

#include<stdio.h>

int main () {

    int numero, digito1, digito2, digito3, digito4;

    printf("Ingrese un numero de 4 digitos: \n");
    scanf("%d", &numero);

    if ( numero >= 1000 && numero <= 9999 ) {
        digito1 = numero / 1000;
        digito2 = ( numero % 1000 ) / 100;
        digito3 = ( numero % 100 ) / 10;
        digito4 = numero % 10;
        printf("El numero invertido es: %d%d%d%d\n", digito4, digito3, digito2, digito1);
    } else {
        printf("El numero ingresado no es valido.\n");
    }

    return 0;
}
