#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];

    printf("Ingrese una oración: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Elimina el carácter de nueva línea si está presente
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    char reversedSentence[100];
    char *wordStart = sentence;
    char *wordEnd = sentence;
    char *reversedPtr = reversedSentence;

    // Recorre la cadena
    while (*wordEnd) {
        wordEnd++;

        // Si se encuentra un espacio o el final de la cadena, procesa la palabra
        if (*wordEnd == ' ' || *wordEnd == '\0') {
            // Copia la palabra invertida en la cadena invertida
            char *start = wordStart;
            while (start < wordEnd) {
                *reversedPtr = *(wordEnd - 1);
                reversedPtr++;
                wordEnd--;
            }

            // Agrega un espacio si no es el final de la cadena
            if (*wordEnd == ' ') {
                *reversedPtr = ' ';
                reversedPtr++;
            }

            // Actualiza el puntero de inicio de la siguiente palabra
            wordStart = wordEnd ;
        }
    }

    // Agrega el carácter nulo al final de la cadena invertida
    *reversedPtr = '\0';

    // Imprime la oración invertida
    printf("Oración invertida: %s\n", reversedSentence);

    return 0;
}
