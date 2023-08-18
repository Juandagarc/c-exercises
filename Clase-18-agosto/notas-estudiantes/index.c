//Juan David García Arce

#include<stdio.h>

int main () {
    //Se define la  tarea 1:
    float notaA1, notaB1, notaC1;
    printf("Ingrese las primeras 3 notas para la tarea1");
    scanf("%f %f %f", &notaA1, &notaB1, &notaC1 );
    float tarea1 = ( notaA1 + notaB1 + notaC1 ) / 3;
    printf("La nota del 10%% de la nota 1 es de: %f\n", tarea1);

    float examen1;
    printf("Ingrese la nota del examen 1: ");
    scanf("%f", &examen1);
    float notaExamen1 = (examen1 * 0.9) +  ( tarea1 * 0.1 );
    printf("La nota del examen 1 con las tareas es de: %f\n", notaExamen1);
    //Se define la tarea 2:
    float notaA2, notaB2;
    printf("Ingrese las primeras 3 notas para la tarea2");
    scanf("%f %f %f", &notaA2, &notaB2 );
    float tarea2 = ( notaA2 + notaB2 ) / 2;
    printf("La nota del 20%% de la nota 2 es de: %f\n", tarea2);

    float examen2;
    printf("Ingrese la nota del examen 1: ");
    scanf("%f", &examen2);
    float notaExamen2 = (examen2 * 0.8) +  ( tarea2 * 0.2 );
    printf("La nota del examen 1 con las tareas es de: %f\n", notaExamen2);
    //Se define la tarea 3:
    float notaA3, notaB3, notaC3;
    printf("Ingrese las primeras 3 notas para la tarea3");
    scanf("%f %f %f", &notaA3, &notaB3, &notaC3 );
    float tarea3 = ( notaA3 + notaB3 + notaC3 ) / 3;
    printf("La nota del 10%% de la nota 1 es de: %f\n", tarea3);

    float examen3;
    printf("Ingrese la nota del examen 3: ");
    scanf("%f", &examen3);
    float notaExamen3 = (examen3 * 0.85) +  ( tarea1 * 0.15 );
    printf("La nota del examen 3 con las tareas es de: %f\n", notaExamen3);

    //Se muestran los datos
    printf( "Nota-Matematica: %f Nota-tareas: %f Nota-tarea1: %f Nota-tarea2: %f Nota-tarea3: %f\n ", notaExamen1, tarea1 , notaA1, notaB1, notaC1 );
    printf( "Nota-Fisica: %f Nota-tareas: %f Nota-tarea1: %f Nota-tarea2: %f Nota-tarea3: %f\n ", notaExamen2, tarea2 , notaA2, notaB2 );
    printf( "Nota-Quimica: %f Nota-tareas: %f Nota-tarea1: %f Nota-tarea2: %f Nota-tarea3: %f\n ", notaExamen3, tarea3 , notaA3, notaB3, notaC3 );
    printf("Su actual promedio academico es de: %f", (notaExamen1 + notaExamen2 + notaExamen3) / 3);
}