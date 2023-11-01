#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#ifdef _WIN32
#include <conio.h>
#else
#include <termios.h>
#include <unistd.h>

char getch() {
    char buf = 0;
    struct termios old = {0};
    fflush(stdout);
    if (tcgetattr(0, &old) < 0)
        perror("tcsetattr()");
    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;
    old.c_cc[VMIN] = 1;
    old.c_cc[VTIME] = 0;
    if (tcsetattr(0, TCSANOW, &old) < 0)
        perror("tcsetattr ICANON");
    if (read(0, &buf, 1) < 0)
        perror("read()");
    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;
    if (tcsetattr(0, TCSADRAIN, &old) < 0)
        perror("tcsetattr ~ICANON");
    return (buf);
}
#endif

struct Usuario
{
    char nombre[50];
    char correo[50];
    char contrasena[50];
};

bool validarCredenciales(char correo[], char contrasena[]) {

    char correo_admin[50] = "juandagarce@gmail.com";
    char contrasena_admin[50] = "654321";

    char correo_usuario[50] = "usuario@gmail.com";
    char contrasena_usuario[50] = "123456";

    if (strcmp(correo, correo_admin) == 0 && strcmp(contrasena, contrasena_admin) == 0) {
        return true;
    } else if (strcmp(correo, correo_usuario) == 0 && strcmp(contrasena, contrasena_usuario) == 0) {
        return true;
    } else {
        return false;
    }

}

void mostrarMenu() {
    printf("Bienvenido al sistema de votaciones:\n");
    printf("1. Ingresar.\n");
    printf("2. Salir.\n");
}

void ingresar() {
    char correo[50];
    char contrasena[50];

    printf("Ingrese su correo: ");
    scanf("%s", correo);

    printf("Ingrese su contraseña: ");

    int i = 0;
    while (i < 49) {
        char ch = getch();

        if (ch == '\n' || ch == '\r') {
            contrasena[i] = '\0';
            break;
        } else if (ch == 8) {
            if (i > 0) {
                i--;
                printf("\b \b");
            }
        } else {
            contrasena[i] = ch;
            i++;
            printf("*");
        }
    }

    if (validarCredenciales(correo, contrasena)) {
        printf("\nBienvenido.\n");
    } else {
        printf("\nCorreo o contraseña incorrectos.\n");
        ingresar(); // Reintenta el ingreso
    }
}

int main() {

    mostrarMenu();

    int opcion;
    printf("Ingrese una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            ingresar();
            break;
        case 2:
            printf("Gracias por usar el sistema de votaciones.\n");
            break;
        default:
            printf("Opción inválida.\n");
            return main();
            break;
    }

    return 0;
}