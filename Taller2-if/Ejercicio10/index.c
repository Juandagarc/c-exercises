//Presentado por: Juan David García Arce

#include <stdio.h>

int main() {

    int a, b, c, menor;

    printf("Digite el valor de a: ");
    scanf("%d", &a);

    printf("Digite el valor de b: ");
    scanf("%d", &b);

    printf("Digite el valor de c: ");
    scanf("%d", &c);

    if (a < b && a < c) {
        menor = a;
    } else {
        if (b < a && b < c) {
            menor = b;
        } else {
            menor = c;
        }
    }

    printf("El menor es: %d\n", menor);

    return 0;
}
