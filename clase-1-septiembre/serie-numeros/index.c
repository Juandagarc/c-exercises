//Presentado por Juan David García Arce

#include <stdio.h>

int main ()
{

    int numerob, contador = 0,i2 = 1, s = 2;

    printf("Ingrese un numero:\n");
    scanf("%d", &numerob);

    while (contador < numerob)
    {

        if( contador %2 == 0) {
            printf("%d ", i2);
            i2 += 1;
            } else
            {
            printf("%d ", s);
            s += 2;
            }

        contador++;
    }



    return 0;
}