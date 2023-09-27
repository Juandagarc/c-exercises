//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    //Se define EL vector u con 0,1,2,3,4,5,6,7,8,9
    int u[10] = {0,1,2,3,4,5,6,7,8,9};
    //Se define el vector z con 1,2,4,5,7,8,9
    int z[7] = {1,2,4,5,7,8,9};
    //Se define el vector x con 1,2,3,4,5,6
    int x[6] = {1,2,3,4,5,6};
    //Vector union
    int unionn[10], iUnion = 0;
    int interseccion[4], iInterseccion = 0;
    int complemento[6], iComplemento = 0;

    int temp;


    int i = 0, j = 0, booleanoUnion = 1, booleanoInterseccion = 1, booleanoComplemento = 1;

    int opcion;

    printf("Que operacion desea realizar?\n");
    printf("1. Union.\n");
    printf("2. Interseccion.\n");
    printf("3. Complemento.\n");
    printf("4. Diferencia.\n");
    printf("5. Diferencia simetrica.\n");

    scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
            printf("La union es:\n");
            for (i = 0; i < 6; i++)
            {
                for( j = 0; j< 7; j++)
                {
                    if (x[i] == z[j])
                    {
                        booleanoUnion = 0;
                    }
                }
                if (booleanoUnion == 1)
                {
                    unionn[iUnion] = x[i];
                    iUnion++;
                }
                booleanoUnion = 1;
            }
            for (i = 0; i < 7; i++)
            {
                unionn[iUnion] = z[i];
                iUnion++;
            }
            for (i = 0; i < 9; i++)
            {
                printf("%d ", unionn[i]);
            }
            printf("\nEL vector ordenado seria\n");
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 9; j++)
                {
                    if (unionn[j] > unionn[j + 1])
                    {
                        temp = unionn[j];
                        unionn[j] = unionn[j + 1];
                        unionn[j + 1] = temp;
                    }
                }
            }
            for (i = 0; i < 9; i++)
            {
                printf("%d ", unionn[i]);
            }
            
            break;
            
        case 2:
            printf("La interseccion es:\n");
            for ( i = 0; i < 6; i++) {
                booleanoInterseccion = 0; // Reinicializa la bandera en cada iteración de i.
                for ( j = 0; j < 7; j++) {
                    if (x[i] == z[j]) {
                        booleanoInterseccion = 1;
                        break; // Si encuentra una coincidencia, no necesita verificar más en este bucle.
                    }
                }
                if (booleanoInterseccion == 1) {
                    interseccion[iInterseccion] = x[i];
                    iInterseccion++;
                }
            }

            for ( i = 0; i < iInterseccion; i++) {
                printf("%d ", interseccion[i]);
            }

            printf("\nEl vector ordenado sería:\n");
            for ( i = 0; i < iInterseccion - 1; i++) {
                for ( j = 0; j < iInterseccion - 1 - i; j++) {
                    if (interseccion[j] > interseccion[j + 1]) {
                        temp = interseccion[j];
                        interseccion[j] = interseccion[j + 1];
                        interseccion[j + 1] = temp;
                    }
                }
            }

            for ( i = 0; i < iInterseccion; i++) {
                printf("%d ", interseccion[i]);
            }
            break;

        case 3:
            printf("El complemento es:\n");

            //LO que le falta a x respecto a z
            for ( i = 0; i < 6; i++) {
                booleanoComplemento = 0; // Reinicializa la bandera en cada iteración de i.
                for ( j = 0; j < 7; j++) {
                    if (z[i] == x[j]) {
                        booleanoComplemento = 1;
                        break; // Si encuentra una coincidencia, no necesita verificar más en este bucle.
                    }
                }
                if (booleanoComplemento == 0) {
                    complemento[iComplemento] = z[i];
                    iComplemento++;
                }
            }
                //LO que le falta a x respecto a u y z
            for ( i = 0; i < 10; i++) {
                booleanoComplemento = 0; // Reinicializa la bandera en cada iteración de i.
                for ( j = 0; j < 6; j++) {
                    if (u[i] == x[j] || u[i] == z[j]) {
                        booleanoComplemento = 1;
                        break; // Si encuentra una coincidencia, no necesita verificar más en este bucle.
                    }
                }
                if (booleanoComplemento == 0) {
                    complemento[iComplemento] = u[i];
                    iComplemento++;
                }
            }
            
            for ( i = 0; i < iComplemento; i++) {
                printf("%d ", complemento[i]);
            }
            printf("\nEl vector ordenado sería:\n");
            for ( i = 0; i < iComplemento - 1; i++) {
                for ( j = 0; j < iComplemento - 1 - i; j++) {
                    if (complemento[j] > complemento[j + 1]) {
                        temp = complemento[j];
                        complemento[j] = complemento[j + 1];
                        complemento[j + 1] = temp;
                    }
                }
            }

            for ( i = 0; i < iComplemento; i++) {
                printf("%d ", complemento[i]);
            }
            break;

        case 4:
            //LO que le falta a x - z
            for ( i = 0; i < 7; i++) {
                booleanoComplemento = 0; // Reinicializa la bandera en cada iteración de i.
                for ( j = 0; j < 7; j++) {
                    if (z[i] == x[j]) {
                        booleanoComplemento = 1;
                        break; // Si encuentra una coincidencia, no necesita verificar más en este bucle.
                    }
                }
                if (booleanoComplemento == 0) {
                    complemento[iComplemento] = z[i];
                    iComplemento++;
                }
            }

            printf("La diferencia es:\n");

            for ( i = 0; i < iComplemento; i++) {
                printf("%d ", complemento[i]);
            }

            printf("\nEl vector ordenado sería:\n");
            for ( i = 0; i < iComplemento - 1; i++) {
                for ( j = 0; j < iComplemento - 1 - i; j++) {
                    if (complemento[j] > complemento[j + 1]) {
                        temp = complemento[j];
                        complemento[j] = complemento[j + 1];
                        complemento[j + 1] = temp;
                    }
                }
            }

            for ( i = 0; i < iComplemento; i++) {
                printf("%d ", complemento[i]);
            }
            break;
        case 5:
            //LO que le falta a x - z
            printf("La diferencia simetrica es:\n");
            for ( i = 0; i < 7; i++) {
                booleanoComplemento = 0; // Reinicializa la bandera en cada iteración de i.
                for ( j = 0; j < 7; j++) {
                    if (z[i] == x[j]) {
                        booleanoComplemento = 1;
                        break; // Si encuentra una coincidencia, no necesita verificar más en este bucle.
                    }
                }
                if (booleanoComplemento == 0) {
                    complemento[iComplemento] = z[i];
                    iComplemento++;
                }
            }
            //LO que le falta a z - x
            for ( i = 0; i < 6; i++) {
                booleanoComplemento = 0; // Reinicializa la bandera en cada iteración de i.
                for ( j = 0; j < 7; j++) {
                    if (x[i] == z[j]) {
                        booleanoComplemento = 1;
                        break; // Si encuentra una coincidencia, no necesita verificar más en este bucle.
                    }
                }
                if (booleanoComplemento == 0) {
                    complemento[iComplemento] = x[i];
                    iComplemento++;
                }
            }

            for ( i = 0; i < iComplemento; i++) {
                printf("%d ", complemento[i]);
            }

            printf("\nEl vector ordenado sería:\n");

            for ( i = 0; i < iComplemento - 1; i++) {
                for ( j = 0; j < iComplemento - 1 - i; j++) {
                    if (complemento[j] > complemento[j + 1]) {
                        temp = complemento[j];
                        complemento[j] = complemento[j + 1];
                        complemento[j + 1] = temp;
                    }
                }
            }

            for ( i = 0; i < iComplemento; i++) {
                printf("%d ", complemento[i]);
            }
            break;
        default:
            printf("Opcion no valida.\n");
            break;
    }
    return 0;
}