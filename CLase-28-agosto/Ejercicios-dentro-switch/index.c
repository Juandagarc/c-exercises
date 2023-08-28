//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    int opcion, n = 0, m;

    printf("Ingrese el numero del problema:");
    //Switch con 10 casos

    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        //Presentado por Juan David García Arce

        

        while (n < 100)
        {
            n++;
            printf("%d\n", n);
        
        }

        break;
    case 2:
        while (n > 0)
        {
            printf("%d\n", n);
            n--;
        }
    
        break;
    case 3:
        scanf("%d", &n);
        scanf("%d", &m);

        while (n < m)
        {
            n++;
            printf("%d\n", n);
        }

        break;
    case 4:
        scanf("%d", &n);
    scanf("%d", &m);

    while (n < m)
        {
            n++;
            if (n % 2 != 0)
            {
                printf("%d\n", n);
            }
        }

        break;
    }
    return 0;
}