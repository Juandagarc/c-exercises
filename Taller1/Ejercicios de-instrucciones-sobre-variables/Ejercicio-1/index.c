#include <stdio.h>
#include <stdbool.h>//Libreria para usar el tipo de dato bool
#include <math.h>//Libreria para usar la funcion sqrt

int main() {

    // Declaración de variables

    //Flotantes:
    float x, v, p;
    //Enteros:
    int cont, i, k;//i no se utiliza
    //Caracteres:
    char letra, c;
    //--------------------
    //band y terminar no se usan en el programa: No es valido.
    //Booleanos:
    // bool band, terminar;
    //--------------------
    //Constantes:
    const int MAX = 100;
//--------------------------------------------------------------
    // Instrucciones

    //Se pide la variable letra como un caracter: correcto.
    printf("Ingrese un caracter: ");
    scanf("%c", &letra);
    //Se imprime la variable max como un entero: correcto.
    printf("Max: %d\n", MAX);
    //Se pide la variable cont como un entero: correcto.
    printf("Ingrese un numero entero (cont): ");
    scanf("%d", &cont);
    //Se pide la variable x como un flotante: correcto.
    printf("Ingrese un numero real (x): ");
    scanf("%f", &x);
//--------------------------------------------------------------
    // //Se pide la constante MAX como un entero: No es valido.
    // printf("Ingrese un numero entero (Max): ");
    // scanf("%d", &MAX);
    //Se pide la variable v como un flotante: correcto.
//--------------------------------------------------------------
    //Se pide la variable v como un flotante: correcto.
    printf("Ingrese un numero real (v): ");
    scanf("%f", &v);
    //Se define x: correcto.
    // x = (float)k + 2.0 * M_PI; variable 'k' no está inicializada cuando se usa aquí
    //Se define letra: correcto.
    letra = 'p';
    //Se pide c como un caracter: correcto.
    printf("Ingrese un caracter: ");
    scanf(" %c", &c); // Espacio en blanco antes de %c para consumir el salto de línea anterior
    //Se pide p como un flotante: correcto.
    printf("Ingrese un numero real (p): ");
    scanf("%f", &p);
//--------------------------------------------------------------
// Las siguientes instrucciones no son válidas debido a los requisitos del ejercicio

    // p = v / x * sqrt(p) - band;
    // Explicación: No se puede realizar operaciones matemáticas con un valor booleano (band).

    // x = "3.2444" + "1.4e-4";
    // Explicación: Los valores están entre comillas dobles, lo que los trata como cadenas de caracteres.
    // No se pueden sumar cadenas de caracteres de esta manera en C.

    // x = 'v' + 'p';
    // Explicación: Sumar caracteres directamente no tiene sentido en C, ya que se representan como valores numéricos según ASCII.

    // terminar = p > v >= x;
    // Explicación: La comparación de booleanos (>=) en esta forma no es válida.
    // Además, la comparación p > v >= x debe dividirse en dos comparaciones separadas: (p > v) && (v >= x).

    // terminar = "falso";
    // Explicación: "falso" está entre comillas dobles y se trata como una cadena de caracteres.
    // Los valores booleanos en C son verdadero (1) o falso (0), no cadenas de caracteres.

    // terminar = 'f' <= letra;
    // Explicación: Comparar caracteres directamente con el operador <= no tiene un significado lógico claro.

    // x + 3.0 = v;
    // Explicación: No se puede asignar un valor a una expresión como x + 3.0 en C.
    // La asignación debe ser en la dirección opuesta: v = x + 3.0;

    // band = (x + v) * p || terminar || cont <= k + i;
    // Explicación: Está mezclando operaciones matemáticas y booleanas de manera incorrecta.
    // Además, hay errores en la sintaxis de la expresión booleana.
//--------------------------------------------------------------
    //Se define v: correcto.
    v = x * p + (float)(letra + (int)c);
    //Se define k: correcto.
    k = (int)(letra + (int)c) + k;

    return 0;
}
