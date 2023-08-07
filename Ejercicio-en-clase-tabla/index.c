//Presentado por Juan David García Arce y Maximiliano Giraldo Ocampo
//NOTA: Si desea ver la tabla esteticamente bien ingrese numeros del 1 al 9, ni mas ni menos

#include <stdio.h>

int main() {
    float ladoCuadrado, areaCuadrado, perimetroCuadrado, baseTriangulo, alturaTriangulo,lado2Triangulo, lado3Triangulo, areaTriangulo, perimetroTriangulo, baseRectangulo, alturaRectangulo, perimetroRectangulo, areaRectangulo, diagonalmenorRombo, diagonalmayorRombo, ladoRombo, perimetroRombo, areaRombo, baseRomboide, alturaRomboide, perimetroRomboide, areaRomboide;

    //Cuadrado

    printf("Ingresa el lado del cuadrado: ");
    scanf("%f", &ladoCuadrado);

    //formula del area y perimetro del cuadrado

    areaCuadrado = ladoCuadrado * ladoCuadrado;
    perimetroCuadrado = 2 * ladoCuadrado;
    //triangulo

    printf("Ingresa la base (lado 1) del triangulo: ");
    scanf("%f", &baseTriangulo);
    printf("Ingresa la altura del triangulo: ");
    scanf("%f", &alturaTriangulo);
    printf("Ingresa el lado 2 del triangulo: ");
    scanf("%f", &lado2Triangulo);
    printf("Ingresa el lado 3 del triangulo: ");
    scanf("%f", &lado3Triangulo);

    //formula area y perimetro del triangulo
    
    areaTriangulo = (baseTriangulo * alturaTriangulo) / 2;
    perimetroTriangulo = baseTriangulo + lado2Triangulo + lado3Triangulo;

    //rectangulo
    
    printf("Ingresa la base del rectangulo: ");
    scanf("%f", &baseRectangulo);
    printf("Ingresa la altura del rectangulo: ");
    scanf("%f", &alturaRectangulo); 

    //formula area y perimetro del rectangulo

    areaRectangulo = baseRectangulo * alturaRectangulo;
    perimetroRectangulo = ( baseRectangulo * 2 ) + ( alturaRectangulo *2 );
    
    //rombo
    
    printf("Ingresa la diagonal menor del rombo: ");
    scanf("%f", &diagonalmenorRombo);
    printf("Ingresa la diagonal mayor del rombo: ");
    scanf("%f", &diagonalmayorRombo);
    printf("Ingresa el lado del rombo: ");
    scanf("%f", &ladoRombo);

    //formula area y perimetro del rombo
    
    perimetroRombo = 4 * ladoRombo;
    areaRombo = (diagonalmayorRombo * diagonalmenorRombo) / 2;

    //romboide
    
    printf("Ingresa la base del romboide: ");
    scanf("%f", &baseRomboide);
    printf("Ingresa la altura del romboide: ");
    scanf("%f", &alturaRomboide);

    //formula area y perimetro del romboide
    
    areaRomboide = baseRomboide * alturaRomboide;
    perimetroRomboide = ( baseRomboide * 2 ) + ( alturaRomboide * 2 );

    //tabla
    
    printf("┌───────────────┬───────────────────────────────┬───────────────────────────────────────┬───────────────────────────────────────────────┐\n");
    printf("│Forma\t\t│Elementos\t\t\t│perimetro\t\t\t\t│Area\t\t\t\t\t\t│\n");
    printf("├───────────────┼───────────────────────────────┼───────────────────────────────────────┼───────────────────────────────────────────────┤\n");
    printf("│\t\t│\t\t\t\t│Perimetro = 4 * lado\t\t\t│area = lado * lado\t\t\t\t│\n");
    printf("│Cuadrado\t│Lado=%.1f\t\t\t│P=%.1f\t\t\t\t\t│A=%.1f\t\t\t\t\t\t│\n", ladoCuadrado, perimetroCuadrado, areaCuadrado);
    printf("├───────────────┼───────────────────────────────┼───────────────────────────────────────┼───────────────────────────────────────────────┤\n");
    printf("│\t\t│Lado1(base)=%.1f\t\t│Perimetro = lado1 + lado2 + lado3\t│area = (base * altura)/2\t\t\t│\n", baseTriangulo);
    printf("│Triangulo\t│Lado2=%.1fLado3=%.1f\t\t│P=%.1f\t\t\t\t\t│A=%.1f\t\t\t\t\t\t│\n", lado2Triangulo, lado3Triangulo, perimetroTriangulo, areaTriangulo);
    printf("├───────────────┼───────────────────────────────┼───────────────────────────────────────┼───────────────────────────────────────────────┤\n");
    printf("│\t\t│\t\t\t\t│Perimetro = (2 * base) + (2 * altura)\t│area = base * altura\t\t\t\t│\n");
    printf("│Rectangulo\t│Base=%.1fAltura=%.1f\t\t│P=%.1f\t\t\t\t\t│A=%.1f\t\t\t\t\t\t│\n", baseRectangulo, alturaRectangulo, perimetroRectangulo, areaRectangulo);
    printf("├───────────────┼───────────────────────────────┼───────────────────────────────────────┼───────────────────────────────────────────────┤\n");
    printf("│\t\t│Lado=%.1f\t\t\t│Perimetro = 4 * lado\t\t\t│area = (diagonal mayor * diagonal menor)/2\t│\n", ladoRombo);
    printf("│Rombo\t\t│Diagonal menor=%.1f\t\t│P=%.1f\t\t\t\t\t│A=%.1f\t\t\t\t\t\t│\n", diagonalmenorRombo, perimetroRombo, areaRombo);
        printf("│\t\t│Diagonal mayor=%.1f\t\t│\t\t\t\t\t│\t\t\t\t\t\t│\n", diagonalmayorRombo);
    printf("├───────────────┼───────────────────────────────┼───────────────────────────────────────┼───────────────────────────────────────────────┤\n");
    printf("│\t\t│\t\t\t\t│Perimetro = (2 * base) + (2 * altura)\t│area = base * altura\t\t\t\t│\n");
    printf("│Romboide\t│Base=%.1fAltura=%.1f\t\t│P=%.1f\t\t\t\t\t│A=%.1f\t\t\t\t\t\t│\n", baseRomboide, alturaRomboide, perimetroRomboide, areaRomboide);
    printf("└───────────────┴───────────────────────────────┴───────────────────────────────────────┴───────────────────────────────────────────────┘\n");
    
    return 0;
}