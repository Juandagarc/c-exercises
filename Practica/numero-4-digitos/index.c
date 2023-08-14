//Presentado por: Juan David García Arce

#include <stdio.h>

int main ()
{
    int numero;
    printf("Ingrese por favor un numero de cuatro digitos");
    scanf("%d", &numero);

    if ( (numero / 1000) > 1 )
    {
        if ( (numero / 1000) < 10 )
        {
            printf("\nEl numero %d es de 4 digitos", numero);
        }
        else
        {
            printf("\nEl numero %d no es de 4 digitos", numero);
        }
    }
    else
    {
        printf("\nEl numero %d no es de 4 digitos", numero);
    }
    //se separan los digitos por unidades decenas, centenas y unidades de mil
    //Se hace con el primer numero

    if ( ( numero % 10 ) >  ( (numero % 100) / 10 ) )
    {
        if ( ( numero % 10 ) > ( ( numero % 1000 ) / 100 ) )
        {
            if ( ( numero % 10 ) > ( numero / 1000 ) )
            {
                printf("\nEl numero %d es mayor que %d, %d y %d", ( numero % 10 ), ( (numero % 100) / 10 ), ( ( numero % 1000 ) / 100 ), ( numero / 1000 ) );
            }
        }
    } else
    //Se hace con los otros dos numeros
    if ( ( (numero % 100) / 10 ) > ( ( numero % 1000 ) / 100 ) )
    {
        if ( ( (numero % 100) / 10 ) > ( numero % 10 ) )
        {
            if ( ( (numero % 100) / 10 ) > ( numero / 1000 ) )
            {
                printf("\nEl numero %d es mayor que %d, %d y %d", ( (numero % 100) / 10 ), ( ( numero % 1000 ) / 100 ), ( numero % 10 ), ( numero / 1000 ) );
            }
        }
    } else
    //Se hace con el tercer
    if ( ( ( numero % 1000 ) / 100 ) > ( (numero % 10) ) )
    {
        if ( ( ( numero % 1000 ) / 100 ) > ( (numero % 100) / 10 ) )
        {
            if ( ( ( numero % 1000 ) / 100 ) > ( numero / 1000 ) )
            {
                printf("\nEl numero %d es mayor que %d, %d y %d", ( ( numero % 1000 ) / 100 ), ( numero % 10 ), ( (numero % 100) / 10 ), ( numero / 1000 ) );
            }
        }
    } else
    //Se hace con el ultimo numero
    if ( ( numero / 1000 ) > ( (numero % 10) ) )
    {
        if ( ( numero / 1000 ) > ( (numero % 100) / 10 ) )
        {
            if ( ( numero / 1000 ) > ( ( numero % 1000 ) / 100 ) )
            {
                printf("\nEl numero %d es mayor que %d, %d y %d", ( numero / 1000 ), ( numero % 10 ), ( (numero % 100) / 10 ), ( ( numero % 1000 ) / 100 ) );
            }
        }
    }
    //Se hace lo mismo para el menor
    if ( ( numero % 10 ) <  ( (numero % 100) / 10 ) )
    {
        if ( ( numero % 10 ) < ( ( numero % 1000 ) / 100 ) )
        {
            if ( ( numero % 10 ) < ( numero / 1000 ) )
            {
                printf("\nEl numero %d es menor que %d, %d y %d", ( numero % 10 ), ( (numero % 100) / 10 ), ( ( numero % 1000 ) / 100 ), ( numero / 1000 ) );
            }
        }
    } else
    //Se hace con los otros dos numeros
    if ( ( (numero % 100) / 10 ) < ( ( numero % 1000 ) / 100 ) )
    {
        if ( ( (numero % 100) / 10 ) < ( numero % 10 ) )
        {
            if ( ( (numero % 100) / 10 ) < ( numero / 1000 ) )
            {
                printf("\nEl numero %d es menor que %d, %d y %d", ( (numero % 100) / 10 ), ( ( numero % 1000 ) / 100 ), ( numero % 10 ), ( numero / 1000 ) );
            }
        }
    } else
    //Se hace con el tercer
    if ( ( ( numero % 1000 ) / 100 ) < ( (numero % 10) ) )
    {
        if ( ( ( numero % 1000 ) / 100 ) < ( (numero % 100) / 10 ) )
        {
            if ( ( ( numero % 1000 ) / 100 ) < ( numero / 1000 ) )
            {
                printf("\nEl numero %d es menor que %d, %d y %d", ( ( numero % 1000 ) / 100 ), ( numero % 10 ), ( (numero % 100) / 10 ), ( numero / 1000 ) );
            }
        }
    } else
    //Se hace con el ultimo numero
    if ( ( numero / 1000 ) < ( (numero % 10) ) )
    {
        if ( ( numero / 1000 ) < ( (numero % 100) / 10 ) )
        {
            if ( ( numero / 1000 ) < ( ( numero % 1000 ) / 100 ) )
            {
                printf("\nEl numero %d es menor que %d, %d y %d", ( numero / 1000 ), ( numero % 10 ), ( (numero % 100) / 10 ), ( ( numero % 1000 ) / 100 ) );
            }
        }
    }
    //Ahora se suma el mayor y el menor
    printf("\nLa suma del mayor y el menor es: %d", ( ( numero / 1000 ) + ( numero % 10 ) ) );

    return 0;
}

