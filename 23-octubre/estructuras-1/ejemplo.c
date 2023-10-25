#include <stdio.h>

// Definición de la estructura
struct Estudiante {
    char nombre[50]; // Suponemos un nombre con un máximo de 50 caracteres
    int edad;
};

// Función para ingresar el nombre de un estudiante
void ingresarNombre(struct Estudiante *estudiantes, int n, int indice) {
    if (indice < n) {
        printf("Ingrese el nombre del estudiante %d: ", indice + 1);
        scanf("%s", estudiantes[indice].nombre);
        ingresarNombre(estudiantes, n, indice + 1);
    }
}

int main() {
    int n; // Cantidad de estudiantes
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &n);

    struct Estudiante estudiantes[n]; // Declaración de un arreglo de estructuras de tamaño "n"

    // Llamamos a la función para ingresar los nombres
    ingresarNombre(estudiantes, n, 0);

    // Acceder a los nombres de los estudiantes y mostrarlos
    for (int i = 0; i < n; i++) {
        printf("Nombre del estudiante %d: %s\n", i + 1, estudiantes[i].nombre);
    }

    return 0;
}

