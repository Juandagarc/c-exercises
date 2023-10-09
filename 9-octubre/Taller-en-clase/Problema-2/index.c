//Presentado por Juan David García Arce

#include <stdio.h>
#include <math.h>

// Declaración de funciones
double Potencia(double base, int exp) {
    double resultado = 1;
    for (int i = 0; i < exp; i++) {
        resultado *= base;
    }
    return resultado;
}

double Valor_Absoluto(double a) {
    return (a < 0) ? -a : a;
}

double Cuadrado(double x) {
    return x * x;
}

double Suma(double a, double b) {
    return a + b;
}

void Menu() {
    printf("1. Calcular Potencia\n");
    printf("2. Calcular Valor Absoluto\n");
    printf("3. Calcular Cuadrado\n");
    printf("4. Calcular Suma\n");
    printf("5. Salir\n");
}

int main() {
    int opcion;
    
    do {
        Menu();
        printf("Elija una opción: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                double base;
                int exp;
                printf("Ingrese la base: ");
                scanf("%lf", &base);
                printf("Ingrese el exponente: ");
                scanf("%d", &exp);
                printf("Resultado: %lf\n", Potencia(base, exp));
                break;
                
            case 2:
                double valor;
                printf("Ingrese un número: ");
                scanf("%lf", &valor);
                printf("Valor absoluto: %lf\n", Valor_Absoluto(valor));
                break;
                
            case 3:
                double numero;
                printf("Ingrese un número: ");
                scanf("%lf", &numero);
                printf("Cuadrado: %lf\n", Cuadrado(numero));
                break;
                
            case 4:
                double num1, num2;
                printf("Ingrese el primer número: ");
                scanf("%lf", &num1);
                printf("Ingrese el segundo número: ");
                scanf("%lf", &num2);
                printf("Suma: %lf\n", Suma(num1, num2));
                break;
                
            case 5:
                printf("Saliendo del programa. ¡Hasta luego!\n");
                break;
                
            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }
    } while (opcion != 5);
    
    return 0;
}
