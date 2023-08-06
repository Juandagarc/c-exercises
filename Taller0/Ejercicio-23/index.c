// 23. Escribir un programa que convierta un número de segundos en su equivalente en minutos y segundos.
// presentado por: Juan David García Arce.

#include <stdio.h>

int main() {
    
    //Se declaran las variables
    int segundos;
    int minutos;
    int segundosRestantes;

    //Se piden los segundos
    printf("Ingrese los segundos: ");
    scanf("%d", &segundos);

    //Se calculan los minutos y los segundos restantes
    minutos = segundos / 60;
    segundosRestantes = segundos % 60;

    //Se muestra el resultado
    printf("El resultado es: %d minutos y %d segundos\n", minutos, segundosRestantes);

    return 0;
}