//Presentado por: Juan David García Arce

#include <stdio.h> 
#include <unistd.h>

int main () {

    int opcion, opcion2;
    char usuario[20];
    int claveCuenta = 1234;
    int saldo = 1000000;

    printf("Bienvendio a banco ladron, en donde tu dinero no esta seguro con nosotros.\n");
    printf("Ingresa tu nombre de usuario:\n");
    scanf("%s", &usuario);
    printf("ingresa la clave de cuenta:\n");
    scanf("%d", &claveCuenta);

    switch (claveCuenta == 1234)
    {
    case 1:
        printf("Bienvenido: %s \n" , usuario);
        printf("Ingresa la opcion que deseas realizar:\n");
        printf("1. Consultar saldo.\n");
        printf("2. Retirar dinero.\n");
        printf("3. Pago de servicios (agua-luz-gas) .\n");
        printf("4. cambiar clave.\n");
        printf("5. Salir.\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Tu saldo es de: %d", saldo);
            break;
        case 2:
            printf("Ingresa la cantidad que deseas retirar:\n");
            printf("1. 50000\n");
            printf("2. 100000\n");
            printf("3. 320000\n");
            scanf("%d", &opcion2);
            switch (opcion2)
            {
            case 1:
                printf("Retiraste 50000, tu saldo actual es de: %d", saldo - 50000);
                break;
            case 2:
                printf("Retiraste 100000, tu saldo actual es de: %d", saldo - 100000);
                break;
            case 3:
                printf("Retiraste 320000, tu saldo actual es de: %d", saldo - 320000);
                break;
            default:
                printf("No puedes retirar esa cantidad.");
                break;
            }
            break;
        case 3:
            printf("Ingresa el servicio que deseas pagar (1.agua 2.luz 3.gas):\n");
            scanf("%d", &opcion2);
            switch (opcion2)
            {
            case 1:
                printf("Pagaste 30000 de agua, tu saldo actual es de: %d", saldo - 30000);
                break;
            case 2:
                printf("Pagaste 80000 de luz, tu saldo actual es de: %d", saldo - 80000);
                break;
            case 3:
                printf("Pagaste 10000 de gas, tu saldo actual es de: %d", saldo - 10000);
                break;
            default:
                printf("No elegiste una opcion valida");
                break;
            }
            break;
        case 4:
            printf("Ingresa la nueva clave:\n");
            scanf("%d", &claveCuenta);
            printf("Tu nueva clave es: %d", claveCuenta);
            break;
        case 5:
            printf("Gracias por usar nuestros servicios.");
            break;
        default:
            printf("No elegiste una opcion valida");
            break;
        }
        break;

    default:
        printf("Clave incorrecta, intentalo de nuevo.\n");
        sleep(2);
        return main();
        break;
    }

    return 0;
}