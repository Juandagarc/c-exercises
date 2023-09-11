//Presentado por Juan David García Arce

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int opcion;
    int n, i, j, suma = 0;
    int numero;
    int A = 1, B, C, D;
    int a, b, md, min, k;
    printf("Ingrese el ejercicio que desea ejecutar:\n");
    scanf("%d", &opcion);
    int c, s, t, v;
    int d = 0, e = 0;
    int primo = 2, booleanoPrimo = 0 , l = 2;

    switch(opcion){
        case 1:
            //Sumar los numeros del 1 al n con for

            printf("Ingrese un numero: ");
            scanf("%i", &n);

            for (i = 1; i <= n; i++) {
                suma += i;
            }

            printf("La suma de los numeros del 1 al %d es: %d", n, suma);
            break;
        case 2:

            printf("Ingrese un número: ");
            scanf("%d", &n);

            for (int i = 0; i <= 10; i++) {
                int resultado = n * i;
                printf("%d * %d = %d\n", n, i, resultado);
            }

            printf("Terminado...\n");
            break;
        case 3:
            for (i = 1; i <= 100; i++) {
                printf("%d-", i);
            }

            for (i = 100; i >= 1; i--) {
                printf("%d-", i);
            }

            for (i = 7; i <= 77; i += 7) {
                printf("%d-", i);
            }

            for (i = 2; i <= 20; i += 3) {
                printf("%d-", i);
            }
            system("PAUSE");
            break;
        case 4:
            

            for (numero = 2; numero <= 6; numero = numero + 2) {
                suma = suma + numero;
            }

            printf("La suma de los números pares de 2 hasta 6 es: %d\n", suma);

            system("PAUSE");
            break;
        case 5:
            printf("Ingresar n: ");
            scanf("%d", &n);

            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 6:
            printf("Ingrese el número de columnas: ");
            scanf("%d", &D);

            for (int A = 1; A <= D; A++) {
                for (int B = A; B <= D; B++) {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 7:
            printf("Ingrese el primer número (a): ");
            scanf("%d", &a);

            printf("Ingrese el segundo número (b): ");
            scanf("%d", &b);

            if (a < b) {
                min = a;
            } else {
                min = b;
            }

            k = 1;
            for (; k <= min;) {
                if (a % k == 0 && b % k == 0) {
                    md = k;
                }
                k = k + 1;
            }

            printf("El máximo común divisor (md) es: %d\n", md);
            break;
        case 8:
            printf("Ingrese el número de columnas: ");
            scanf("%d", &v);

            for (c = v; c >= 1; c--) {
                for (t = c; t >= 1; t--) {
                    printf(" ");
                }
                for (s = v; s >= c; s--) {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 9:
            c = 0;
            printf("Ingrese un número en base 10: ");
            scanf("%d", &b);

            for (; b >= 10;) {
                int c = 0;
                for (; b >= 10;) {
                    b = b - 10;
                }
                int e = e + 1;
                c++;
                d = d + b * pow(2, e);
                b = c;
            }

            d = d + c * pow(2, e);

            printf("%d\n", d);
            break;
        case 10:
            i = 1, j = 1, n = 0, k = 1;
            j = 0;
            printf("Ingrese el numero de columnas:\n");
            scanf("%d", &i);
            printf("\n");

            for (; j < i; j++, n++) {
                for (k = 0; k < n; k++) {
                    printf(" ");
                }

                for (k = 0; k <= i - j; k++) {
                    printf("%d", k + 1);
                }

                printf("\n");
            }
        break;    
    }

    return 0;
}