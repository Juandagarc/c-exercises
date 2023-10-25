#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct inv {
    char item[30];
    float cost;
    int dispo;
};

// Declaraciones de funciones
int menu(void);
void listar(struct inv[], int);
void borrar(struct inv[], int);
int busca_libre(struct inv[], int);
void inic_lista(struct inv[], int);
void intro(struct inv[], int);

int itemCount = 0; // Para llevar un registro del número de elementos en el inventario

int main(void) {
    const int MAX = 100; // Definimos MAX como una constante en main
    struct inv Jinfo_inv[MAX]; // Creamos el arreglo con la constante MAX

    inic_lista(Jinfo_inv, MAX); // Inicializar la lista de inventario

    int opcion;

    for (;;) {
        opcion = menu();
        switch (opcion) {
            case 1:
                intro(Jinfo_inv, MAX);
                break;
            case 2:
                borrar(Jinfo_inv, MAX);
                break;
            case 3:
                listar(Jinfo_inv, MAX);
                break;
            case 4:
                return 0;
        }
    }
    return 0;
}

// Definiciones de funciones
void inic_lista(struct inv arr[], int max) {
    // Inicializar la lista de inventario
    for (int i = 0; i < max; i++) {
        strcpy(arr[i].item, "");
        arr[i].cost = 0.0;
        arr[i].dispo = 0;
    }
}

int busca_libre(struct inv arr[], int max) {
    // Encontrar un espacio vacío en el inventario
    for (int i = 0; i < max; i++) {
        if (arr[i].dispo == 0) {
            return i;
        }
    }
    return -1; // No se encontró espacio libre
}

void intro(struct inv arr[], int max) {
    // Agregar un artículo al inventario
    int freeSlot = busca_libre(arr, max);
    if (freeSlot != -1) {
        printf("Ingrese el nombre del artículo: ");
        fgets(arr[freeSlot].item, sizeof(arr[freeSlot].item), stdin);
        arr[freeSlot].item[strcspn(arr[freeSlot].item, "\n")] = '\0'; // Eliminar el carácter de nueva línea
        printf("Ingrese el costo del artículo: ");
        scanf("%f", &arr[freeSlot].cost);
        arr[freeSlot].dispo = 1; // Marcar como disponible
        itemCount++;
    } else {
        printf("El inventario está lleno. No se pueden agregar más artículos.\n");
    }
}

void borrar(struct inv arr[], int max) {
    // Eliminar un artículo del inventario
    if (itemCount > 0) {
        printf("Lista de artículos disponibles para borrar:\n");
        for (int i = 0; i < max; i++) {
            if (arr[i].dispo == 1) {
                printf("%d. %s\n", i + 1, arr[i].item);
            }
        }
        printf("Seleccione el número del artículo que desea borrar: ");
        int selection;
        scanf("%d", &selection);
        if (selection > 0 && selection <= max) {
            if (arr[selection - 1].dispo == 1) {
                arr[selection - 1].dispo = 0;
                itemCount--;
                printf("El artículo se ha borrado con éxito.\n");
            } else {
                printf("Esa posición está vacía. Intente nuevamente.\n");
            }
        } else {
            printf("Selección no válida.\n");
        }
    } else {
        printf("El inventario está vacío. No se pueden borrar artículos.\n");
    }
}

void listar(struct inv arr[], int max) {
    // Listar los artículos en el inventario
    if (itemCount > 0) {
        printf("Inventario:\n");
        for (int i = 0; i < max; i++) {
            if (arr[i].dispo == 1) {
                printf("Nombre: %s, Costo: %.2f\n", arr[i].item, arr[i].cost);
            }
        }
    } else {
        printf("El inventario está vacío.\n");
    }
}

int menu(void) {
    char s[80];
    int c;

    printf("1. Introducir un artículo\n");
    printf("2. Borrar un artículo\n");
    printf("3. Listar el inventario\n");
    printf("4. Salir\n\n");
    printf("Introduzca su opción: ");

    fgets(s, sizeof(s), stdin);
    c = atoi(s);

    while (c < 1 || c > 4) {
        printf("Opción no válida. Introduzca su opción nuevamente: ");
        fgets(s, sizeof(s), stdin);
        c = atoi(s);
    }

    return c;
}