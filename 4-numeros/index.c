//Presentado por: Juan David García Arce

#include<stdio.h>

int main () {

    printf("Ingrese por favor 4 numeros enteros: \n");
    int a, b, c, d, e, f;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int mayor = 0;
    int menor = 999;
    if (a > mayor) {
        mayor = a;
    }
    if (a < menor) {
        menor = a;
    }
    if ( b > menor) {
        mayor = b;
    }
    if ( b < menor) {
        menor = b;
    }
    if ( c > mayor) {
        mayor = c;
    }
    if ( c < menor) {
        menor = c;
    }
    if ( d > mayor) {
        mayor = d;
    }
    if ( d < menor) {
        menor = d;
    }
    printf("El mayor es: %d\n", mayor);
    printf("El menor es: %d\n", menor);
    if ( (a != mayor) && (a != menor) && ( a != e ) ) {
        e = a;
    }
    if ( (b != mayor) && (b != menor) && ( b != e ) ) {
        e = b;
    }
    if ( (c != mayor) && (c != menor) && ( c != e ) ) {
        e = c;
    }
    if ( (d != mayor) && (d != menor) && ( d != e ) ) {
        e = d;
    }
    if ( (a != mayor) && (a != menor) && ( a != f ) && ( a != e ) ) {
        f = a;
    }
    if ( (b != mayor) && (b != menor) && ( b != f )  && ( b != e ) ) {
        f = b;
    }
    if ( (c != mayor) && (c != menor) && ( c != f ) && ( c != e ) ) {
        f = c;
    }
    if ( (d != mayor) && (d != menor) && ( d != f ) && ( d != e ) ) {
        f = d;
    }
    if ( e < f ) {
        printf("El segundo mayor es: %d\n", f);
        printf("El segundo menor es: %d\n", e);
    } else {
        printf("El segundo mayor es: %d\n", e);
        printf("El segundo menor es: %d\n", f);
    }
    return 0;
}