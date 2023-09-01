//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    int numeroa, suma, sumaTotal = 0;

    //Se separa el numero en digitos y se suman

    printf("Ingrese un numero:\n");
    scanf("%d", &numeroa);

    //Se suman los numeros pares del numero
    while (numeroa > 1)
    {
        suma = numeroa % 10;

        if (suma % 2 == 0)
        {
            sumaTotal += suma;
        } else
        {
            suma = 0;
        }
        numeroa /= 10;
    }

    printf("La suma de los digitos es: %d\n", sumaTotal);

    return 0;
}