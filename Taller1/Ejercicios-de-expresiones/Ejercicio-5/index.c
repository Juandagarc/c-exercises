#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
//--------------------------------------------------------------
    // Definición de variables
    float tiempo, velocidad, peso;
    int contador, itera, suma;
    char letra, primo;
    bool bandera;
//--------------------------------------------------------------
    // Expresiones con explicaciones
    // a. (tiempo + itera) / (velocidad + peso)
    float resultado_a = (tiempo + itera) / (velocidad + peso);
    // Explicación: Se realiza una operación de suma y división entre variables de tipo real y entero, lo cual es válido en C.
    //--------------------------------------------------------------
    // b. piso(tiempo) + contador < itera * suma & ~bandera
    bool resultado_b = (floor(tiempo) + contador) < (itera * suma) & (~bandera);
    // Explicación: Combina operaciones de suma, comparación y operador de bits. Las operaciones se pueden realizar en los tipos de datos mencionados.
    //--------------------------------------------------------------
    // c. tiempo * velocidad < bandera & peso >= 0.0
    // No se puede evaluar directamente, ya que bandera es de tipo booleano.
    // Explicación: La variable 'bandera' es de tipo booleano y no puede ser comparada directamente con el resultado de la operación 'tiempo * velocidad'. Las variables de tipo booleano solo pueden ser operadas con otros valores booleanos.
    //--------------------------------------------------------------
    // d. letra + contador * suma
    char resultado_d = letra + contador * suma;
    // Explicación: Se realiza una operación de multiplicación y suma entre variables de tipos diferentes, pero esto es posible en C. El valor numérico de la variable 'letra' se convierte implícitamente a su valor ASCII antes de realizar la operación.
    //--------------------------------------------------------------
    // e. techo(velocidad) * suma + piso(tiempo) * itera
    float resultado_e = ceil(velocidad) * suma + floor(tiempo) * itera;
    // Explicación: Se utilizan funciones matemáticas ('ceil' y 'floor') para redondear los valores de 'velocidad' y 'tiempo'. Las operaciones de multiplicación y suma se pueden realizar con los tipos de datos mencionados.
//--------------------------------------------------------------
    // Impresión de resultados
    printf("Resultado a: %.2f\n", resultado_a);
    printf("Resultado b: %d\n", resultado_b);
    printf("Resultado d: %d\n", resultado_d);
    printf("Resultado e: %.2f\n", resultado_e);
//--------------------------------------------------------------

    return 0;
}
