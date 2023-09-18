#include <stdio.h>

int main() {
    float a, b, c;
    int opcion;
    int datos_leidos = 0;
    int operacion_realizada = 0;

    while (1) {
        printf("0. Terminar\n");
        printf("Menú de operaciones\n");
        printf("1. Leer datos\n");
        printf("2. Sumar datos\n");
        printf("3. Restar datos\n");
        printf("4. Multiplicar datos\n");
        printf("5. Dividir datos\n");
        printf("6. Mostrar Resultado\n");

        scanf("%d", &opcion);

        switch (opcion) {
            case 0:
                return 0;
            case 1:
                printf("Ingrese el primer número: ");
                scanf("%f", &a);
                printf("Ingrese el segundo número: ");
                scanf("%f", &b);
                datos_leidos = 1;
                operacion_realizada = 0;
                break;
            case 2:
                if (datos_leidos) {
                    c = a + b;
                    operacion_realizada = 1;
                } else {
                    printf("Primero ingresa los datos.\n");
                }
                break;
            case 3:
                if (datos_leidos) {
                    c = a - b;
                    operacion_realizada = 1;
                } else {
                    printf("Primero ingresa los datos.\n");
                }
                break;
            case 4:
                if (datos_leidos) {
                    c = a * b;
                    operacion_realizada = 1;
                } else {
                    printf("Primero ingresa los datos.\n");
                }
                break;
            case 5:
                if (datos_leidos) {
                    if (b != 0) {
                        c = a / b;
                        operacion_realizada = 1;
                    } else {
                        printf("No se puede dividir por cero.\n");
                    }
                } else {
                    printf("Primero ingresa los datos.\n");
                }
                break;
            case 6:
                if (operacion_realizada) {
                    printf("El resultado es: %.2f\n", c);
                } else {
                    printf("Primero realiza una operación.\n");
                }
                break;
            default:
                printf("Opción no válida. Por favor, elija una opción válida.\n");
        }
    }
}
