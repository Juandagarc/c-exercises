//Presentado por: Juan David García Arce

#include <stdio.h>
#include <string.h>

//Se define el color gris
#define GRIS "\x1b[30m"
//Se define el color azul
#define AZUL "\x1b[34m"
//Se define blanco
#define BLANCO "\x1b[37m"
//Reset
#define RESET "\x1b[0m"

struct docente {
        int telefono;
        int edad;
    };

struct listaDocentes {
    char nombre[40];
    struct docente docente;
};

void menu() {
    printf(BLANCO"1. Agregar un nuevo docente\n");
    printf("2. Edad promedio del grupo de docentes\n");
    printf("3. Nombre del docente mas joven del grupo\n");
    printf("4. Nombre del docente con mas edad\n");
    printf("5. Numero de docentes con edad mayor al promedio\n");
    printf("6. Numero de profesores con edad mayor a 40 años\n");
    printf("7. Eliminar docente\n");
    printf("8. Listar docentes\n");
    printf("9. Salir\n");
    printf("Ingrese una opción: "RESET);
}

//Agrega un nuevo docente al inventario
void agregar(struct listaDocentes docentes[]) {
    //Se agrega donde el nombre este vacio
    for (int i = 0; i < 10; i++) {
        if (strcmp(docentes[i].nombre, "") == 0) {
            printf(AZUL"Ingrese el nombre del docente: ");
            scanf("%s", docentes[i].nombre);
            printf("Ingrese el telefono del docente: ");
            scanf("%d", &docentes[i].docente.telefono);
            printf("Ingrese la edad del docente: ");
            scanf("%d"RESET, &docentes[i].docente.edad);
            break;
        }
    }
}

//Borrar un docente del inventario
void borrar(struct listaDocentes docentes[], int itemCount) {
    int num;
    printf(AZUL"Ingrese el número del docente que desea borrar: ");
    scanf("%d"RESET, &num);
    if (num > 0 && num <= itemCount) {
        strcpy(docentes[num - 1].nombre, "");
        docentes[num - 1].docente.telefono = 0;
        docentes[num - 1].docente.edad = 0;
    }
}

//Listar docentes solo con nombre y le pregunta al usuario si desea ver mas informacion de alguno en especifico y si no es asi se sale del menu, el numero de la lista solo se cuenta con los espacios en el vector que no esten vacios
void listar(struct listaDocentes docentes[], int itemCount) {
    int num;
    printf(AZUL"Lista de docentes:\n");
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(docentes[i].nombre, "") != 0) {
            printf("%d. %s\n", i + 1, docentes[i].nombre);
        }
    }
    printf("Ingrese el número del docente que desea ver: ");
    scanf("%d", &num);
    if (num > 0 && num <= itemCount) {
        printf("Nombre: %s\n", docentes[num - 1].nombre);
        printf("Telefono: %d\n", docentes[num - 1].docente.telefono);
        printf("Edad: %d\n"RESET, docentes[num - 1].docente.edad);
    }
}

//Edad promedio del grupo de docentes
void edadPromedio(struct listaDocentes docentes[], int itemCount) {
    int suma = 0;
    int contador = 0;
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(docentes[i].nombre, "") != 0) {
            suma += docentes[i].docente.edad;
            contador++;
        }
    }
    printf(AZUL"La edad promedio del grupo de docentes es: %d\n"RESET, suma / contador);
}

//Nombre del docente mas joven del grupo
void docenteMasJoven(struct listaDocentes docentes[], int itemCount) {
    int edad = 100;
    int posicion = 0;
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(docentes[i].nombre, "") != 0) {
            if (docentes[i].docente.edad < edad) {
                edad = docentes[i].docente.edad;
                posicion = i;
            }
        }
    }
    printf(AZUL"El docente mas joven del grupo es: %s\n"RESET, docentes[posicion].nombre);
}

//Nombre del docente con mas edad
void docenteMasEdad(struct listaDocentes docentes[], int itemCount) {
    int edad = 0;
    int posicion = 0;
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(docentes[i].nombre, "") != 0) {
            if (docentes[i].docente.edad > edad) {
                edad = docentes[i].docente.edad;
                posicion = i;
            }
        }
    }
    printf(AZUL"El docente con mas edad del grupo es: %s\n"RESET, docentes[posicion].nombre);
}

//Numero de docentes con edad mayor al promedio
void docentesMayorPromedio(struct listaDocentes docentes[], int itemCount) {
    int suma = 0;
    int contador = 0;
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(docentes[i].nombre, "") != 0) {
            suma += docentes[i].docente.edad;
            contador++;
        }
    }
    int promedio = suma / contador;
    contador = 0;
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(docentes[i].nombre, "") != 0) {
            if (docentes[i].docente.edad > promedio) {
                contador++;
            }
        }
    }
    printf(AZUL"El numero de docentes con edad mayor al promedio es: %d\n"RESET, contador);
}

//Numero de profesores con edad mayor a 40 años
void docentesMayorCuarenta(struct listaDocentes docentes[], int itemCount) {
    int contador = 0;
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(docentes[i].nombre, "") != 0) {
            if (docentes[i].docente.edad > 40) {
                contador++;
            }
        }
    }
    printf(AZUL"El numero de docentes con edad mayor a 40 años es: %d\n"RESET, contador);
}

//Eliminar docente
void eliminar(struct listaDocentes docentes[], int itemCount) {
    int num;
    //Se muestra la lista de docentes para que el usuario pueda ver el numero del docente que desea eliminar y se muestra gris
    printf(GRIS"Lista de docentes:\n"RESET);
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(docentes[i].nombre, "") != 0) {
            printf(GRIS"%d. %s\n"RESET, i + 1, docentes[i].nombre);
        }
    }
    printf(AZUL"Ingrese el número del docente que desea eliminar: ");
    scanf("%d"RESET, &num);
    if (num > 0 && num <= itemCount) {
        strcpy(docentes[num - 1].nombre, "");
        docentes[num - 1].docente.telefono = 0;
        docentes[num - 1].docente.edad = 0;
    }
}

//Ordenar la lista para que los espacios vacios queden al final
void ordenar(struct listaDocentes docentes[], int itemCount) {
    struct listaDocentes temp;
    for (int i = 0; i < itemCount; i++) {
        for (int j = 0; j < itemCount - 1; j++) {
            if (strcmp(docentes[j].nombre, "") == 0) {
                temp = docentes[j];
                docentes[j] = docentes[j + 1];
                docentes[j + 1] = temp;
            }
        }
    }
}

//Funcion principal
int main () {

    //Se definen ya 5 docentes por defecto y el programa permitira añadir maximo 10
    struct listaDocentes docentes[10] = {
        {"Juan", {123456, 30}},
        {"Pedro", {654321, 40}},
        {"Maria", {987654, 50}},
        {"Luis", {456789, 60}},
        {"Ana", {321654, 70}}
    };

    int itemCount = 5;
    int opcion = 0;

    while (opcion != 9) {
        menu();
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                if (itemCount < 10) {
                    agregar(docentes);
                    itemCount++;
                } else {
                    printf(AZUL"No se pueden agregar mas docentes.\n"RESET);
                }
                break;
            case 2:
                edadPromedio(docentes, itemCount);
                break;
            case 3:
                docenteMasJoven(docentes, itemCount);
                break;
            case 4:
                docenteMasEdad(docentes, itemCount);
                break;
            case 5:
                docentesMayorPromedio(docentes, itemCount);
                break;
            case 6:
                docentesMayorCuarenta(docentes, itemCount);
                break;
            case 7:
                eliminar(docentes, itemCount);
                ordenar(docentes, itemCount);
                itemCount--;
                break;
            case 8:
                listar(docentes, itemCount);
                break;
            case 9:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida.\n");
                break;
        }
    }

    return 0;
}