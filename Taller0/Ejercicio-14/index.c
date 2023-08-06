// 14. Escribir un programa que evalúe la siguiente expresión:
// (-b + raíz cuadrada(b2-4*a*c)/(2*a).
// presentado por: Juan David García Arce.

#include <stdio.h>
//libreria de matematicas
#include <math.h>

int main() {

    //Se declaran las variables
    int a;
    int b;
    int c;

    //Se piden los números
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
    printf("Ingrese el tercer número: ");
    scanf("%d", &c);

    //Se muestra el resultado de la suma
    printf("El resultado de la operación es: %f\n", (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a));
    
    return 0;
}