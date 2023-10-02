//Presentado por Juan david García Arce
#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%99[^\n]", word);
    getchar();
    
    char password[100];
    printf("Enter a password: ");
    scanf("%99[^\n]", password);
    
    char result[1000] = ""; // Inicializamos result como una cadena vacía
    int i, j;

    // Repetir password cinco veces y almacenar en result
    for (j = 0; j < 5; j++) {
        strcat(result, password);
    }

    printf("Result: %s\n", result);

    // Sumatoria
    int sumatory = 0;

    for (i = 0; i < strlen(word); i++) {
        printf("%c: %d", word[i], word[i]);
        printf("\t%c: %d", result[i], result[i]);
        // Sumar la posición i de word y la posición i de result
        sumatory = ((int)word[i] + (int)(result)[i]) ;
        printf("\tSumatory: %d\n", sumatory);
    }

    return 0;
}
