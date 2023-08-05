// 10. Escribir un programa que calcule la velocidad de un proyectil que recorre x Km en t minutos. Expresar el resultado en metros/segundo.
// Velocidad = espacio/tiempo
// //Presentado por: Juan David García Arce.

#include <stdio.h>

int main() {
    //Se declaran las variables
    int distancia;
    int minutos;

    //Se piden los datos
    printf("Ingrese la distancia recorrida en Km: ");
    scanf("%d", &distancia);
    printf("Ingrese el tiempo en minutos: ");
    scanf("%d", &minutos);

    //Se muestra el resultado de la velocidad
    printf("La velocidad del proyectil es: %d m/s\n", (distancia * 1000)/(minutos * 60));

    return 0;
}