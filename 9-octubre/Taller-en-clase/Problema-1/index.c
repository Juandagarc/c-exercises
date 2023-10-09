//Presentado por Juan David García Arce

//Taller en clase
#include <stdio.h>

void LlenarArreglo ( int arreglo[]) {
    //pide los numeros hasta que ingrese un numero negativo
    int i = 0;
    while ( arreglo[i-1] >= 0 ) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        i++;
    }
}

//Se muestra el arreglo hasta que se encuentre un numero negativo
void MostrarArreglo ( int arreglo[] ) {
    int i = 0;
    while ( arreglo[i] >= 0 ) {
        printf("%d\t", arreglo[i]);
        i++;
    }
    printf("\n");
}

//Se halla el promedio del arreglo hasta que se encuentre un numero negativo
float PromedioArreglo ( int arreglo[] ) {
    int i = 0, suma = 0;
    while ( arreglo[i] >= 0 ) {
        suma = suma + arreglo[i];
        i++;
    }
    return (float)suma / i;
}

//Se halla el numero menor del arreglo hasta que se encuentre un numero negativo
int MenorArreglo ( int arreglo[] ) {
    int i = 0, menor = arreglo[0];
    while ( arreglo[i] >= 0 ) {
        if ( arreglo[i] < menor ) {
            menor = arreglo[i];
        }
        i++;
    }
    return menor;
}

//Funcion para determinar si un numero es primo
int EsPrimo ( int numero ) {
    int i, contador = 0;
    for ( i = 1; i <= numero; i++ ) {
        if ( numero % i == 0 ) {
            contador++;
        }
    }
    if ( contador == 2 ) {
        return 1;
    } else {
        return 0;
    }
}

//Se hallan la cantidad de numeros primos del arreglo hasta que se encuentre un numero negativo
int CantidadPrimos ( int arreglo[] ) {
    int i = 0, contador = 0;
    while ( arreglo[i] >= 0 ) {
        if ( EsPrimo(arreglo[i]) ) {
            contador++;
        }
        i++;
    }
    return contador;
}

//Se halla el numero mayor del arreglo hasta que se encuentre un numero negativo
int MayorArreglo ( int arreglo[] ) {
    int i = 0, mayor = arreglo[0];
    while ( arreglo[i] >= 0 ) {
        if ( arreglo[i] > mayor ) {
            mayor = arreglo[i];
        }
        i++;
    }
    return mayor;
}

//Se halla la longitud del arreglo hasta que se encuentre un numero negativo
int LongitudArreglo ( int arreglo[] ) {
    int i = 0;
    while ( arreglo[i] >= 0 ) {
        i++;
    }
    return i;
}

//Se crea un arreglo con los pares del arreglo original hasta que supere LongitudArreglo
void ParesArreglo ( int arreglo[], int pares[] ) {
    int i = 0, j = 0;
    while ( arreglo[i] >= 0 ) {
        if ( arreglo[i] % 2 == 0 ) {
            pares[j] = arreglo[i];
            printf("%d\t", pares[j]);
            j++;
        }
        i++;
    }
    printf("\n");
}

//Se crea un arreglo con los impares del arreglo original hasta que supere LongitudArreglo
void ImparesArreglo ( int arreglo[], int impares[] ) {
    int i = 0, j = 0;
    while ( arreglo[i] >= 0 ) {
        if ( arreglo[i] % 2 != 0 ) {
            impares[j] = arreglo[i];
            printf("%d\t", impares[j]);
            j++;
        }
        i++;
    }
    printf("\n");
}



int main () {

    int cadena[100];
    LlenarArreglo(cadena);
    MostrarArreglo(cadena);
    printf("El promedio es: %.2f\n", PromedioArreglo(cadena));
    printf("El menor es: %d\n", MenorArreglo(cadena));
    printf("El mayor es: %d\n", MayorArreglo(cadena));
    printf("La cantidad de numeros primos es: %d\n", CantidadPrimos(cadena));
    printf("Los numeros pares son: ");
    int pares[100];
    ParesArreglo(cadena, pares);
    printf("Los numeros impares son: ");
    int impares[100];
    ImparesArreglo(cadena, impares);

    return 0;
}