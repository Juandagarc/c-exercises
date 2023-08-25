//Presentado por Juan David García Arce

#include<stdio.h>

int main () {

    int eleccion, numero;

    printf("Elija el ejercicio que desea ver:\n");
    printf("1. Que pida un numero del 1 al 5 y determine si es primo o no\n");
    printf("2. Que pida un numero y determine si es par.\n");
    printf("3. Que pida 3 numeros y muestre en pantalla de menor a mayor.\n");
    printf("4. Que pida un numero y determine si es positivo o negativo\n");
    printf("5. Que solo permita introducir los caracteres S y N.\n");
    printf("6. Que pida un numero y determine si el numero es mayor que 100.\n");
    printf("7. Que pida una letra y detecte si es vocal.\n");
    printf("8. Que pida 3 numeros y detecte si se han introducido en orden creciente.\n");

    scanf("%d", &eleccion);
    getchar();

    switch (eleccion)
    {
        case 1:
        printf("Ingrese un numero del 1 al 5:\n");
        scanf("%d", &numero);
        switch (numero)
        {
        case 2:
        case 3:
        case 5:
            printf("El numero es primo\n");
            break;
        case 1:
        case 4:
            printf("El numero no es primo\n");
            break;
        default:
            printf("El numero no esta entre el 1 y el 5\n");
            break;
        }
        case 2:
        printf("Ingrese un numero:\n");
        scanf("%d", &numero);
        switch (numero%2)
        {
        case 0:
            printf("El numero es par\n");
            break;
        case 1:
            printf("El numero es impar\n");
            break;
        default:
            printf("El numero no es entero\n");
            break;
        }
        case 3:
    }

    return 0;
}