//Presentado por Juan David García Arce



#include<stdio.h>

int main () {

    int opcion, numero , numero1, numero2, numero3, numero4, numero5, numero6, numero7, numero8, numero9, numero10, opciontriangulo;
    int mayor = 0;
    int menor = 9999;
    char letra;

    printf("¿Qué ejercicio deseas ejecutar?:\n");
    printf("1. Que pida un número del 1 al 5 y diga si es primo o no.\n");
    printf("2. Que pida un numero y diga si es par o impar.\n");
    printf("3. Que pida un numero del 1 al 7 y diga el dia de la semanna correspondiente.\n");
    printf("4. Que pida un numero del 1 al 12 y diga el mes correspondiente.\n");
    printf("5. Que pida 3 numeros y los muestre en pantalla de menor a mayor.\n");
    printf("6. Que pida 3 numeros y los muestre en pantalla de mayor a menor.\n");
    printf("7. Que pida 3 numeros y los muestre en pantalla de mayor a menor en lineas distintas.\n");
    printf("8. Que pida un número y diga si el número es positivo o negativo.\n");
    printf("9. Que pida introducir solo los caracteres S y N.\n");
    printf("10. Que pida un numero y diga si es mayor que 100.\n");
    printf("11. Que pida una letra y detecte si es una vocal.\n");
    printf("12. Que ingrese tres numeros y determine si se ingresaron en orden creciente.\n");
    printf("13. Que ingrese tres numeros y determine si se ingresaron en orden decreciente.\n");
    printf("14. Que pida 10 números y diga cual es el mayor y cual es el menor.\n");
    printf("15. Que pida tres numeros e indique si el el tercero es igual a la suma del primero y el segundo.\n");
    printf("16. Que muestre en un amenu que contemple las opciones 'Archivo', 'Buscar' y 'Salir'.\n");
    printf("17. Que tome 2 numeros del 1 al 5 y diga si ambos son primos.\n");
    printf("18. Que tome dos numeross y diga si ambos son pares o impares.\n");
    printf("19. Que tome tres numeros y verifique si la multiplicacion de los dos primeros es igual al tercero.\n");
    printf("20. Que tome tres numeros y verifique si la division de los dos primeros es igual al tercero.\n");
    printf("21. Que muestre en un amenu que contemple las opciones 'Equilatero', 'isoseles' y 'escaleno' y calcule el permitero del triangulo seleccionado.\n");
    printf("22. Que muestre un menu para pasar de kg a gr o ton.\n");
    scanf("%d", &opcion);
    


    if ( opcion == 1) {
        //-------------------------------------------------------------------------------------------- 

        //1. Que pida un número del 1 al 5 y diga si es primo o no.

        printf("Ingrese un numero del 1 al 5: ");
        scanf("%d", &numero);
        if (numero == 1 || numero == 2 || numero == 3 || numero == 5) {
            printf("El numero %d es primo\n", numero);
        } else {
            printf("El numero %d no es primo\n", numero);
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 2) {
        //2. Que pida un numero y diga si es par o impar.

        printf("Ingrese por favor un numero para determinar si su numero es  par o  es impar:\n");
        scanf("%d", &numero);
        if (numero %2 == 0)
        {
        printf("El numero %d es par\n", numero);
        } else {
            printf("El numero %d no es par\n", numero);
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 3) {
        //3. Que pida un numero del 1 al 7 y diga el dia de la semanna correspondiente.

        printf("Ingrese un numero del 1 al 7 para determinar el dia de la semana correspondiente:\n");
        scanf("&d", numero);
        if ( numero == 1 ){
            printf("El dia de la semana es Lunes\n");
        } else if ( numero ==2 ){
            printf("El dia de la semana es Martes\n");
        } else if( numero == 3 ){ 
            printf("El dia de la semana es Miercoles\n");
        } else if (numero == 4){
            printf("El dia de la semana es Jueves\n");
        } else if (numero == 5){
            printf("El dia de la semana es Viernes\n");
        } else if (numero == 6){
            printf("El dia de la semana es Sabado\n");
        } else if (numero == 7){
            printf("El dia de la semana es Domingo\n");
        } else {
            printf("El numero no corresponde a un dia de la semana\n");
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 4) {
        //4. Que pida un numero del 1 al 12 y diga el mes correspondiente.

        printf("Ingrese un numero del 1 al 12 para determinar el mes correspondiente:\n");
        scanf("&d", numero);
        if ( numero == 1 ){
            printf("El mes es Enero\n");
        } else if ( numero ==2 ){
            printf("El mes es Febrero\n");
        } else if( numero == 3 ){ 
            printf("El mes es Marzo\n");
        } else if (numero == 4){
            printf("El mes es Abril\n");
        } else if (numero == 5){
            printf("El mes es Mayo\n");
        } else if (numero == 6){
            printf("El mes es Junio\n");
        } else if (numero == 7){
            printf("El mes es Julio\n");
        } else if (numero == 8){
            printf("El mes es Agosto\n");
        } else if (numero == 9){
            printf("El mes es Septiembre\n");
        } else if (numero == 10){
            printf("El mes es Octubre\n");
        } else if (numero == 11){
            printf("El mes es Noviembre\n");
        } else if (numero == 12){
            printf("El mes es Diciembre\n");
        } else {
            printf("El numero no corresponde a un mes\n");
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 5) {
        //5. Que pida 3 numeros y los muestre en pantalla de menor a mayor.


        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        printf("Ingrese el tercer numero:\n");
        scanf("%d", &numero3);

        if ( numero1 < numero2 && numero2 < numero3 ){
            printf("El orden de los numeros es: %d, %d, %d\n", numero1, numero2, numero3);
        } else if ( numero1 < numero3 && numero3  < numero2 ){
            printf("El orden de los numeros es: %d, %d, %d\n", numero1, numero3, numero2);
        } else if ( numero2 < numero1 && numero1 < numero3 ){
            printf("El orden de los numeros es: %d, %d, %d\n", numero2, numero1, numero3);
        } else if ( numero2 < numero3 && numero3 < numero1 ){
            printf("El orden de los numeros es: %d, %d, %d\n", numero2, numero3, numero1);
        } else if ( numero3 < numero1 && numero1 < numero2 ){
            printf("El orden de los numeros es: %d, %d, %d\n", numero3, numero1, numero2);
        } else if ( numero3 < numero2 && numero2 < numero1 ){
            printf("El orden de los numeros es: %d, %d, %d\n", numero3, numero2, numero1);
        } else {
            printf("Los numeros son iguales\n");
        }   
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 6) {
        //6. Que pida 3 numeros y los muestre en pantalla de mayor a menor.

        printf("Ingrese el primer numero:\n");

        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        printf("Ingrese el tercer numero:\n");
        scanf("%d", &numero3);

        if ( numero1 > numero2 > numero3 ){
            printf("El orden de los numeros es: %d, %d, %d\n", numero1, numero2, numero3);
        } else if ( numero1 > numero3 && numero3 > numero2 ){
            printf("El orden de los numeros es: %d, %d, %d\n", numero1, numero3, numero2);
        } else if ( numero2 > numero1 && numero1 > numero3 ){
            printf("El orden de los numeros es: %d, %d, %d\n", numero2, numero1, numero3);
        } else if ( numero2 > numero3 && numero3 > numero1 ){
            printf("El orden de los numeros es: %d, %d, %d\n", numero2, numero3, numero1);
        } else if ( numero3 > numero1 && numero1 > numero2 ){
            printf("El orden de los numeros es: %d, %d, %d\n", numero3, numero1, numero2);
        } else if ( numero3 > numero2 && numero2 > numero1 ){
            printf("El orden de los numeros es: %d, %d, %d\n", numero3, numero2, numero1);
        } else {
            printf("Los numeros son iguales\n");
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 7) {
        //7. Que pida 3 numeros y los muestre en pantalla de mayor a menor en lineas distintas.

        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);  
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        printf("Ingrese el tercer numero:\n");
        scanf("%d", &numero3);

        if ( numero1 < numero2 < numero3 ){
            printf("El orden de los numeros es: %d\n %d\n %d\n", numero1, numero2, numero3);
        } else if ( numero1 < numero3 && numero3 < numero2 ){
            printf("El orden de los numeros es: %d\n %d\n %d\n", numero1, numero3, numero2);
        } else if ( numero2 < numero1 && numero1 < numero3 ){
            printf("El orden de los numeros es: %d\n %d\n %d\n", numero2, numero1, numero3);
        } else if ( numero2 < numero3 && numero3 < numero1 ){
            printf("El orden de los numeros es: %d\n %d\n %d\n", numero2, numero3, numero1);
        } else if ( numero3 < numero1 && numero1 < numero2 ){
            printf("El orden de los numeros es: %d\n %d\n %d\n", numero3, numero1, numero2);
        } else if ( numero3 < numero2 && numero2 < numero1 ){
            printf("El orden de los numeros es: %d\n %d\n %d\n", numero3, numero2, numero1);
        } else {
            printf("Los numeros son iguales\n");
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 8) {
        //8. Que pida un número y diga si el número es positivo o negativo.

        printf("Ingrese un numero para determinar si es positivo o negativo:\n");
        scanf("%d", &numero);
        if (numero > 0){
            printf("El numero %d es positivo\n", numero);
        } else {
            if (numero == 0){
                printf("El numero es 0\n");
            } else {
            printf("El numero %d es negativo\n", numero);
        }
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 9) {
        //9. Que pida introducir solo los caracteres S y N.

        printf("Ingrese una letra:\n");
        scanf("%c", &letra);
        if(letra == 's' || letra == 'n'){
            printf("la letra ingresada fue %c\n", letra);
        } else{
            printf("La letra ingresada no es valida\n");   
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 10) {   
        //10. Que pida un numero y diga si es mayor que 100.

        printf("Ingrese un numero para determinar si es mayor que 100:\n");
        scanf("%d", &numero);
        if (numero > 100){
            printf("El numero %d es mayor que 100\n", numero);
        } else {
            printf("El numero %d no es mayor que 100\n", numero);
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 11 ) {
        //11. Que pida una letra y detecte si es una vocal.
        printf("Por favor ingrese una letra para determinar si es una vocal:\n");
        scanf("%c", &letra);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
            printf("La letra %c es una vocal\n", letra);
        } else {
            printf("La letra %c no es una vocal\n", letra);
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 12 ) {
        //12. Que ingrese tres numeros y determine si se ingresaron en orden creciente.
        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);  
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        printf("Ingrese el tercer numero:\n");
        scanf("%d", &numero3);
        if ( numero1 < numero2 && numero2 < numero3 ){
            printf("Los numeros estan en orden creciente.\n");
        } else {
            printf("Los numeros no estan en orden creciente.\n");
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 13 ) {
        //13. Que ingrese tres numeros y determine si se ingresaron en orden decreciente.
        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);  
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        printf("Ingrese el tercer numero:\n");
        scanf("%d", &numero3);
        if ( numero1 > numero2 && numero2 > numero3 ){
            printf("Los numeros estan en orden decreciente.\n");
        } else {
            printf("Los numeros no estan en orden decreciente.\n");
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 14 ) {
        //14. que pida 10 números y diga cual es el mayor y cual es el menor.
        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);  
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        printf("Ingrese el tercer numero:\n");
        scanf("%d", &numero3);
        printf("Ingrese el cuarto numero:\n");
        scanf("%d", &numero4);
        printf("Ingrese el quinto numero:\n");
        scanf("%d", &numero5);
        printf("Ingrese el sexto numero:\n");
        scanf("%d", &numero6);
        printf("Ingrese el septimo numero:\n");
        scanf("%d", &numero7);
        printf("Ingrese el octavo numero:\n");
        scanf("%d", &numero8);
        printf("Ingrese el noveno numero:\n");
        scanf("%d", &numero9);
        printf("Ingrese el decimo numero:\n");
        scanf("%d", &numero10);
        if ( mayor < numero1 ){
            mayor = numero1;
        }
        if ( mayor < numero2 ){
            mayor = numero2;
        }
        if ( mayor < numero3 ){
            mayor = numero3;
        }
        if ( mayor < numero4 ){
            mayor = numero4;
        }
        if ( mayor < numero5 ){
            mayor = numero5;
        }
        if ( mayor < numero6 ){
            mayor = numero6;
        }
        if ( mayor < numero7 ){
            mayor = numero7;
        }
        if ( mayor < numero8 ){
            mayor = numero8;
        }
        if ( mayor < numero9 ){
            mayor = numero9;
        }
        if ( mayor < numero10 ){
            mayor = numero10;
        }
        printf("El numero mayor es: %d\n", mayor);
        if ( menor > numero1 ){
            menor = numero1;
        }
        if ( menor > numero2 ){
            menor = numero2;
        }
        if ( menor > numero3 ){
            menor = numero3;
        }
        if ( menor > numero4 ){
            menor = numero4;
        }
        if ( menor > numero5 ){
            menor = numero5;
        }  
        if ( menor > numero6 ){
            menor = numero6;
        }
        if ( menor > numero7 ){
            menor = numero7;
        }
        if ( menor > numero8 ){
            menor = numero8;
        }
        if ( menor > numero9 ){
            menor = numero9;
        }
        if ( menor > numero10 ){
            menor = numero10;
        }
        printf("El numero menor es: %d\n", menor);
        }else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 15 ) {
        //15. Que pida tres numeros e indique si el el tercero es igual a la suma del primero y el segundo.
        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        printf("Ingrese el tercer numero:\n");
        scanf("%d", &numero3);
        if ( numero3 == ( numero1 + numero2 ) ){
            printf("El tercer numero es igual a la suma del primero y el segundo\n");
        } else {
            printf("El tercer numero no es igual a la suma del primero y el segundo\n");
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 16 ) {
        //16. Que muestre en un amenu que contemple las opciones "Archivo", "Buscar" y "Salir".
        printf("1. Archivo\n");
        printf("2. Buscar\n");
        printf("3. Salir\n");
        scanf("%d", &opcion);
        if ( opcion == 1 ){
            printf("Usted selecciono la opcion Archivo\n");
        } else if ( opcion == 2 ){
            printf("Usted selecciono la opcion Buscar\n");
        } else if ( opcion == 3 ){
            printf("Usted selecciono la opcion Salir\n");
        } else {
            printf("La opcion ingresada no es valida\n");
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 17 ) {
        //17. Que tome 2 numeros del 1 al 5 y diga si ambos son primos.
        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        if ((numero1 == 1 || numero1 == 2 || numero1 == 3 || numero1 == 5) && (numero2 == 1 || numero2 == 2 || numero2 == 3 || numero2 == 5) ) {
            printf("El numero %d es primo\n", numero1);
        } else {
            printf("El numero %d no es primo\n", numero1);
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 18 ) {
        //18. Que tome dos numeross y diga si ambos son pares o impares.
        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        if ((numero1 %2 == 0) && (numero2 %2 == 0))
        {
        printf("Los numeros %d y %d son pares\n", numero1, numero2);
        } else {
            printf("Los numeros %d y %d no son pares\n", numero1, numero2);
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 19 ) {
        //19. Que tome tres numeros y verifique si la multiplicacion de los dos primeros es igual al tercero.
        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        printf("Ingrese el tercer numero:\n");
        scanf("%d", &numero3);
        if ( numero3 == ( numero1 * numero2 ) ){
            printf("El tercer numero es igual a la multiplicacion del primero y el segundo\n");
        } else {
            printf("El tercer numero no es igual a la multiplicacion del primero y el segundo\n");
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 20 ) {
        //20. 19. Que tome tres numeros y verifique si la division de los dos primeros es igual al tercero.
        printf("Ingrese el primer numero:\n");
        scanf("%d", &numero1);
        printf("Ingrese el segundo numero:\n");
        scanf("%d", &numero2);
        printf("Ingrese el tercer numero:\n");
        scanf("%d", &numero3);
        if ( numero3 == ( numero1 / numero2 ) ){
            printf("El tercer numero es igual a la division del primero y el segundo\n");
        } else {
            printf("El tercer numero no es igual a la division del primero y el segundo\n");
        }
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 21 ) {
        //21. Que muestre en un amenu que contemple las opciones "Equilatero", "isoseles" y "escaleno" y calcule el permitero del triangulo seleccionado.
        printf("1. Equilatero\n");
        printf("2. Isoseles\n");
        printf("3. Escaleno\n");
        scanf("%d", &opciontriangulo);
        printf("Ingrese el primer lado del triangulo:\n");
        scanf("%d", &numero1);
        printf("Ingrese el segundo lado del triangulo:\n");
        scanf("%d", &numero2);
        printf("Ingrese el tercer lado del triangulo:\n");
        scanf("%d", &numero3);
        int perimetro = numero1 + numero2 + numero3;
        if ( opciontriangulo == 1 ){
            printf("Usted selecciono la opcion Equilatero\n");
            printf("El perimetro del triangulo es: %d\n", perimetro);
        } else if ( opciontriangulo == 2 ){
            printf("Usted selecciono la opcion Isoseles\n");
            printf("El perimetro del triangulo es: %d\n", perimetro);
        } else if ( opciontriangulo == 3 ){
            printf("Usted selecciono la opcion Escaleno\n");
            printf("El perimetro del triangulo es: %d\n", perimetro);
        } else {
            printf("La opcion ingresada no es valida\n");
        }

        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 22 ) {
        //22. Que muestre un menu para pasar de kg a gr o ton.
        int opcionpeso;
        int peso;
        printf("1. Kilogramos a gramos\n");
        printf("2. Kilogramos a toneladas\n");
        scanf("%d", &opcionpeso);
        printf("Ingrese el peso a convertir:\n");
        scanf("%d", &peso);

        if ( opcionpeso == 1 ){
            int peso = peso * 1000;
            printf("El peso en gramos es: %d\n", peso);
        } else if ( opcionpeso == 2 ){
            int peso = peso / 1000;
            printf("El peso en toneladas es: %d\n", peso);
        } else {
            printf("La opcion ingresada no es valida\n");
        }

        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 23 ) {
        //23. Que tome tres numeros y verifique si la suma de los dos primeros es igual al tercero.
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 24 ) {
        //24. Que tome tres numeros y verifique si la suma de los dos primeros es igual al tercero.
        } else
        //--------------------------------------------------------------------------------------------
        if ( opcion == 25 ) {
        //25. Que tome tres numeros y verifique si la suma de los dos primeros es igual al tercero.

        } else {
            printf("La opcion ingresada no es valida\n");
        }
        
        return 0;

}