//Presentado por Juan David García Arce y Maximiliano Giraldo Ocampo

#include <stdio.h>

//Funcion que recibe una cadena y retorna 1 si es palindromo y 0 si no lo es
int es_palindromo (char *cadena) {

    char *izquierda_a_derecha = cadena;
    char *derecha_a_izquierda = cadena;

    while (*derecha_a_izquierda != '\0') {

        //Se compara el primer caracter con el ultimo, el segundo con el penultimo y asi sucesivamente
        if (*izquierda_a_derecha != *derecha_a_izquierda) {
            return 0;
        }

        izquierda_a_derecha++;
        derecha_a_izquierda--;
    }
    
    return 1;
}

int main () {

    char cadena[100];

    printf("Ingrese la cadena: ");
    scanf("%s", cadena);

    if (es_palindromo(cadena)) {
        printf("La cadena es palindromo\n");
    } else {
        printf("La cadena no es palindromo\n");
    }

    return 0;
}