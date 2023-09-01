//Presentado por Juan David García Arce

#include <stdio.h>
#include <math.h>

int main () {

    int numero, potencia, i = 0, s, m, contador = 2, opcion, esPrimo = 0, factorial = 1;

    printf("Que programa desea ver: \n1. Tabla de multiplicar\n2. Tabla de potencias\n3. Numeros primos\n4. Serie de Fibonacci\n5. Separar numeros y sumarlos\n6. factorial\n7. n numeros halla el mayor y el menor");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Ingrese un numero:\n");
        scanf("%d", &numero);
        while (i < 10)
    {
        i++;
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
        break;

    case 2:
        printf("Ingrese un numero:\n");
        scanf("%d", &numero);
        s = numero;
        printf("Ingrese la potencia a la que desea llegar:\n");
        scanf("%d", &potencia);
        while (i <= potencia)
    {
        printf("%d ^ %d = %d\n", numero, i, s);
        i++;
        s *= numero;
    }
        break;
    case 3:
        printf("Ingrese un numero:\n");
        scanf("%d", &numero);
        i = 2;
        while (i <= 9)
        {
            if ((numero % i == 0) && (numero != i))
            {
                esPrimo = 1;
            }
            i++;
        }
        if (esPrimo == 0)
        {
            printf("El numero %d es primo", numero);
        }
        else
        {
            printf("El numero %d no es primo", numero);
        }
        break;
    default:
        printf("Opcion no valida");
        break;
    case 4:
        printf("Ingrese un numero:\n");
        scanf("%d", &numero);
        i = 1;
        s = 1;
        printf("1+1");
        while ( contador <= (numero - 1))
        {
            m = i + s;
            printf("+%d", m);
            contador++;
            i = s;
            s = m;
        }
        break;
    case 5:
        printf("Ingrese un numero:\n");
        scanf("%d", &numero);
        while (numero > 0)
        {
            s = numero % 10;
            printf("%d ", s);
            numero /= 10;
            i += s;
        }
        printf("\nLa suma de los digitos es: %d", i);
        break;
    case 6:
        printf("Ingrese el numero\n");
        scanf("%d", &numero);
        factorial = numero;
        while (i < (numero - 1))
        {
            factorial *= numero; 
            i++;
        }

        printf("El factorial es: %d", factorial); 
    break;


    }

    return 0;
    }

