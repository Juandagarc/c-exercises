//Presentado por : Juan David García Arce.

#include<stdio.h>

int main () {

    int opcion, opcion2, pulsaciones, frecuenciaCardiaca, edad, antiguedad, genero, edadRestante, añosFaltantesAntiguedad;

    printf("Ingresar la opcion:\n");
    //Se muestra el menu de opciones
    printf("1. Calculadora de pulsaciones de una persona.\n");
    printf("2. Jubilacion.\n");
    scanf("%d", &opcion);
    switch(opcion) {
        case 1:
            //Programa de las pulsaciones
            printf("Sigue las siguientes instrucciones:\n");
            printf("1. Pon el dedo índice y el dedo medio en la muñeca derecha (con la palma hacia arriba).\n");
            printf("2. Pon los dos dedos en la arteria radial, que está alineada con el pulgar. Puede que debas buscar un poco hasta encontrar tu pulso.\n");
            printf("3. Cuenta el número de pulsaciones en 15 segundos.\n");
            printf("4. Ingresa el numero de pulsaciones:\n");

            scanf("%d", &pulsaciones);
            frecuenciaCardiaca = pulsaciones * 4;
            printf("Tu frecuencia cardiaca es de %d pulsaciones por minuto.", frecuenciaCardiaca);
            break;
        case 2:
            //Programa de la jubilacion
            printf("Ingrese como se desa jubilar:\n");
            printf("1. Por edad.\n");
            printf("2. Por tiempo de servicio y edad(Joven).\n");
            printf("3. Por tiempo de servicio y edad(Adulta).\n");
            printf("4. No califica\n");
            scanf("%d", &opcion2);

            switch(opcion2)
            {
                case 1:
                    printf("Ingresa tu genero (1. Masculino, 2. Femenino): ");
                    scanf("%d", &genero);
                    printf("Ingresa tu edad: ");
                    scanf("%d", &edad);
                    switch(genero)
                    {
                        case 1:
                            switch(edad >= 60)
                            {
                                case 1:
                                    printf("Puedes jubilarte.");
                                    break;
                                default:
                                    edadRestante = 60 - edad;
                                    printf("No puedes jubilarte. Te faltan %d años.", edadRestante);
                                    break;
                            }
                            break;
                        case 2:
                            switch(edad >= 62)
                            {
                                case 1:
                                    printf("Puedes jubilarte.");
                                    break;
                                default:
                                    edadRestante = 62 - edad;
                                    printf("No puedes jubilarte. Te faltan %d años.", edadRestante);
                                    break;
                            }
                            break;
                    }
                    break;
                    //Por si le falta edad
                case 2:
                    printf("Ingresa tu genero (1. Masculino, 2. Femenino): ");
                    scanf("%d", &genero);
                    printf("Ingresa tu edad: ");
                    scanf("%d", &edad);
                    printf("Ingresa tu antiguedad: ");
                    scanf("%d", &antiguedad);
                    switch(genero)
                    {
                        case 1:
                            switch(edad >= 60 && antiguedad >= 25)
                            {
                                case 1:
                                    printf("Puedes jubilarte.");
                                    break;
                                default:
                                    edadRestante = 60 - edad;
                                    printf("No puedes jubilarte. Te faltan %d años.", edadRestante);
                                    break;
                            }
                            break;
                        case 2:
                            switch(edad >= 55 && antiguedad >= 25)
                            {
                                case 1:
                                    printf("Puedes jubilarte.");
                                    break;
                                default:
                                    edadRestante = 55 - edad;
                                    printf("No puedes jubilarte. Te faltan %d años.", edadRestante);
                                    break;
                            }
                            break;
                    }
                    break;
                    //por si le falta antiguedad
                case 3:
                    printf("Ingresa tu genero (1. Masculino, 2. Femenino): ");
                    scanf("%d", &genero);
                    printf("Ingresa tu edad: ");
                    scanf("%d", &edad);
                    printf("Ingresa tu antiguedad: ");
                    scanf("%d", &antiguedad);
                    switch(genero)
                    {
                        case 1:
                            switch(edad >= 60 && antiguedad >= 26)
                            {
                                case 1:
                                    printf("Puedes jubilarte.");
                                    break;
                                default:
                                    añosFaltantesAntiguedad = 26 - antiguedad;
                                    printf("No puedes jubilarte. Te faltan %d años de antiguedad.", añosFaltantesAntiguedad);
                                    break;
                            }
                            break;
                        case 2:
                            switch(edad >= 55 && antiguedad >= 26)
                            {
                                case 1:
                                    printf("Puedes jubilarte.");
                                    break;
                                default:
                                    añosFaltantesAntiguedad = 26 - antiguedad;
                                    printf("No puedes jubilarte. Te faltan %d años de antiguedad.", añosFaltantesAntiguedad);
                                    break;
                            }
                            break;
                    }
                    break;
                case 4:
                    printf("Ingrese la edad:");
                    scanf("%d", &edad);
                    printf("Ingrese la antiguedad:");
                    scanf("%d", &antiguedad);
                    switch(edad >= 60 && antiguedad >= 25)
                    {
                        case 1:
                            printf("Puedes jubilarte.");
                            break;
                        default:
                            edadRestante = 60 - edad;
                            añosFaltantesAntiguedad = 25 - antiguedad;
                            printf("No puedes jubilarte. Te faltan %d años de edad y %d años de antiguedad.", edadRestante, añosFaltantesAntiguedad);
                            break;
                    }
                    break;

            break;
            }
    }




    return 0;
}