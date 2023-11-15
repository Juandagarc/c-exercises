//Presentado por: Juan David García Arce y Maximiliano Giraldo Ocampo

#include <stdio.h>
//Se incluye la libreria math.h para poder usar la funcion sqrt
#include <math.h>


//Se halla el rango de un vector con punteros
int rango (int *vector, int n) {

    int *menor = vector;
    int *mayor = vector;

    for (int i = 0; i < n; i++) {
        if (*menor > vector[i]) {
            menor = &vector[i];
        }

        if (*mayor < vector[i]) {
            mayor = &vector[i];
        }
    }

    return *mayor - *menor;
}

//Se halla la media con punteros
float media (int *vector, int n) {

    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += vector[i];
    }

    return (float) suma / n;
}

//Se halla la varianza con punteros
float varianza (int *vector, int n) {

    float media_vector = media(vector, n);
    float suma = 0;

    for (int i = 0; i < n; i++) {
        suma += (vector[i] - media_vector) * (vector[i] - media_vector);
    }

    return suma / n;
}

//Se halla la desviacion estandar
float desviacion_estandar (int *vector, int n) {

    return sqrt(varianza(vector, n));
}

int main () {

    int n;

    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    int vector[n];

    printf("Ingrese los elementos del vector: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
    }

    printf("El rango del vector es: %d\n", rango(vector, n));
    printf("La media del vector es: %f\n", media(vector, n));
    printf("La varianza del vector es: %f\n", varianza(vector, n));
    printf("La desviacion estandar del vector es: %f\n", desviacion_estandar(vector, n));

    return 0;
}