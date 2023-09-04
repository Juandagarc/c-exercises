//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    int numero, menor = 9999, mayor = 0;

    while ( numero !=  -1 )
    {

        printf("Ingrese un numero:\n");
        scanf("%d", &numero);

        if (numero == -1)
        {
            printf("El numero mayor es: %d\n", mayor);
            printf("El numero menor es: %d\n", menor);
        }

        //Condicional ternario: -El profe lo permitio.
        ((numero > mayor) && (numero % 2 != 0 )) ? mayor = numero : mayor;
        ((numero < menor) && (numero % 2 != 0)) ? menor = numero : menor;

    }

    return 0;
}