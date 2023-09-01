//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    int n, m, suma = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    if (n % 2 == 0)
    {
        suma = n;
        printf("%d", n);
    }

    while (n < m)
    {
        n++;
        if (n % 2 == 0)
        {
            suma = suma + n;
            printf("+%d", n);
        }
    }
    printf("=%d\n", suma);

    return 0;
}