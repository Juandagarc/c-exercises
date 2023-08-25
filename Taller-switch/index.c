//Presentado por: Juan David García Arce.





//debe ser con switch

#include <stdio.h>

int main () {

    int opcion;

    printf("Ingrese el ejercicio que desea ver: ");
    //Muestra  la lista
    printf("1. que pida un numero del  al 5 y diga si es primo o no.\n");
    printf("2. Que pida un numero y diga si es par o impar.\n");
    printf("3.  Que pida un numero del 1 al 7 y diga el dia de la semana correspondiente.\n");
    printf("4. Que pida un numero del 1 al 12 y diga el mes correspondiente.\n");
    printf("5. Que pida tres numeros y los muestre de menor a mayor.\n");
    printf("6. Que pida tres numeros y los muestre de mayor a menor.\n");
    printf("7. Que pida tres numeros y los muestre de mayor a menor con saltos de linea.\n");
    printf("8. Que pida un numero y diga si es positivo o negativo.\n");
    printf("9. Que solo permita ingresar caracteres S y N.\n");
    printf("10. QUe pida un numero y diga si es mayor que 100\n");
    printf("11. Que pida una letra y diga si es vocal o no.\n");
    printf("12. que detecte tres numeros y diga si estan en orden creciente o no.\n");
    printf("13. que detecte tres numeros y diga si estan en orden decreciente o no.\n");
    printf("14.  que pida 10 numeros y diga cual es el mayor y el menor.\n");
    printf("15. Que pida tres numeros y diga si el tercero es igual a la suma del primero con el segundo.\n");
    printf("16. que muestre un menu de archivo, buscar y salir.\n");
    printf("17. que tome dos numeros del 1 al 5 y diga si ambos son primos.\n");
    printf("18. Que tome dos numeros y diga si ambos son pares o impares.\n");
    printf("19. Que tome tres numeros y diga si la multiplicacion del primero por el segundo es igual al tercero.\n");
    printf("20. que tome tres numeros y diga si el tercero es igual a la division del primero y el segundo.\n");
    printf("21. Que muestre las opciones equilatero, escanleno, isoceles y ademas calcule el perimetro de un triangulo.\n");
    printf("22. Que pase de kg a otra unidad de medida con menu.\n");
    printf("23. si el dinero es mayor a 15.000 que agregue 16% de impuestos, de lo contrario 10%.\n");
    printf("24. que lea la hora y la devuelva un segundo despues.\n");
    printf("25. Calcula sueldos.");
    scanf("%d", &opcion);
    getchar();

    switch(opcion)
    {
        case 1:
            printf("Ingrese un numero: ");
            int numero;
            scanf("%d", &numero);

            switch(numero)
            {
                case 1:
                    printf("El numero %d es primo\n", numero);
                    break;
                case 2:
                    printf("El numero %d es primo\n", numero);
                    break;
                case 3:
                    printf("El numero %d es primo\n", numero);
                    break;
                case 4:
                    printf("El numero %d no es primo\n", numero);
                    break;
                case 5:
                    printf("El numero %d es primo\n", numero);
                    break;
                default:
                    printf("El numero %d no es primo\n", numero);
                    break;
            }
            break;
        case 2:
            printf("Ingrese un numero: ");
            int numero2;
            scanf("%d", &numero2);

            switch(numero2 % 2)
            {
                case 0:
                    printf("El numero %d es par\n", numero2);
                    break;
                default:
                    printf("El numero %d es impar\n", numero2);
                    break;
            }
            break;
        case 3:
            printf("Ingrese un numero: ");
            int numero3;
            scanf("%d", &numero3);

            switch(numero3)
            {
                case 1:
                    printf("El dia es Lunes\n");
                    break;
                case 2:
                    printf("El dia es Martes\n");
                    break;
                case 3:
                    printf("El dia es Miercoles\n");
                    break;
                case 4:
                    printf("El dia es Jueves\n");
                    break;
                case 5:
                    printf("El dia es Viernes\n");
                    break;
                case 6:
                    printf("El dia es Sabado\n");
                    break;
                case 7:
                    printf("El dia es Domingo\n");
                    break;
                default:
                    printf("El numero %d no corresponde a un dia de la semana\n", numero3);
                    break;
            }
            break;
        case 4:
            printf("Ingrese un numero: ");
            int numero4;
            scanf("%d", &numero4);

            switch(numero4)
            {
                case 1:
                    printf("El mes es Enero\n");
                    break;
                case 2:
                    printf("El mes es Febrero\n");
                    break;
                case 3:
                    printf("El mes es Marzo\n");
                    break;
                case 4:
                    printf("El mes es Abril\n");
                    break;
                case 5:
                    printf("El mes es Mayo\n");
                    break;
                case 6:
                    printf("El mes es Junio\n");
                    break;
                case 7:
                    printf("El mes es Julio\n");
                    break;
                case 8:
                    printf("El mes es Agosto\n");
                    break;
                case 9:
                    printf("El mes es Septiembre\n");
                    break;
                case 10:
                    printf("El mes es Octubre\n");
                    break;
                case 11:
                    printf("El mes es Noviembre\n");
                    break;
                case 12:
                    printf("El mes es Diciembre\n");
                    break;
                default:
                    printf("El numero %d no corresponde a un mes\n", numero4);
                    break;
            }
            break;
        
            case 5:
                printf("Ingrese tres numeros: ");
                int numero8, numero9, numero10, mayor2, medio2, menor2;

                scanf("%d %d %d", &numero8, &numero9, &numero10);

                // Inicializamos mayor, medio y menor con el primer número.
                mayor2 = medio2 = menor2 = numero8;

                // Hallamos el menor
                switch (1) {
                    case 1:
                        if (numero9 < menor2)
                            menor2 = numero9;
                    case 2:
                        if (numero10 < menor2)
                            menor2 = numero10;
                }

                // Hallamos el mayor
                switch (1) {
                    case 1:
                        if (numero9 > mayor2)
                            mayor2 = numero9;
                    case 2:
                        if (numero10 > mayor2)
                            mayor2 = numero10;
                }

                // Hallamos el medio
                switch (1) {
                    case 1:
                        if (numero9 != menor2 && numero9 != mayor2)
                            medio2 = numero9;
                    case 2:
                        if (numero10 != menor2 && numero10 != mayor2)
                            medio2 = numero10;
                }

                printf("%d %d %d", menor2, medio2, mayor2);
                break;
            case 6:
                printf("Ingrese tres numeros: ");
                int numero5, numero6, numero7, mayor, medio, menor;

                scanf("%d %d %d", &numero5, &numero6, &numero7);

                // Inicializamos mayor, medio y menor con el primer número.
                mayor = medio = menor = numero5;

                // Hallamos el menor
                switch (1) {
                    case 1:
                        if (numero6 < menor)
                            menor = numero6;
                    case 2:
                        if (numero7 < menor)
                            menor = numero7;
                }

                // Hallamos el mayor
                switch (1) {
                    case 1:
                        if (numero6 > mayor)
                            mayor = numero6;
                    case 2:
                        if (numero7 > mayor)
                            mayor = numero7;
                }

                // Hallamos el medio
                switch (1) {
                    case 1:
                        if (numero6 != menor && numero6 != mayor)
                            medio = numero6;
                    case 2:
                        if (numero7 != menor && numero7 != mayor)
                            medio = numero7;
                }

                printf("%d %d %d", mayor, medio, menor);
                break;
            case 7:
                printf("Ingrese tres numeros: ");
                int numero11, numero12, numero13, mayor3, medio3, menor3;

                scanf("%d %d %d", &numero11, &numero12, &numero13);

                // Inicializamos mayor, medio y menor con el primer número.
                mayor3 = medio3 = menor3 = numero11;

                // Hallamos el menor
                switch (1) {
                    case 1:
                        if (numero12 < menor3)
                            menor3 = numero12;
                    case 2:
                        if (numero13 < menor3)
                            menor3 = numero13;
                }

                // Hallamos el mayor
                switch (1) {
                    case 1:
                        if (numero12 > mayor3)
                            mayor3 = numero12;
                    case 2:
                        if (numero13 > mayor3)
                            mayor3 = numero13;
                }

                // Hallamos el medio
                switch (1) {
                    case 1:
                        if (numero12 != menor3 && numero12 != mayor3)
                            medio3 = numero12;
                    case 2:
                        if (numero13 != menor3 && numero13 != mayor3)
                            medio3 = numero13;
                }

                printf("%d\n%d\n%d", mayor3, medio3, menor3);
                break;
            case 8:
                printf("Ingrese un numero: ");
                int numero14;
                scanf("%d", &numero14);

                switch(numero14 > 0)
                {
                    case 1:
                        printf("El numero %d es positivo\n", numero14);
                        break;
                    default:
                        printf("El numero %d es negativo\n", numero14);
                        break;
                }
                break;
            case 9:
                printf("Ingrese un caracter: ");
                char caracter;
                scanf("%c", &caracter);

                switch(caracter)
                {
                    case 'S':
                        printf("El caracter es S\n");
                        break;
                    case 'N':
                        printf("El caracter es N\n");
                        break;
                    default:
                        printf("El caracter no es S ni N\n");
                        break;
                }
                break;
            case 10:
                printf("Ingrese un numero: ");
                int numero15;
                scanf("%d", &numero15);

                switch(numero15 > 100)
                {
                    case 1:
                        printf("El numero %d es mayor que 100\n", numero15);
                        break;
                    default:
                        printf("El numero %d no es mayor que 100\n", numero15);
                        break;
                }
                break;
            case 11:
                printf("Ingrese un caracter: ");
                char caracter2;
                scanf("%c", &caracter2);

                switch(caracter2)
                {
                    case 'a':
                        printf("El caracter es a\n");
                        break;
                    case 'e':
                        printf("El caracter es e\n");
                        break;
                    case 'i':
                        printf("El caracter es i\n");
                        break;
                    case 'o':
                        printf("El caracter es o\n");
                        break;
                    case 'u':
                        printf("El caracter es u\n");
                        break;
                    default:
                        printf("El caracter no es una vocal\n");
                        break;
                }
                break;
            case 12:
                printf("Ingrese tres numeros: ");
                int numero16, numero17, numero18;

                scanf("%d %d %d", &numero16, &numero17, &numero18);

                switch(numero16 < numero17 && numero17 < numero18)
                {
                    case 1:
                        printf("Los numeros estan en orden creciente\n");
                        break;
                    default:
                        printf("Los numeros no estan en orden creciente\n");
                        break;
                }
                break;
            case 13:
                printf("Ingrese tres numeros: ");
                int numero19, numero20, numero21;

                scanf("%d %d %d", &numero19, &numero20, &numero21);

                switch(numero19 > numero20 && numero20 > numero21)
                {
                    case 1:
                        printf("Los numeros estan en orden decreciente\n");
                        break;
                    default:
                        printf("Los numeros no estan en orden decreciente\n");
                        break;
                }
                break;
            case 14:
                printf("Ingrese 10 numeros: ");
                int numero22, numero23, numero24, numero25, numero26, numero27, numero28, numero29, numero30, numero31, mayor4, menor4;

                scanf("%d %d %d %d %d %d %d %d %d %d", &numero22, &numero23, &numero24, &numero25, &numero26, &numero27, &numero28, &numero29, &numero30, &numero31);

                // Inicializamos mayor y menor con el primer número.
                mayor4 = menor4 = numero22;

                // Hallamos el menor
                switch (1) {
                    case 1:
                        if (numero23 < menor4)
                            menor4 = numero23;
                    case 2:
                        if (numero24 < menor4)
                            menor4 = numero24;
                    case 3:
                        if (numero25 < menor4)
                            menor4 = numero25;
                    case 4:
                        if (numero26 < menor4)
                            menor4 = numero26;
                    case 5:
                        if (numero27 < menor4)
                            menor4 = numero27;
                    case 6:
                        if (numero28 < menor4)
                            menor4 = numero28;
                    case 7:
                        if (numero29 < menor4)
                            menor4 = numero29;
                    case 8:
                        if (numero30 < menor4)
                            menor4 = numero30;
                    case 9:
                        if (numero31 < menor4)
                            menor4 = numero31;
                }

                // Hallamos el mayor
                switch (1) {
                    case 1:
                        if (numero23 > mayor4)
                            mayor4 = numero23;
                    case 2:
                        if (numero24 > mayor4)
                            mayor4 = numero24;
                    case 3:
                        if (numero25 > mayor4)
                            mayor4 = numero25;
                    case 4:
                        if (numero26 > mayor4)
                            mayor4 = numero26;
                    case 5:
                        if (numero27 > mayor4)
                            mayor4 = numero27;
                    case 6:
                        if (numero28 > mayor4)
                            mayor4 = numero28;
                    case 7:
                        if (numero29 > mayor4)
                            mayor4 = numero29;
                    case 8:
                        if (numero30 > mayor4)
                            mayor4 = numero30;
                    case 9:
                        if (numero31 > mayor4)
                            mayor4 = numero31;
                }
                printf("El mayor es %d y el menor es %d\n", mayor4, menor4);
                break;
            case 15:
                printf("Ingrese tres numeros: ");
                int numero32, numero33, numero34;

                scanf("%d %d %d", &numero32, &numero33, &numero34);

                switch(numero34 == numero32 + numero33)
                {
                    case 1:
                        printf("El tercer numero es igual a la suma del primero y el segundo\n");
                        break;
                    default:
                        printf("El tercer numero no es igual a la suma del primero y el segundo\n");
                        break;
                }
                break;
            case 16:
                printf("Ingrese una opcion: ");
                char opcion2;
                scanf("%c", &opcion2);

                switch(opcion2)
                {
                    case 'a':
                        printf("Archivo\n");
                        break;
                    case 'b':
                        printf("Buscar\n");
                        break;
                    case 'c':
                        printf("Salir\n");
                        break;
                    default:
                        printf("Opcion no valida\n");
                        break;
                }
                break;
            case 17:
                printf("Ingrese dos numeros: ");
                int numero35, numero36;

                scanf("%d %d", &numero35, &numero36);

                switch(numero35)
                {
                    case 1:
                        switch(numero36)
                        {
                            case 1:
                                printf("Los numeros %d y %d son primos\n", numero35, numero36);
                                break;
                            case 2:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 3:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 4:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 5:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            default:
                                printf("Los numeros %d y %d no son primos\n", numero35, numero36);
                                break;
                        }
                        break;
                    case 2:
                        switch(numero36)
                        {
                            case 1:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 2:
                                printf("Los numeros %d y %d son primos\n", numero35, numero36);
                                break;
                            case 3:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 4:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 5:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            default:
                                printf("Los numeros %d y %d no son primos\n", numero35, numero36);
                                break;
                        }
                        break;
                    case 3:
                        switch(numero36)
                        {
                            case 1:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 2:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 3:
                                printf("Los numeros %d y %d son primos\n", numero35, numero36);
                                break;
                            case 4:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 5:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            default:
                                printf("Los numeros %d y %d no son primos\n", numero35, numero36);
                                break;
                        }
                        break;
                    case 4:
                        switch(numero36)
                        {
                            case 1:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 2:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 3:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 4:
                                printf("Los numeros %d y %d son primos\n", numero35, numero36);
                                break;
                            case 5:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            default:
                                printf("Los numeros %d y %d no son primos\n", numero35, numero36);
                                break;
                        }
                        break;
                    case 5:
                        switch(numero36)
                        {
                            case 1:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 2:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 3:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 4:
                                printf("El numero %d es primo pero el numero %d no\n", numero35, numero36);
                                break;
                            case 5:
                                printf("Los numeros %d y %d son primos\n", numero35, numero36);
                                break;
                            default:
                                printf("Los numeros %d y %d no son primos\n", numero35, numero36);
                                break;
                        }
                        break;
                    default:
                        printf("Los numeros %d y %d no son primos\n", numero35, numero36);
                        break;
                }
                break;
            case 18:
                printf("Ingrese dos numeros: ");
                int numero37, numero38;

                scanf("%d %d", &numero37, &numero38);

                switch(numero37 % 2)
                {
                    case 0:
                        switch(numero38 % 2)
                        {
                            case 0:
                                printf("Los numeros %d y %d son pares\n", numero37, numero38);
                                break;
                            default:
                                printf("El numero %d es par pero el numero %d no\n", numero37, numero38);
                                break;
                        }
                        break;
                    default:
                        switch(numero38 % 2)
                        {
                            case 0:
                                printf("El numero %d es impar pero el numero %d no\n", numero37, numero38);
                                break;
                            default:
                                printf("Los numeros %d y %d son impares\n", numero37, numero38);
                                break;
                        }
                        break;
                }
                break;
            case 19:
                printf("Ingrese tres numeros: ");
                int numero39, numero40, numero41;
                scanf("%d %d %d", &numero39, &numero40, &numero41);

                switch(numero39 * numero40)
                {
                    // case numero41:
                    //     printf("El tercer numero es igual a la multiplicacion del primero y el segundo\n");
                    //     break;
                    // default:
                    //     printf("El tercer numero no es igual a la multiplicacion del primero y el segundo\n");
                    //     break;
                }
                break;
            case 20:   
                printf("Ingrese tres numeros: ");
                int numero42, numero43, numero44;
                scanf("%d %d %d", &numero42, &numero43, &numero44);

                // switch(numero42 / numero43)
                // {
                //     case numero44:
                //         printf("El tercer numero es igual a la division del primero y el segundo\n");
                //         break;
                //     default:
                //         printf("El tercer numero no es igual a la division del primero y el segundo\n");
                //         break;
                // }
                // break;
            case 21:
                printf("Ingrese tres numeros: ");
                int numero45, numero46, numero47;
                scanf("%d %d %d", &numero45, &numero46, &numero47);

                switch(numero45 == numero46 && numero46 == numero47)
                {
                    case 1:
                        printf("El triangulo es equilatero\n");
                        break;
                    default:
                        switch(numero45 == numero46 || numero46 == numero47 || numero45 == numero47)
                        {
                            case 1:
                                printf("El triangulo es isoceles\n");
                                break;
                            default:
                                printf("El triangulo es escaleno\n");
                                break;
                        }
                        break;
                }
                break;
            case 22:
                printf("Ingrese un numero: ");
                int numero48;
                scanf("%d", &numero48);

                switch(numero48)
                {
                    case 1:
                        printf("El numero %d equivale a 1000 gramos\n", numero48);
                        break;
                    case 2:
                        printf("El numero %d equivale a 100 gramos\n", numero48);
                        break;
                    case 3:
                        printf("El numero %d equivale a 10 gramos\n", numero48);
                        break;
                    case 4:
                        printf("El numero %d equivale a 1 gramo\n", numero48);
                        break;
                    case 5:
                        printf("El numero %d equivale a 1 decigramo\n", numero48);
                        break;
                    case 6:
                        printf("El numero %d equivale a 1 centigramo\n", numero48);
                        break;
                    case 7:
                        printf("El numero %d equivale a 1 miligramo\n", numero48);
                        break;
                    default:
                        printf("El numero %d no equivale a ninguna unidad de medida\n", numero48);
                        break;
                }
                break;
            case 23:
                printf("Ingrese un numero: ");
                int numero49;
                scanf("%d", &numero49);

                switch(numero49 > 15000)
                {
                    case 1:
                        printf("El numero %d equivale a %f\n", numero49, numero49 * 1.16);
                        break;
                    default:
                        printf("El numero %d equivale a %f\n", numero49, numero49 * 1.10);
                        break;
                }
                break;
            case 24:
                printf("Ingrese la hora: ");
                int hora, minuto, segundo;
                scanf("%d %d %d", &hora, &minuto, &segundo);

                switch(segundo)
                {
                    case 59:
                        switch(minuto)
                        {
                            case 59:
                                switch(hora)
                                {
                                    case 23:
                                        printf("La hora es 00:00:00\n");
                                        break;
                                    default:
                                        printf("La hora es %d:00:00\n", hora + 1);
                                        break;
                                }
                                break;
                            default:
                                printf("La hora es %d:%d:00\n", hora, minuto + 1);
                                break;
                        }
                        break;
                    default:
                        printf("La hora es %d:%d:%d\n", hora, minuto, segundo + 1);
                        break;
                }
                break;
}


    return 0;
}