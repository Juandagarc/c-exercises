//Presentado por: Juan David García Arce

#include <stdio.h>
#include <string.h>

int main () {

    //Minusculas
    char alfabeto1[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    //Mayusculas
    char alfabeto2[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','Ñ','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    char palabra[100];

    printf("Ingrese la palabra a codificar: ");
    scanf("%s", palabra);

    printf("Ingrese el numero de letras a desplazar: ");
    int numero;
    scanf("%d", &numero);

    int i = 0, j = 0;

    if (numero > 0) {

    while (palabra[i] != '\0') {

        while (palabra[i] != alfabeto1[j] && palabra[i] != alfabeto2[j]) {
            j++;
        }

        if (palabra[i] == alfabeto1[j]) {
            palabra[i] = alfabeto1[(j + numero) % 26];
        } else if (palabra[i] == alfabeto2[j]) {
            palabra[i] = alfabeto2[(j + numero) % 26];
        }

        i++;
        j = 0;
    }
    } else {
        while (palabra[i] != '\0') {

        while (palabra[i] != alfabeto1[j] && palabra[i] != alfabeto2[j]) {
            j++;
        }

        if (palabra[i] == alfabeto1[j]) {
            palabra[i] = alfabeto1[(j + numero + 26) % 26];
        } else if (palabra[i] == alfabeto2[j]) {
            palabra[i] = alfabeto2[(j + numero + 26) % 26];
        }

        i++;
        j = 0;
    }
    }

    printf("La palabra codificada es: %s", palabra);
    return 0;
}