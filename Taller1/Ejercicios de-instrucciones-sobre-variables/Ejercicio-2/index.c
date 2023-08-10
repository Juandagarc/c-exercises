#include <stdio.h>

int main() {
//--------------------------------------------------------------
    //Se definen las variables
    float x = 3.5f, v = 1.4f, p = 6.0f;
    float z;
//--------------------------------------------------------------
    // Primera asignación
    z = v - p / (x + p / x - v);
    printf("Resultado 1: %f\n", z);

    // Segunda asignación
    z = p / x / v + p / x * v;
    printf("Resultado 2: %f\n", z);

    // Tercera asignación
    z = (v - 3.0f * x / p) / (4.0f - v / (5.0f + p / x));
    printf("Resultado 3: %f\n", z);

    // Cuarta asignación
    z = 2.0f * p - 4.0f / v + 5.0f * x / (3.0f + v * p - x);
    printf("Resultado 4: %f\n", z);

    return 0;
}
