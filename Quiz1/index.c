//Presentado por: Juan David García Arce.
//                Johan Boshell Longas.
//                Maximiliano Giraldo Ocampo.


#include <stdio.h>
//Libreria de matematicas
#include <math.h>

int main () {
    //1. Se realizan las siguientes funciones en c.

    //a. valor absoluto de (-5)
    printf("El valor absoluto de -5 es: %d\n", abs(-5));   

    //b. cuadrado(20) + cuadrado(-5)
    printf("El cuadrado de 20 + el cuadrado de -5 es: %.1f\n", (pow(20,2) + pow(-5,2)));

    //c. raíz cuadrada (100) + valor absoluto de (10)
    printf("La raiz cuadrada de 100 + el valor absoluto de 10 es: %.1f\n", (sqrt(100) + abs(10)));
    

    //d. piso (7.5) + techo de (-0.5)
    printf("El piso de 7.5 + el techo de -0.5 es: %.1f\n", (floor(7.5) + ceil(-0.5)));

    //e. potencia de (4, 5) + raíz cúbica de (15)
    printf("La potencia de 4 elevado a 5 + la raiz cubica de 15 es: %.1f\n", (pow(4,5) + cbrt(15)));

    // 2. Se realizan la siguiente operaciones en .

    //a. Formula del volumen de un cono truma =  PI * ( R^2 + r^2 + (R * r)) * (h/3)
    printf("a. Formula del volumen de un cono truma.\n");
    printf("Ingrese el radio mayor del cono trunco: ");
    float R;
    scanf("%f", &R);
    printf("Ingrese el radio menor del cono trunco: ");
    float r;
    scanf("%f", &r);
    printf("Ingrese la altura del cono trunco: ");
    float h;
    scanf("%f", &h);
    //Se define pi como una constante
    #define M_PI 3.14159265358979323846
    printf("El volumen del cono trunco es: %.1f\n", (M_PI * (pow(R,2) + pow(r,2) + (R * r)) * (h/3)));

    //b. Fahrenheit_a_celsius = (F-32)*(5/9)
    printf("b. Fahrenheit a celsius.\n");
    printf("Ingrese la temperatura en grados Fahrenheit: ");
    float F;
    scanf("%f", &F);
    printf("La temperatura en grados celsius es: %.1f\n", ((F-32.0)*(5.0/9.0)));

    //c. Distancia entre dos puntos = raiz cuadrada de [(x2-x1)^2 + (y2-y1)^2]
    printf("c. Distancia entre dos puntos.\n");
    printf("Ingrese la coordenada x1: ");
    float x_1, x_2, y_1, y_2, p, p2, q, q2;
    scanf("%f", &x_1);
    printf("Ingrese la coordenada x2: ");
    scanf("%f", &x_2);
    printf("Ingrese la coordenada y1: ");
    scanf("%f", &y_1);
    printf("Ingrese la coordenada y2: ");
    scanf("%f", &y_2);
    printf("La distancia entre los dos puntos es: %.1f\n", (sqrt(pow((x_2 - x_1), 2) + pow((y_2 - y_1), 2))));


    //d. Pendientedeunarecta = (y2 - y1)/(x2 - x1)
    printf("d. Pendiente de una recta.\n");
    printf("Ingrese la coordenada x1:");
    scanf("%f", &p);
    printf("Ingrese la coordenada x2:");
    scanf("%f", &p2);
    printf("Ingrese la coordenada y1:");
    scanf("%f", &q);
    printf("Ingrese la coordenada y2:");
    scanf("%f", &q2);
    printf("La pendiente de la recta es: %.1f\n", ((q2 - q) / (p2 - p)));

    //    3. Tomar números de 3 cifras y sumarlos de la siguiente manera.
//     No1 345 -> Invertirlo -> 543
//     No2 456 -> Invertir sólo decenas y centenas -> 546

//     Luego sumarlos (c,d,u) 5+5 4+4 3+6, el nuevo número es 10 8 9.
//     El número final es 1089( mil ochenta y nueve ) Nota visualizarlo en una sola variable.

    int num1, num2;
    num1 = 248;
    num2 = 356;

    //Se invierte el num1 con divisiones
    int u1, d1, c1;
    u1 = num1 % 10;
    d1 = (num1 / 10) % 10;
    c1 = (num1 / 100) % 10;
    int num1_inv = (u1 * 100) + (d1 * 10) + c1;

    //Se invierte el num2 en los primeros dos digitos con divisiones

    int u2, d2, c2;
    u2 = num2 % 10;
    d2 = (num2 / 10) % 10;
    c2 = (num2 / 100) % 10;
    int num2_inv = u2 + (d2 * 100) + (c2 * 10);

    // se muestra el numero invertido

    printf("El numero invertido de %d es: %d\n", num1, num1_inv);
    printf("El numero invertido de %d es: %d\n", num2, num2_inv);

    //Se suman los numeros invertidos

    int num3 = num1_inv + num2_inv;

    // Se muestra el numero final

    printf("El numero final es: %d\n", num3);

    //Ejercicio individual.
    //presentado por: Juan David García Arce.
    //4. Realizar la siguiente tabla pidiendo tres valores.

    printf("Ingrese el primer valor en centimetros: ");
    int cm;
    scanf("%d", &cm);
    printf("Ingrese el segundo valor en metros: ");
    int mt;
    scanf("%d", &mt);
    printf("Ingrese el tercer valor en kilometros: ");
    int km;
    scanf("%d", &km);

    //Se muestra la tabla
    printf("+-----------------------+-----------------------+---------------+---------------+---------------+\n");
    printf("| Valor\t\t\t| Conversion\t\t| cm\t\t| mt\t\t| km\t\t|\n");
    printf("+-----------------------+-----------------------+---------------+---------------+---------------+\n");
    printf("|%d\t\t\t|cm\t\t\t|%d\t\t|%d\t\t|%d\t\t|\n", cm, cm, cm * 100, cm * 100000);
    printf("+-----------------------+-----------------------+---------------+---------------+---------------+\n");
    printf("|%d\t\t\t|mt\t\t\t|%d\t\t|%d\t\t|%d\t\t|\n", mt, mt * 100, mt, mt / 100);
    printf("+-----------------------+-----------------------+---------------+---------------+---------------+\n");
    printf("|%d\t\t\t|km\t\t\t|%d\t\t|%d\t\t|%d\t\t|\n", km, km * 100000, km * 100, km);
    printf("+-----------------------+-----------------------+---------------+---------------+---------------+\n");

}