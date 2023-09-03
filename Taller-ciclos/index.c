// Presentado por Juan David García Arce.

#include <stdio.h>
//Para usar pow
#include <math.h>

int main () {

    int opcion, contadorOpcion = 0 ;

    printf("Ingrese una opción:\n");
    while( contadorOpcion < 12  )
    {
        contadorOpcion++;
        printf("%d. Programa %d\n", contadorOpcion, contadorOpcion);
    }
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        // Programa No 1. Realizar un algoritmo que permita escribir los
        // n primeros múltiplos de m, su suma y su producto el algoritmo
        // ha de tener la posibilidad de volver a empezar.
        printf("Programa 1:\n");
        int n, m, numero, suma = 0, producto = 1, contador = 0;
        printf("Ingrese n: ");
        scanf("%d", &n);
        printf("Ingrese m: ");
        scanf("%d", &m);
        while (contador < n)
        {
            contador++;
            numero = m * contador;
            printf("%d ", numero);
            suma += numero;
            producto *= numero;
        }
        printf("\nSuma: %d\n", suma);
        printf("Producto: %d\n", producto);
        break;
    //____________________________________________________________________
    case 2:
        // Problema No 2. Diseñe un algoritmo que reciba un número
        // entero positivo y produzca en la pantalla la tabla de multiplicar,
        // la tabla del div (división entera) y la tabla del mod (residuo de la
        // división entera) correspondientes a ese número. Por ejemplo, si
        // el usuario digita como entrada el número 5, las tablas que debe
        // producir el programa son:
        printf("Programa 2\n");
        int numero2, contador2 = 0;
        printf("Ingrese un número: ");
        scanf("%d", &numero2);
        while (contador2 < 10)
        {
            contador2++;
            printf("%d * %d = %d\n", numero2, contador2, numero2 * contador2);
        }
        printf("\n");
        contador2 = 0;
        while (contador2 < 10)
        {
            contador2++;
            printf("%d div %d = %d\n", numero2, contador2, numero2 / contador2);
        }
        printf("\n");
        contador2 = 0;
        while (contador2 < 10)
        {
            contador2++;
            printf("%d mod %d = %d\n", numero2, contador2, numero2 % contador2);
        }
        break;
    //____________________________________________________________________
    case 3:
        // Problema No 3. Diseñe un algoritmo que lea caracteres, uno
        // por uno, hasta que el usuario digite el carácter punto. Después
        // de que el usuario haya digitado el carácter punto, el programa
        // debe mostrar las siguientes estadísticas, en las cuales el punto no
        // se considera:
        //  Número de letras
        //  Números de dígitos
        //  Números de otros símbolos (aquellos que no son ni
        // dígitos ni letras)
        //  Número total de símbolos leídos
        printf("Programa 3\n");
        char caracter = 'a';
        int contadorLetras = 0, contadorDigitos = 0, contadorOtros = 0, contadorTotal = 0;
        while (caracter != '.')
        {
            getchar();
            printf("Ingrese un caracter: ");
            scanf("%c", &caracter);
            if(caracter != '.')
            {
                contadorTotal++;
            }
            if (((caracter >= 'a') && (caracter <= 'z')) || ((caracter >= 'A') && (caracter <= 'Z')))
            {
                contadorLetras++;
            }
            else if (caracter >= '0' && caracter <= '9')
            {
                contadorDigitos++;
            }
            else if (caracter != '.')
            {
                contadorOtros++;
            }

        }
        printf("Número de letras: %d\n", contadorLetras);
        printf("Número de dígitos: %d\n", contadorDigitos);
        printf("Número de otros símbolos: %d\n", contadorOtros);
        printf("Número total de símbolos leídos: %d\n", contadorTotal);
        break;
    //____________________________________________________________________
    case 4:
        // Problema No 4. Calcular factorial y la sumatoria de un número
        // entero par introducido por teclado.
        printf("Programa 4\n");
        int numero4, contador4 = 0, factorial = 1, sumatoria = 0;
        printf("Ingrese un número: ");
        scanf("%d", &numero4);
        while (contador4 < numero4)
        {
            contador4++;
            factorial *= numero4;
            sumatoria += numero4;

        }
        if (numero4 % 2 == 0)
        {
        printf("Factorial: %d\n", factorial);
        printf("Sumatoria: %d\n", sumatoria);
        } else {
            printf("El número no es par\n");
        }

        break;
    //____________________________________________________________________
    case 5:
        // Problema No 5. Calcular de la suma y la media aritmética de N
        // números reales. Solicitar el valor de N al usuario y cada uno de
        // los N números reales.
        printf("Programa 5\n");
        int N5;
        double suma5 = 0.0;
        int contador5 = 0;

        printf("Ingrese el valor de N5: ");
        scanf("%d", &N5);

        while (contador5 < N5) {
            double numero;
            printf("Ingrese el número %d: ", contador5 + 1);
            scanf("%lf", &numero);
            suma5 += numero;
            contador5++;
        }

        double media5 = suma5 / N5;

        printf("La suma de los %d números es: %lf\n", N5, suma5);
        printf("La media aritmética de los %d números es: %lf\n", N5, media5);

        break;
    //____________________________________________________________________
    case 6:
        // Problema No 6. Escribir un programa que lea desde teclado un
        // valor N, seguido de N números, y calcule la media de los
        // números positivos y la media de los números negativos.
        printf("Programa 6\n");
        double N6, numero6, contador6 = 0.0, contadorPositivos = 0.0, contadorNegativos = 0.0;
        double sumaPositivos = 0.0, sumaNegativos = 0.0;
        printf("Ingrese la cantidad de numeros: ");
        scanf("%lf", &N6);
        while (contador6 < N6)
        {
            contador6++;
            printf("Ingrese el número %.0lf: ", contador6);
            scanf("%lf", &numero6);
            if (numero6 > 0)
            {
                sumaPositivos += numero6;
                contadorPositivos++;
            }
            else
            {
                sumaNegativos += numero6;
                contadorNegativos++;
            }
        }
        printf("La media de los números positivos es: %lf\n", sumaPositivos / contadorPositivos);
        printf("La media de los números negativos es: %lf\n", sumaNegativos / contadorNegativos);
        break;
    //____________________________________________________________________
    case 7:
        // Problema No 7. Escribir un programa que pidiendo un valor N
        // seguido de N números, calcule el máximo y mínimo de ese
        // conjunto de N números.
        printf("Programa 7\n");
        int N7, numero7, maximo7 = -9999, minimo7 = 9999;
        int contador7 = 0;
        printf("Ingrese la cantidad de numeros: ");
        scanf("%d", &N7);
        while (contador7 < N7)
        {
            contador7++;
            printf("Ingrese el número %d: ", contador7);
            scanf("%d", &numero7);
            if (numero7 > maximo7)
            {
                maximo7 = numero7;
            }
            if (numero7 < minimo7)
            {
                minimo7 = numero7;
            }
        }
        printf("El máximo es: %d\n", maximo7);
        printf("El mínimo es: %d\n", minimo7);
        break;
    //____________________________________________________________________
    case 8:
        // Problema No 8. Leer n valores desde teclado y mostrar la
        // media de los pares y la media de los impares.
        printf("Programa 8\n");
        int n8, numero8, contador8 = 0, contadorPares = 0, contadorImpares = 0;
        double sumaPares = 0.0, sumaImpares = 0.0;
        printf("Ingrese la cantidad de numeros: ");
        scanf("%d", &n8);
        while (contador8 < n8)
        {
            contador8++;
            printf("Ingrese el número %d: ", contador8);
            scanf("%d", &numero8);
            if (numero8 % 2 == 0)
            {
                sumaPares += numero8;
                contadorPares++;
            }
            else
            {
                sumaImpares += numero8;
                contadorImpares++;
            }
        }
        printf("La media de los números pares es: %lf\n", sumaPares / contadorPares);
        printf("La media de los números impares es: %lf\n", sumaImpares / contadorImpares);
        break;
    //____________________________________________________________________
    case 9:
        // Problema No 9. J. P. Montoya desea comprar a crédito un
        // Ferrari modelo 2012 en el concesionario “EL ALERÓN”. La
        // forma de pago incluye las siguientes cláusulas:
        // 1. El monto de la cuota inicial debe ser como mínimo del 20%
        // del valor total del carro.
        // 2. El valor restante (valor total menos valor de la cuota inicial)
        // se puede pagar en 12, 24 o 36 cuotas mensuales.
        // 3. A cada cuota mensual se le carga un interés del 5% sobre el
        // saldo de la deuda.
        // Escriba un programa que reciba como entrada el costo del
        // Ferrari, el valor de la cuota inicial, y el plazo del crédito, y
        // produzca como salida el valor de cada una de las cuotas
        // mensuales.
        printf("Programa 9\n");
        double costo9, cuotaInicial9, plazo9, saldo9, interes9;
        printf("Ingrese el costo del Ferrari: ");
        scanf("%lf", &costo9);
        printf("Ingrese el valor de la cuota inicial: ");
        scanf("%lf", &cuotaInicial9);
        printf("Ingrese el plazo del crédito: ");
        scanf("%lf", &plazo9);
        saldo9 = costo9 - cuotaInicial9;
        interes9 = (saldo9 / plazo9) * 0.05;
        saldo9 = (saldo9 / plazo9) + interes9;
        while (plazo9 > 0)
        {
            printf("cuota%.0lf: %.1lf\n", plazo9, saldo9);
            saldo9 += interes9;
            plazo9--;
        }
        break;
    case 10:
        printf("Programa 10\n");
        printf("El profe no puso enunciado.\n");
        break;
    //____________________________________________________________________
    case 11:
        // La Universidad desea saber cuál será su promedio general de N
        // alumnos en las tres materias más difíciles que cursan y cuál
        // será el promedio que obtendrá en cada una de ellas (materias)
        // los N alumnos.
        // Estas materias se evalúan como se muestra a continuación:
        //  La calificación de matemáticas se obtiene de la
        // siguiente manera: Examen 90%. Promedio de las tares
        // 10%; En esta materia se pidió un total de tres tareas.
        //  La calificación de física se obtiene de la siguiente
        // manera: Examen 80%. Promedio de tares 20%; En esta
        // materia se pidió un total de dos tareas.
        //  La calificación de química se obtiene de la siguiente
        // manera: Examen 85%. Promedio de tareas 15%; En
        // esta materia se pidió un total de tres tareas.
        // Además se debe visualizar las 2 materias con la nota de mayor
        // y menor de cada alumno.
        // El promedio general de la carrera de cada alumno donde a la
        // mayor se le aplica un 50 %, a la menor un 20% y a la intermedio
        // un 30%
        // Por último el promedio general de los N alumnos.
        printf("Programa 11\n");
        int N11, contador11 = 0;
        double notaMatematicas, notaFisica, notaQuimica, promedioGeneral, promedioMatematicas, promedioFisica, promedioQuimica;
        double notaMayor, notaMenor, notaIntermedia, promedioGeneralCarrera;
        double sumaMatematicas = 0.0, sumaFisica = 0.0, sumaQuimica = 0.0;
        double sumaPromedioGeneralCarrera = 0.0, sumaPromedioGeneralAlumnos = 0.0;
        double sumaNotaMayor = 0.0, sumaNotaMenor = 0.0, sumaNotaIntermedia = 0.0;
        printf("Ingrese la cantidad de alumnos: ");
        scanf("%d", &N11);
        while (contador11 < N11)
        {
            contador11++;
            printf("Ingrese la nota de matemáticas del alumno %d: ", contador11);
            scanf("%lf", &notaMatematicas);
            printf("Ingrese la nota de física del alumno %d: ", contador11);
            scanf("%lf", &notaFisica);
            printf("Ingrese la nota de química del alumno %d: ", contador11);
            scanf("%lf", &notaQuimica);
            promedioMatematicas = (notaMatematicas * 0.9) + ((notaMatematicas / 3) * 0.1);
            promedioFisica = (notaFisica * 0.8) + ((notaFisica / 2) * 0.2);
            promedioQuimica = (notaQuimica * 0.85) + ((notaQuimica / 3) * 0.15);
            promedioGeneral = (promedioMatematicas + promedioFisica + promedioQuimica) / 3;
            sumaMatematicas += promedioMatematicas;
            sumaFisica += promedioFisica;
            sumaQuimica += promedioQuimica;
            sumaPromedioGeneralAlumnos += promedioGeneral;
            if (promedioMatematicas > promedioFisica && promedioMatematicas > promedioQuimica)
            {
                notaMayor = promedioMatematicas;
                if (promedioFisica > promedioQuimica)
                {
                    notaIntermedia = promedioFisica;
                    notaMenor = promedioQuimica;
                }
                else
                {
                    notaIntermedia = promedioQuimica;
                    notaMenor = promedioFisica;
                }
            }
            else if (promedioFisica > promedioMatematicas && promedioFisica > promedioQuimica)
            {
                notaMayor = promedioFisica;
                if (promedioMatematicas > promedioQuimica)
                {
                    notaIntermedia = promedioMatematicas;
                    notaMenor = promedioQuimica;
                }
                else
                {
                    notaIntermedia = promedioQuimica;
                    notaMenor = promedioMatematicas;
                }
            }
            else
            {
                notaMayor = promedioQuimica;
                if (promedioMatematicas > promedioFisica)
                {
                    notaIntermedia = promedioMatematicas;
                    notaMenor = promedioFisica;
                }
                else
                {
                    notaIntermedia = promedioFisica;
                    notaMenor = promedioMatematicas;
                }
            }
            sumaNotaMayor += notaMayor;
            sumaNotaMenor += notaMenor;
            sumaNotaIntermedia += notaIntermedia;
            promedioGeneralCarrera = (notaMayor * 0.5) + (notaIntermedia * 0.3) + (notaMenor * 0.2);
            sumaPromedioGeneralCarrera += promedioGeneralCarrera;
            printf("Promedio general del alumno %d: %lf\n", contador11, promedioGeneral);
            printf("Promedio general de la carrera del alumno %d: %lf\n", contador11, promedioGeneralCarrera);
        }
        printf("Promedio general de los alumnos: %lf\n", sumaPromedioGeneralAlumnos / N11);
        printf("Promedio general de la carrera: %lf\n", sumaPromedioGeneralCarrera / N11);
        printf("Promedio general de matemáticas: %lf\n", sumaMatematicas / N11);
        printf("Promedio general de física: %lf\n", sumaFisica / N11);
        printf("Promedio general de química: %lf\n", sumaQuimica / N11);
        printf("Promedio general de la nota mayor: %lf\n", sumaNotaMayor / N11);
        printf("Promedio general de la nota intermedia: %lf\n", sumaNotaIntermedia / N11);
        printf("Promedio general de la nota menor: %lf\n", sumaNotaMenor / N11);
        break;
    //____________________________________________________________________
    case 12:
        // Problema No 12. Desarrollar un programa que permita
        // encontrar el término n-esimo con su valor y su sumatoria hasta
        // ese término de la serie de la forma:
        // Se debe garantizar que x este entre 1 y 10.
        printf("Programa 12\n");
        int x12, n12, contador12 = 0;
        printf("Ingrese x:\n");
        scanf("%d", &x12);
        printf("Ingrese el numero de terminos:\n");
        scanf("%d", &n12);
        if(x12 < 1 || x12 > 10)
        {
            printf("x debe estar entre 1 y 10\n");
            break;
        }
        while (contador12 < n12)
        {
            contador12++;
            printf("((x-1)^%d)/%d! ", contador12, contador12);
        }
        printf("\n=");
        contador12 = 0;
        while (contador12 < n12)
        {
            contador12++;
            printf("%.1f ", (pow( (x12 - 1), contador12) / (pow(contador12, contador12))));
        }
        break;
    default:
        printf("Opción no válida\n");
        break;
    }
    return 0;
}