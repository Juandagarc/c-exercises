#include <stdio.h>
#include <string.h>
//se define el color gris
#define GRIS "\x1b[30m"
//reset
#define RESET "\x1b[0m"

struct existencias {
    int discos;
    int cintas;
};

struct proveedor {
    char nombre_proveedor[40];
    char telefono[10];
    char dir[40];
};

struct inventario {
    char titulo[30];
    char autor[40];
    struct existencias existencias;
    struct proveedor proveedor;
};

void menu() {
    printf("1. Agregar un nuevo CD\n");
    printf("2. Borrar un CD\n");
    printf("3. Listar CDs\n");
    printf("4. Salir\n");
    printf("Ingrese una opción: ");
}

//Agrega un nuevo cd al inventario sin punteros
void agregar(struct inventario I[], int itemCount) {
    printf("Ingrese el título del CD: ");
    scanf("%s", I[itemCount].titulo);
    printf("Ingrese el autor del CD: ");
    scanf("%s", I[itemCount].autor);
    printf("Ingrese el número de discos disponibles: ");
    scanf("%d", &I[itemCount].existencias.discos);
    printf("Ingrese el número de cintas disponibles: ");
    scanf("%d", &I[itemCount].existencias.cintas);
    printf("Ingrese el nombre del proveedor: ");
    scanf("%s", I[itemCount].proveedor.nombre_proveedor);
    printf("Ingrese el teléfono del proveedor: ");
    scanf("%s", I[itemCount].proveedor.telefono);
    printf("Ingrese la dirección del proveedor: ");
    scanf("%s", I[itemCount].proveedor.dir);
}

//Borrar un cd del inventario
void borrar(struct inventario I[], int itemCount) {
    int num;
    printf("Ingrese el número del CD que desea borrar: ");
    scanf("%d", &num);
    if (num > 0 && num <= itemCount) {
        strcpy(I[num - 1].titulo, "");
        strcpy(I[num - 1].autor, "");
        I[num - 1].existencias.discos = 0;
        I[num - 1].existencias.cintas = 0;
        strcpy(I[num - 1].proveedor.nombre_proveedor, "");
        strcpy(I[num - 1].proveedor.telefono, "");
        strcpy(I[num - 1].proveedor.dir, "");
    } else {
        printf("Selección no válida.\n");
    }

}

void listar(struct inventario I[]) {
    int i = 0;
    while (strcmp(I[i].titulo, "") != 0) {
        //autor
        printf("%d. %s\n", (i+1), I[i].titulo);
        i++;
    }
}

void listar1(struct inventario I[]) {
    int i = 0, opcion1;
    while (strcmp(I[i].titulo, "") != 0) {
        //autor
        printf("%d. %s\n", (i+1), I[i].titulo);
        i++;
    }
    printf("\n Cual desea ver?\n");
    scanf("%d", &opcion1);
    printf(GRIS"__________________________________________________________\n"RESET);
    printf("Título: %s\n", I[opcion1 - 1].titulo);
    printf("Autor: %s\n", I[opcion1 - 1].autor);
    printf("Discos disponibles: %d\n", I[opcion1 - 1].existencias.discos);
    printf("Cintas disponibles: %d\n", I[opcion1 - 1].existencias.cintas);
    printf("Nombre del proveedor: %s\n", I[opcion1 - 1].proveedor.nombre_proveedor);
    printf("Teléfono del proveedor: %s\n", I[opcion1 - 1].proveedor.telefono);
    printf("Dirección del proveedor: %s\n", I[opcion1 - 1].proveedor.dir);
    printf(GRIS"__________________________________________________________\n"RESET);

}


int main() {
    struct inventario I[100];
    int opcion, itemCount = 0;

    while (1) {
        menu();
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                agregar(I, itemCount);
                itemCount++;
                break;
            case 2:
                listar(I);
                borrar(I, 0);
                break;
            case 3:
                listar1(I);
                break;
            case 4:
                return 0;
            default:
                printf("Opción no válida.\n");
        }

    }

    return 0;
}
