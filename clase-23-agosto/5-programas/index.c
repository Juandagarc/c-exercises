//Presentado por: Juan David García Arce.

#include<stdio.h>
#include<ctype.h>

int main () {

printf("Que programa deseas ver?\n");
printf("1. Introducir caracteres\n");
printf("2. Colores\n");
printf("3. Colores v2\n");
printf("4. Ejemplo switch\n");
printf("5. Dias de la semana\n");

int programa, opcion;
char eleccion;
scanf("%d", &programa);
getchar();

switch (programa)
{
    case 1:
        printf("Introduzca una vocal\n");

        char vocal;

        switch (vocal = getchar())
        {
        case 'a':
            printf("La vocal es a\n");
            break;
        case 'e':
            printf("La vocal es e\n");
            break;
        case 'i':
            printf("La vocal es i\n");
            break;
        case 'o':
            printf("La vocal es o\n");
            break;
        case 'u':
            printf("La vocal es u\n");
            break;
        default:
            printf("No eligio ninguna vocal\n");
            break;
        }
        break;
    case 2:

        printf("Ellija un color:\n");
        printf("r-rojo\n");
        printf("b-blanco\n");
        printf("a-azul\n");

        switch (eleccion=getchar())
        {
        case 'r':
        case 'R':
            printf("El color es rojo\n");
            break;
        case 'b':
        case 'B':
            printf("El color es blanco\n");
            break;
        case 'a':
        case 'A':
            printf("El color es azul\n");
            break;
        default:
            printf("No eligio ningun color\n");
            break;
        }
        break;
    case 3:

        printf("Ellija un color:\n");
        printf("r-rojo\n");
        printf("b-blanco\n");
        printf("a-azul\n");

        switch (eleccion=toupper(getchar()))
        {
        case 'R':
            printf("El color es rojo\n");
            break;
        case 'B':
            printf("El color es blanco\n");
            break;
        case 'A':
            printf("El color es azul\n");
            break;
        default:
            printf("No eligio ningun color\n");
            break;
        }
        break;
    case 4:
        printf("Elija que desea hacer:\n");
        printf("1.Consignacion\n");
        printf("2.Retiro\n");
        printf("3. pago de servicios\n");
        printf("4. Cambio de clave\n");
        printf("5. Consulta de saldo\n");

        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                printf("Usted eligio consignacion\n");
                break;
            case 2:
                printf("Usted eligio retiro\n");
                break;
            case 3:
                printf("Usted eligio pago de servicio\ns");
                break;
            case 4:
                printf("Usted eligio cambio de clave\n");
                break;
            case 5:
                printf("Usted eligio consulta de saldo\n");
                break;
        }
        break;
    case 5:
        printf("Elija un dia de la semana:\n");
        printf("1.Lunes\n");
        printf("2.Martes\n");
        printf("3.Miercoles\n");
        printf("4.Jueves\n");
        printf("5.Viernes\n");
        printf("6.Sabado\n");
        printf("7.Domingo\n");

        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                printf("Usted eligio Lunes\n");
                break;
            case 2:
                printf("Usted eligio Martes\n");
                break;
            case 3:
                printf("Usted eligio Miercoles\n");
                break;
            case 4:
                printf("Usted eligio Jueves\n");
                break;
            case 5:
                printf("Usted eligio Viernes\n");
                break;
            case 6:
                printf("Usted eligio Sabado\n");
                break;
            case 7:
                printf("Usted eligio Domingo\n");
                break;
            default:
                printf("No eligio ningun dia de la semana\n");
                break;
        }
        break;

    default:
        printfprintf("No eligio ningun programa\n");
    break;
}

printf("Desea ver mas programas? (Y/N) \n");

char respuesta;

switch (respuesta=toupper(getchar()))
{
case 'Y':
    return main();
    break;

default:
    printf("Gracias por usar los programas!\n");
    break;
}


    return 0;
}