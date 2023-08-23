//Presentado Por: Juan David García Arce
#include<stdio.h>
int main () {

    float nota1, nota2, nota3, nota4, promedio;

    printf("Ingrese por favor las 4 notas del estudiante: \n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    //Se halla la nota menor

    if ( nota1 < nota2 && nota1 < nota3 && nota1 < nota4 ) {
        nota1 = 0;
        printf("Se elimino la nota 1\n");
    } else if ( nota2 < nota1 && nota2 < nota3 && nota2 < nota4 ) {
        nota2 = 0;
        printf("Se elimino la nota 2\n");
    } else if ( nota3 < nota1 && nota3 < nota2 && nota3 < nota4 ) {
        nota3 = 0;
        printf("Se elimino la nota 3\n");
    } else if ( nota4 < nota1 && nota4 < nota2 && nota4 < nota3 ) {
        nota4 = 0;
        printf("Se elimino la nota 4\n");
    }

    //Se halla la nota mayor

    if ( nota1 > nota2 && nota1 > nota3 && nota1 > nota4 ) {
        promedio = ( ( nota1 * 0.5 ) + ( 0.25 * ( nota2 + nota3 + nota4) ) );
        printf("La nota mayor es la nota 1: con %.1f\n", nota1);
    } else if ( nota2 > nota1 && nota2 > nota3 && nota2 > nota4 ) {
        promedio = ( ( nota2 * 0.5 ) + ( 0.25 * ( nota1 + nota3 + nota4) ) );
        printf("La nota mayor es la nota 2: con %.1f\n", nota2);
    } else if ( nota3 > nota1 && nota3 > nota2 && nota3 > nota4 ) {
        promedio = ( ( nota3 * 0.5 ) + ( 0.25 * ( nota1 + nota2 + nota4) ) );
        printf("La nota mayor es la nota 3: con %.1f\n", nota3);
    } else if ( nota4 > nota1 && nota4 > nota2 && nota4 > nota3 ) {
        promedio = ( ( nota4 * 0.5 ) + ( 0.25 * ( nota1 + nota2 + nota3) ) );
        printf("La nota mayor es la nota 4: %.1f\n", nota4);
    }
    printf("\nEl promedio del estudiante es: %.1f\n", promedio);

    return 0;
}