//Presentado por: Juan david García Arce

#include <stdio.h>
#include <string.h>

//Colores
#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define GRAY "\x1b[30m"
#define BLUE "\x1b[34m"
#define RED "\x1b[31m"
#define WHITE "\x1b[37m"

struct  producto
{
    int cantidad;
    char descripcion[20];
    float precio;
    float importe;
};


struct productos
{
    float totalBruto;
    float porcentajeDescuento;
    float descuento;
    float IVA;
    float total;
    struct producto producto[5];
};


struct clientes
{
    char nombre[100];
    char NIF[20];
    char domicilio[20];
    char pago[20];
    struct productos productos[10];
};

struct facturas
{
    int id;
    char fecha[10];
    struct clientes clientes[10];
};

float calcularTotalBruto(struct productos productos) {
    //Se calcula la sumatoria de los importes de los productos
    float totalBruto = 0;
    for (int i = 0; i < 5; i++) {
        totalBruto += productos.producto[i].importe;
        printf("%f\n", productos.producto[i].importe);
    }
    printf("Total bruto: %f\n", totalBruto);
    return totalBruto;
}

float calcularIVA(float totalBruto, float descuento) {
    float IVA = 0;
    IVA = (totalBruto - descuento) * 0.19;
    return IVA;
}

float calcularTotal(float totalBruto, float descuento, float IVA) {
    float total = 0;
    total = totalBruto - descuento + IVA;
    return total;
}

void listarClientes(struct facturas facturas[], int itemCount) {
    printf(GRAY"Lista de clientes:\n"RESET);
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(facturas[i].clientes[0].nombre, "") != 0) {
            printf(GRAY"%d. %s\n"RESET, i + 1, facturas[i].clientes[0].nombre);
        }
    }
}

void listarProductos(struct facturas facturas[], int itemCount) {
    printf(GRAY"Lista de productos:\n"RESET);
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(facturas[i].clientes[0].productos[0].producto[0].descripcion, "") != 0) {
            printf(GRAY"%d. %s\n"RESET, i + 1, facturas[i].clientes[0].productos[0].producto[0].descripcion);
        }
    }
}

//Funcion para ingresar un nuevo producto a un cliente n y se muestra con BLUE
void ingresarProducto(struct facturas facturas[], int itemCount) {
    int num;
    listarClientes(facturas, itemCount);
    printf(BLUE"Ingrese el número del cliente al que desea ingresar un producto: ");
    scanf("%d"RESET, &num);
    //Se ingresa un producto nuevo
    if (num > 0 && num <= itemCount) {
        int cantidad;
        char descripcion[20];
        float precio;
        printf(BLUE"Ingrese la cantidad del producto: ");
        scanf("%d"RESET, &cantidad);
        printf(BLUE"Ingrese la descripcion del producto: ");
        scanf("%s"RESET, descripcion);
        printf(BLUE"Ingrese el precio del producto: ");
        scanf("%f"RESET, &precio);
        //Se busca el primer producto que no tenga descripcion
        for (int i = 0; i < 5; i++) {
            if (strcmp(facturas[num - 1].clientes[0].productos[0].producto[i].descripcion, "") == 0) {
                facturas[num - 1].clientes[0].productos[0].producto[i].cantidad = cantidad;
                strcpy(facturas[num - 1].clientes[0].productos[0].producto[i].descripcion, descripcion);
                facturas[num - 1].clientes[0].productos[0].producto[i].precio = precio;
                facturas[num - 1].clientes[0].productos[0].producto[i].importe = cantidad * precio;
                break;
            }
        }
    } else {
        printf(RED"El numero ingresado no es valido\n"RESET);
    }
}

//Funcion para ingresar un nuevo cliente y se muestra con BLUE
void ingresarCliente(struct facturas facturas[], int itemCount) {
    int num;
    printf(BLUE"Ingrese el numero de la factura a la que desea ingresar un cliente: ");
    scanf("%d"RESET, &num);
    if (num > 0 && num <= itemCount) {
        printf(BLUE"Ingrese el nombre del cliente: ");
        scanf("%s"RESET, facturas[num - 1].clientes[0].nombre);
        printf(BLUE"Ingrese el NIF del cliente: ");
        scanf("%s"RESET, facturas[num - 1].clientes[0].NIF);
        printf(BLUE"Ingrese el domicilio del cliente: ");
        scanf("%s"RESET, facturas[num - 1].clientes[0].domicilio);
        printf(BLUE"Ingrese la forma de pago del cliente: ");
        scanf("%s"RESET, facturas[num - 1].clientes[0].pago);
    } else {
        printf(RED"El numero ingresado no es valido\n"RESET);
    }
}

//Funcion para listar productos de todos los clientes, no la cantidad sino los nombres, si se repite no se muestra
void listarProductosTodos(struct facturas facturas[], int itemCount) {
    printf(GRAY"Lista de productos:\n"RESET);
    for (int i = 0; i < itemCount; i++) {
        //Si hay un  cliente con productos muestra su titulo
        if (strcmp(facturas[i].clientes[0].productos[0].producto[0].descripcion, "") != 0) {
            printf(BLUE"Cliente: %s\n"RESET, facturas[i].clientes[0].nombre);
        }
        for (int j = 0; j < 5; j++) {
            if (strcmp(facturas[i].clientes[0].productos[0].producto[j].descripcion, "") != 0) {
                printf(GRAY"%d. %s\n"RESET, i + 1, facturas[i].clientes[0].productos[0].producto[j].descripcion);
            }
        }
    }
}

//Se imprimen facturas con color verde, clientes con color BLUE y productos con color gris
void imprimirFactura(struct facturas facturas) {
    printf(GREEN "Factura: %d\n", facturas.id);
    printf("Fecha: %s\n", facturas.fecha);
    printf("Cliente: %s\n", facturas.clientes[0].nombre);
    printf("NIF: %s\n", facturas.clientes[0].NIF);
    printf("Domicilio: %s\n", facturas.clientes[0].domicilio);
    printf("Forma de pago: %s\n", facturas.clientes[0].pago);
    printf("Productos:\n");
    //Se muestra solo los productos que tienen cantidad mayor a 0
    for (int i = 0; i < 5; i++) {
        if (facturas.clientes[0].productos[0].producto[i].cantidad > 0) {
            printf(GRAY "Cantidad: %d\n", facturas.clientes[0].productos[0].producto[i].cantidad);
            printf("Descripcion: %s\n", facturas.clientes[0].productos[0].producto[i].descripcion);
            printf("Precio: %f\n", facturas.clientes[0].productos[0].producto[i].precio);
            printf("Importe: %f\n", facturas.clientes[0].productos[0].producto[i].importe);
        }
    }
    //Se imprime el total bruto, descuento, IVA y total para esa factura
    printf("Total bruto: %f\n", facturas.clientes[0].productos[0].totalBruto);
    printf("Descuento: %f\n", facturas.clientes[0].productos[0].descuento);
    printf("IVA: %f\n", facturas.clientes[0].productos[0].IVA);
    printf("Total: %f\n", facturas.clientes[0].productos[0].total);
    printf(RESET);
}

//Que se actualizan los totales de la factura
void actualizarTotales(struct facturas facturas[], int itemCount) {
    for (int i = 0; i < itemCount; i++) {
        facturas[i].clientes[0].productos[0].totalBruto = calcularTotalBruto(facturas[i].clientes[0].productos[0]);
        facturas[i].clientes[0].productos[0].porcentajeDescuento = 0.07;
        facturas[i].clientes[0].productos[0].descuento = facturas[i].clientes[0].productos[0].totalBruto * facturas[i].clientes[0].productos[0].porcentajeDescuento;
        facturas[i].clientes[0].productos[0].IVA = calcularIVA(facturas[i].clientes[0].productos[0].totalBruto, facturas[i].clientes[0].productos[0].descuento);
        facturas[i].clientes[0].productos[0].total = calcularTotal(facturas[i].clientes[0].productos[0].totalBruto, facturas[i].clientes[0].productos[0].descuento, facturas[i].clientes[0].productos[0].IVA);
    }
}


//Funcion para mostrar el menu
void mostrarMenu() {
    printf(WHITE"1. Ingresar un nuevo producto\n");
    printf("2. Listar Los productos pedidos\n");
    printf("3. Ingresar un nuevo cliente\n");
    printf("4. Listar los clientes\n");
    printf("5. generar factura\n");
    printf("6. Salir.\n"RESET);
}


int main () {

    struct facturas facturas[10];

    //Se generan 2 facturas por defecto
    //Factura 1
    facturas[0].id = 1932849;
    strcpy(facturas[0].fecha, "27/10/2020");
    //-----------------------------------------------------cliente
    strcpy(facturas[0].clientes[0].nombre, "Juan David Garcia Arce");
    strcpy(facturas[0].clientes[0].NIF, "123456789");
    strcpy(facturas[0].clientes[0].domicilio, "Calle 123");
    strcpy(facturas[0].clientes[0].pago, "Efectivo");
    //-----------------------------------------------------producto
    facturas[0].clientes[0].productos[0].producto[0].cantidad = 2;
    strcpy(facturas[0].clientes[0].productos[0].producto[0].descripcion, "Coca Cola");
    facturas[0].clientes[0].productos[0].producto[0].precio = 1.5;
    facturas[0].clientes[0].productos[0].producto[0].importe = 3;
    //-----------------------------------------------------producto
    facturas[0].clientes[0].productos[0].producto[1].cantidad = 1;
    strcpy(facturas[0].clientes[0].productos[0].producto[1].descripcion, "Papas Margarita");
    facturas[0].clientes[0].productos[0].producto[1].precio = 1.5;
    facturas[0].clientes[0].productos[0].producto[1].importe = 1.5;
    //-----------------------------------------------------productos
    facturas[0].clientes[0].productos[0].totalBruto = calcularTotalBruto(facturas[0].clientes[0].productos[0]);
    facturas[0].clientes[0].productos[0].porcentajeDescuento = 0.07;
    facturas[0].clientes[0].productos[0].descuento = facturas[0].clientes[0].productos[0].totalBruto * facturas[0].clientes[0].productos[0].porcentajeDescuento;
    facturas[0].clientes[0].productos[0].IVA = calcularIVA(facturas[0].clientes[0].productos[0].totalBruto, facturas[0].clientes[0].productos[0].descuento);
    facturas[0].clientes[0].productos[0].total = calcularTotal(facturas[0].clientes[0].productos[0].totalBruto, facturas[0].clientes[0].productos[0].descuento, facturas[0].clientes[0].productos[0].IVA);
    

    //Factura 2
    facturas[1].id = 1932850;
    strcpy(facturas[1].fecha, "27/10/2020");
    //-----------------------------------------------------cliente
    strcpy(facturas[1].clientes[0].nombre, "Michael Giraldo Roman");
    strcpy(facturas[1].clientes[0].NIF, "987654321");
    strcpy(facturas[1].clientes[0].domicilio, "Calle 321");
    strcpy(facturas[1].clientes[0].pago, "Efectivo");
    //-----------------------------------------------------producto
    facturas[1].clientes[0].productos[0].producto[0].cantidad = 1;
    strcpy(facturas[1].clientes[0].productos[0].producto[0].descripcion, "Coca Cola");
    facturas[1].clientes[0].productos[0].producto[0].precio = 1.5;
    facturas[1].clientes[0].productos[0].producto[0].importe = 1.5;
    //-----------------------------------------------------producto
    facturas[1].clientes[0].productos[0].producto[1].cantidad = 3;
    strcpy(facturas[1].clientes[0].productos[0].producto[1].descripcion, "Papas Margarita");
    facturas[1].clientes[0].productos[0].producto[1].precio = 1.5;
    facturas[1].clientes[0].productos[0].producto[1].importe = 4.5;
    //-----------------------------------------------------productos
    facturas[1].clientes[0].productos[0].totalBruto = calcularTotalBruto(facturas[1].clientes[0].productos[0]);
    facturas[1].clientes[0].productos[0].porcentajeDescuento = 0.07;
    facturas[1].clientes[0].productos[0].descuento = facturas[1].clientes[0].productos[0].totalBruto * facturas[1].clientes[0].productos[0].porcentajeDescuento;
    facturas[1].clientes[0].productos[0].IVA = calcularIVA(facturas[1].clientes[0].productos[0].totalBruto, facturas[1].clientes[0].productos[0].descuento);
    facturas[1].clientes[0].productos[0].total = calcularTotal(facturas[1].clientes[0].productos[0].totalBruto, facturas[1].clientes[0].productos[0].descuento, facturas[1].clientes[0].productos[0].IVA);


    imprimirFactura(facturas[0]);
    imprimirFactura(facturas[1]);

    int itemCount = 2;
    int opcion = 0;
    int num;
    while (opcion != 6) {
        mostrarMenu();
        printf(BLUE"Ingrese una opcion: ");
        scanf("%d"RESET, &opcion);
        switch (opcion) {
            case 1:
                ingresarProducto(facturas, itemCount);
                //Se actualizan los totales de la factura
                actualizarTotales(facturas, itemCount);
                break;
            case 2:
                listarProductosTodos(facturas, itemCount);
                break;
            case 3:
                ingresarCliente(facturas, itemCount);
                break;
            case 4:
                listarClientes(facturas, itemCount);
                break;
            case 5:
                listarClientes(facturas, itemCount);
                printf(BLUE"Ingrese el numero de la factura que desea generar: ");
                scanf("%d"RESET, &num);
                if (num > 0 && num <= itemCount) {
                    imprimirFactura(facturas[num - 1]);
                } else {
                    printf(RED"El numero ingresado no es valido\n"RESET);
                }
                break;
            case 6:
                printf(GREEN"Gracias por usar el programa\n"RESET);
                break;
            default:
                printf(RED"El numero ingresado no es valido\n"RESET);
                break;
        }
    }
    return 0;
}