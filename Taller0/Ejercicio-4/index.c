//4. Escribir un programa que sume, reste, multiplique y divida dos números: x = 10 y = 2
//Presentado por: Juan David García Arce.

#include <stdio.h>

int main() {
    
    //Se declaran las variables
    int x = 10;
    int y = 2;

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