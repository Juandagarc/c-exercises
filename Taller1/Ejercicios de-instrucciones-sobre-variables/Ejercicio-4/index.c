#include <stdio.h>
#include <math.h>

int main() {
    //--------------------------------------------------------------
    // Se definen las variables
    float x = 3.5, v = 1.4, p = 6.0;
    int i = 5, k = 2, cont = -4;
    char letra = 'p';
    _Bool bandera = 0, terminar = 1;
    //--------------------------------------------------------------
    
    //--------------------------------------------------------------
    // Instrucciones
    // Actualización de v
    x = v + (int)letra;

    // Actualización de k
    k = (k - 2 * cont) * (k - 2 * cont) + i * (cont - k / 2.0) / cont;

    // Actualización de v
    v = x + (p - sqrt(2 * x) * (v - x) + 3.0) * p;

    // Actualización de bandera
    bandera = (terminar && (i + 2 != cont || p >= v)) || (x + v == p);

    // Actualización de cont
    cont = cont + 1;

    // Actualización de i
    i = cont * (int)(x * v - p / 2.0) + k - i;

    // Actualización de p
    p = p + x - (int)(floor(p + x) + 5);

    // Actualización de letra
    letra = (char)k;

    // Actualización de k
    k = (k + cont) % ((int)floor(p) + (int)ceil(v));
    //--------------------------------------------------------------

    //--------------------------------------------------------------
    // Se imprimen las variables
    printf("x: %.2f\n", x);
    printf("v: %.2f\n", v);
    printf("p: %.2f\n", p);
    printf("i: %d\n", i);
    printf("k: %d\n", k);
    printf("cont: %d\n", cont);
    printf("letra: %c\n", letra);
    printf("bandera: %d\n", bandera);
    //--------------------------------------------------------------

    return 0;
}
