//Presentado por Juan David Garcia Arce


#include <stdio.h>

int main () {

    int vector[5] = {2,3,5,7,11};

    for (int i = 0; i < 5; i++)
    {
        printf(" %d", vector[i]);
    }

    printf("\nLa longitud del vector es: %d\n", sizeof(vector)/sizeof(vector[0]));

    return 0;
}