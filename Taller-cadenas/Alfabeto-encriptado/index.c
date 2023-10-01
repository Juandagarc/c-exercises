//Presentado por: Juan David García Arce

#include <stdio.h>
#include <string.h>

int main () {

    //Minusculas
    char alfabeto1[13] = {'a','b','c','d','e','f','g','h','i','j','k','l','m'};
    char alfabeto2[13] = {'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    //Mayusculas
    char alfabeto3[13] = {'A','B','C','D','E','F','G','H','I','J','K','L','M'};
    char alfabeto4[13] = {'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    char palabra[100];
    char palabraEncriptada[100];
    int i = 0, j = 0;

    printf("Que desea hacer?\n");

    printf("1. Encriptar\n");
    printf("2. Desencriptar\n");

    int opcion;

    scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:

            printf("Ingrese la palabra a encriptar: ");
            scanf("%s", palabra);

            while (palabra[i] != '\0') {

                while (palabra[i] != alfabeto1[j] && palabra[i] != alfabeto2[j] && palabra[i] != alfabeto3[j] && palabra[i] != alfabeto4[j]) {
                    j++;
                }

                if (palabra[i] == alfabeto1[j]) {
                    palabraEncriptada[i] = alfabeto2[j];
                } else if (palabra[i] == alfabeto2[j]) {
                    palabraEncriptada[i] = alfabeto1[j];
                } else if (palabra[i] == alfabeto3[j]) {
                    palabraEncriptada[i] = alfabeto4[j];
                } else if (palabra[i] == alfabeto4[j]) {
                    palabraEncriptada[i] = alfabeto3[j];
                }

                i++;
                j = 0;
            }

            //Se añade el caracter nulo al final de la palabra
            palabraEncriptada[i] = '\0';

            printf("La palabra %s encriptada es: %s", palabra, palabraEncriptada);

            break;

        case 2:

            printf("Ingrese la palabra a desencriptar: ");
            scanf("%s", palabra);

            while (palabra[i] != '\0') {

                while (palabra[i] != alfabeto1[j] && palabra[i] != alfabeto2[j] && palabra[i] != alfabeto3[j] && palabra[i] != alfabeto4[j]) {
                    j++;
                }

                if (palabra[i] == alfabeto1[j]) {
                    palabraEncriptada[i] = alfabeto2[j];
                } else if (palabra[i] == alfabeto2[j]) {
                    palabraEncriptada[i] = alfabeto1[j];
                } else if (palabra[i] == alfabeto3[j]) {
                    palabraEncriptada[i] = alfabeto4[j];
                } else if (palabra[i] == alfabeto4[j]) {
                    palabraEncriptada[i] = alfabeto3[j];
                }

                i++;
                j = 0;
            }

            //Se añade el caracter nulo al final de la palabra
            palabraEncriptada[i] = '\0';

            printf("La palabra %s desencriptada es: %s", palabra, palabraEncriptada);

            break;

        default:
        printf("Opcion no valida");
        break;

    }

    return 0;
}