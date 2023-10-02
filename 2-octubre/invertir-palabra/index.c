#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    char reversedSentence[100];

    printf("Ingrese una oración: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Elimina el carácter de nueva línea si está presente
    size_t len = strlen(sentence);

    // Agrega un espacio al final del string
    sentence[len - 1 ] = ' ';  // Agrega el espacio
    sentence[len] = '\0';  // Añade el carácter nulo para indicar el final del string


    int wordStart = 0;
    int wordEnd = 0;
    int reversedIndex = 0;

    // Recorre la cadena
    while (sentence[wordEnd] || (wordEnd == 0 && len > 0)) {
        // Si se encuentra un espacio o el final de la cadena, procesa la palabra
        if (sentence[wordEnd] == ' ' || sentence[wordEnd] == '\0') {
            // Copia la palabra invertida en la cadena invertida
            for (int i = wordEnd - 1; i >= wordStart; i--) {
                reversedSentence[reversedIndex++] = sentence[i];
            }

            // Verifica si es la última palabra antes de agregar un espacio
            if (sentence[wordEnd] == ' ' && sentence[wordEnd + 1] != '\0') {
                reversedSentence[reversedIndex++] = ' ';
            }

            // Actualiza el índice de inicio de la siguiente palabra
            wordStart = wordEnd + 1;
        }

        // Incrementa wordEnd solo si no hemos llegado al final de la cadena
        wordEnd++;
    }

    // Agrega el carácter nulo al final de la cadena invertida
    reversedSentence[reversedIndex] = '\0';

    // Imprime la oración invertida, sin salto de línea para la última palabra
    printf("Oración invertida: %s", reversedSentence);

    return 0;
}
