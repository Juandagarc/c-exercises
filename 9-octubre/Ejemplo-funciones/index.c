//Presentado por: Juan David García Arce

#include <stdio.h>

int suma ( int a, int b ) {
    return a + b;
}

int multiplicacion ( int a, int b ) {
    return a * b;
}

int mayor ( int a, int b ) {
    if ( a > b ) {
        return a;
    } else {
        return b;
    }
}

int potencia ( int a, int b ) {
    int i, resultado = 1;
    for ( i = 0; i < b; i++ ) {
        resultado = resultado * a;
    }
    return resultado;
}

int LongitudCadena ( char cadena[] ) {
    int i = 0;
    while ( cadena[i] != '\0' ) {
        i++;
    }
    return i;
}

void Intercambio ( int *a, int *b ) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main () {
    int a = 5, b = 7;
    char cadena[] = "Hola mundo";
    char nombre[] = "Juan David";
    char apellido[] = "García Arce";
    printf("La suma de %d y %d es %d\n", a, b, suma(a, b));
    printf("La multiplicacion de %d y %d es %d\n", a, b, multiplicacion(a, b));
    printf("La suma de %d y %d es %da\n", suma(a, b), multiplicacion(a, b), suma(suma(a, b), multiplicacion(a, b)));
    printf("El mayor entre %d y %d es %d\n", a, b, mayor(a, b));
    printf("La potencia de %d elevado a %d es %d\n", a, b, potencia(a, b));
    printf("La longitud de la cadena \"%s\" es %d\n", cadena, LongitudCadena(cadena));
    printf("La longitud de la cadena \"%s\" es %d\n", nombre, LongitudCadena(nombre));
    printf("La longitud de la cadena \"%s\" es %d\n", apellido, LongitudCadena(apellido));
    printf("El valor de a es %d y el valor de b es %d\n", a, b);
    Intercambio(&a, &b);
    printf("El valor de a es %d y el valor de b es %d\n", a, b);
    return 0;
}

