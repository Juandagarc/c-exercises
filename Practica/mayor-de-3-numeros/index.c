//Presentaddo por Juan David García Arce

#include <stdio.h>

int main()
{
    int numero1, numero2, numero3;
    printf("Ingrese por favor un numero para determinar cual es mayor");
    scanf("%d", &numero1);
    printf("Ingrese por favor el segundo numero:");
    scanf("%d", &numero2);
    printf("Ingrese por favor el tercer numero:");
    scanf("%d", &numero3);

 if ( numero1 > numero2 && numero3)
 {
    printf(" el numero mayor es %d", numero1);
 } else if (numero2 > numero1 && numero3)
 {
    printf(" el numero mayor es %d", numero2);
 } else if (numero3 > numero1 && numero2 )
 {
    printf(" el numero mayor es %d", numero3);
 } else if (numero1 == numero2 && numero1 == numero3)
 {
    printf(" los numeros son iguales");
 }
 //Lo mismo sin and


    return 0;
}