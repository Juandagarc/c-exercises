#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    //--------------------------------------------------------------
    // Definición de variables con valores dados
    float tiempo = 3.0, velocidad = -4.5, peso = 8.0;
    int contador = 5, itera = -2, suma = 30;
    char letra = 'a', primo = 'b';
    bool bandera = false;
    //--------------------------------------------------------------

    //--------------------------------------------------------------
    // Evaluación de expresiones
    // a. itera + piso(tiempo + velocidad) / (suma + itera)
    float resultado_a = itera + floor(tiempo + velocidad) / (suma + itera);

    // b. letra <> primo & techo(tiempo) / piso(velocidad) + contador < 5
    bool resultado_b = (letra != primo) & (ceil(tiempo) / floor(velocidad)) + contador < 5;

    // c. peso * velocidad / (tiempo + 5.6)
    float resultado_c = peso * velocidad / (tiempo + 5.6);

    // d. contador + ((itera) * (itera) * suma) / 4 - itera
    int resultado_d = contador + ((itera) * (itera) * suma) / 4 - itera;

    // e. bandera & (sqrt(tiempo) <= peso * velocidad)
    bool resultado_e = bandera & (sqrt(tiempo) <= peso * velocidad);

    // f. contador < suma || (tiempo > 1.0 & ~(suma = itera))
    bool resultado_f = contador < suma || (tiempo > 1.0 && ~(suma = itera));
    //--------------------------------------------------------------

    //--------------------------------------------------------------
    // Impresión de resultados
    printf("Resultado a: %.2f\n", resultado_a);
    printf("Resultado b: %d\n", resultado_b);
    printf("Resultado c: %.2f\n", resultado_c);
    printf("Resultado d: %d\n", resultado_d);
    printf("Resultado e: %d\n", resultado_e);
    printf("Resultado f: %d\n", resultado_f);
    //--------------------------------------------------------------

    return 0;
}
