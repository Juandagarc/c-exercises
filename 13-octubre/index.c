//Presentado por: Juan David García Arce.

#include <stdio.h>
//para valor absoluto y raiz cuadrada
#include <math.h>

//LLenar vector de n elementos
void llenarVector(int vector[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
}

//Hallar media aritmetica
float mediaAritmetica(int vector[], int n) {
    int i, suma = 0;
    for (i = 0; i < n; i++) {
        suma += vector[i];
    }
    return (float) suma / n;
}

//Hallar desviacion respecto a la media
float desviacionRespectoMedia(int vector[], int n, float media) {
    int i;
    float desviacion;
    float desviacionTotal = 0;
    for (i = 0; i < n; i++) {
        desviacion = vector[i] - media;
        desviacionTotal += fabs(desviacion);
    }
    return (float) desviacionTotal / n;
}

//Hallar desviacion tipica
float desviacionTipica(int vector[], int n, float media) {
    int i;
    float desviacion;
    float desviacionTotal = 0;
    for (i = 0; i < n; i++) {
        desviacion = vector[i] - media;
        desviacionTotal += desviacion * desviacion;
    }
    return (float) sqrt(desviacionTotal / n);
}


int main () {

    int n;
    printf("Ingrese el numero de elementos del vector: ");
    scanf("%d", &n);

    int vector[n];

    int opcion;
    do {
        printf("1. Llenar vector\n");
        printf("2. Media aritmetica\n");
        printf("3. Desviacion respecto a la media\n");
        printf("4. Desviacion tipica\n");
        printf("5. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                llenarVector(vector, n);
                break;
            case 2:
                printf("La media aritmetica es: %.2f\n", mediaAritmetica(vector, n));
                break;
            case 3:
                printf("La desviacion respecto a la media es: %.2f\n", desviacionRespectoMedia(vector, n, mediaAritmetica(vector, n)));
                break;
            case 4:
                printf("La desviacion tipica es: %.2f\n", desviacionTipica(vector, n, mediaAritmetica(vector, n)));
                break;
            case 5:
                printf("Adios\n");
                break;
            default:
                printf("Opcion invalida\n");
                break;
        }
    } while (opcion != 5);
    return 0;
}
