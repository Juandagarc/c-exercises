//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    
    int numeroa, suma, sumaTotal = 0;//Ejercicio 1
    int numerob, contador = 0,i2 = 1, s = 2;//Ejercicio 2
    int numero, menor = 9999, mayor = 0;//Ejercicio 3
    int numero1 = 0, numero2 = 1, sumatoria = 0, cantidad, esPrimo1 = 1, esPrimo2 = 1, i = 2;//Ejercicio 4

    int opcion;

    printf("Ingrese el numero de ejercicio que desea ejecutar:\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
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
        break;
        case 2:
        printf("Ingrese un numero:\n");
        scanf("%d", &numerob);

        while (contador < numerob)
        {

            if( contador %2 == 0) {
                printf("%d ", i2);
                i2 += 1;
                } else
                {
                printf("%d ", s);
                s += 2;
                }

            contador++;
        }
        break;
        case 3:
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
        break;
        case 4:
        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        printf("Ingrese la cantidad de numeros de la serie:\n");
        scanf("%d", &cantidad);

        while ( i < numero1 || i < numero2)
        {
            if (numero1 % i == 0 && i != numero1)
            {
                esPrimo1 = 0;
            }
            if (numero2 % i == 0 && i != numero2)
            {
                esPrimo2 = 0;
            }
            i++;
        }
        //Condicional ternario: -El profe lo permitio.
        ((esPrimo1 == 1) && (esPrimo2 == 1)) ? printf("El numero %d y %d son primos\n", numero1, numero2) : printf("El numero %d y/o %d no son primos\n", numero1, numero2);

        i = 0;

        printf("%d %d ", numero1, numero2);

        while ( i < (cantidad - 2))
        {
            sumatoria = numero1 + numero2;
            printf("%d ", sumatoria);
            numero1 = numero2;
            numero2 = sumatoria;
            i++;
        }
        break;
        default:
        printf("Opcion no valida");
        break;
    }
    return 0;
}