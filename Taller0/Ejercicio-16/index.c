// 16. Escribir un programa que calcule la hipotenusa de un triángulo rectángulo.
// //Presentado por: Juan David García Arce.

#include <stdio.h>
//libreria de matematicas
#include <math.h>

int main() {

    //Se declaran las variables
    int cateto1;
    int cateto2;

    //Se piden los datos
    printf("Ingrese el cateto 1: ");
    scanf("%d", &cateto1);
    printf("Ingrese el cateto 2: ");
    scanf("%d", &cateto2);

    //Se muestra el resultado de la hipotenusa
    printf("La hipotenusa del triángulo es: %f\n", sqrt(pow(cateto1, 2) + pow(cateto2, 2)));
    
    return 0;
}