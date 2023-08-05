//5. Escribir un programa que sume, reste, multiplique y divida dos números leídos desde el teclado.
//Presentado por: Juan David García Arce.

#include <stdio.h>

int main() {
    
    //Se declaran las variables
    int x;
    int y;

    //Se piden los números
    printf("Ingrese el primer número: ");
    scanf("%d", &x);
    printf("Ingrese el segundo número: ");
    scanf("%d", &y);

    //Se muestra el resultado de la suma
    printf("La suma de ambos números es: %d\n", x + y);
    //Se muestra el resultado de la resta
    printf("La resta de ambos números es: %d\n", x - y);
    //Se muestra el resultado de la multiplicación
    printf("La multiplicación de ambos números es: %d\n", x * y);
    //Se muestra el resultado de la división
    printf("La división de ambos números es: %d\n", x / y);

    return 0;
}