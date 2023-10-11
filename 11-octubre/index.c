//Presentado por:Juan David García Arce

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
//se llena con random
void llenarMatriz(int matriz[3][3]){
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            matriz[i][j]=rand()%10 + 1;
        }
    }
}
void mostrarMatriz(int matriz[3][3]){
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
}
int esPrimo(int numero){
    int i,contador=0;
    for (i=1;i<=numero;i++){
        if (numero%i==0){
            contador++;
        }
    }
    if (contador==2){
        return 1;
    }else{
        return 0;
    }
}
int sumaDiagonalPrimos(int matriz[3][3]){
    int i,j,suma=0;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (i==j){
                if (esPrimo(matriz[i][j])==1){
                    suma+=matriz[i][j];
                }
            }
        }
    }
    return suma;
}
void llenarVectoresParesImpares(int matriz[3][3], int pares[], int impares[]){
    //Busca pares e impares
    int i,j,k=0,l=0;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (matriz[i][j]%2==0){
                pares[k]=matriz[i][j];
                k++;
            }else{
                impares[l]=matriz[i][j];
                l++;
            }
        }
    }
}
void mostrarVectores(int pares[], int impares[]){
    int i;
    //Se muestra hhasta encontrar numeros menores a 10
    printf("Pares: ");
    for (i=0;i<9;i++){
        if (pares[i]<10 && pares[i]>0){
            printf("%d\t",pares[i]);
        }
    }

    printf("\nImpares: ");
    for (i=0;i<9;i++){
        if (impares[i]<10 && impares[i]>0){
            printf("%d\t",impares[i]);
        }
    }
    printf("\n");
}
void elevarAlCuadrado(int matriz[3][3]){
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            matriz[i][j]=matriz[i][j]*matriz[i][j];
        }
    }
}
void sumarFilasPares(int matriz[3][3]){
    int i,j,suma=0;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (matriz[i][j]%2==0){
                suma+=matriz[i][j];
            }
        }
        printf("La suma de la fila %d es: %d\n",i+1,suma);
        suma=0;
    }
}
void ordenarDiagonalSecundaria(int matriz[3][3]){
    int i,j,k,aux;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (i+j==2){
                for (k=0;k<3;k++){
                    if (matriz[i][j]<matriz[k][k]){
                        aux=matriz[i][j];
                        matriz[i][j]=matriz[k][k];
                        matriz[k][k]=aux;
                    }
                }
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int matriz[3][3];
    int pares[9];
    int impares[9];
    int opcion;

    do {
        printf("\nMenu\n");
        printf("1. Llenar una matriz\n");
        printf("2. Mostrar matriz\n");
        printf("3. Suma de primos en la diagonal principal\n");
        printf("4. Colocar en dos vectores los pares y los impares\n");
        printf("5. Elevar al cuadrado la matriz\n");
        printf("6. Sumar de las filas los números pares\n");
        printf("7. Ordenar de menor a mayor la diagonal secundaria\n");
        printf("8. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                llenarMatriz(matriz);
                break;
            case 2:
                mostrarMatriz(matriz);
                break;
            case 3:
                printf("La suma de primos en la diagonal principal es: %d\n", sumaDiagonalPrimos(matriz));
                break;
            case 4:
                llenarVectoresParesImpares(matriz, pares, impares);
                mostrarVectores(pares, impares);
                break;
            case 5:
                elevarAlCuadrado(matriz);
                break;
            case 6:
                sumarFilasPares(matriz);
                break;
            case 7:
                ordenarDiagonalSecundaria(matriz);
                break;
            case 8:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
                break;
        }
    } while (opcion != 8);

    return 0;
}
