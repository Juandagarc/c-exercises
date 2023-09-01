#include <stdio.h>

int main() {
    int n, m, conteo = 0, divisor = 1, primo;
    printf("Ingrese n: ");
    scanf("%d", &n);
    printf("Ingrese m: ");
    scanf("%d", &m);
    primo = n;

    while (primo < m) {
        (divisor > primo) ? (
            (conteo == 2) ? (
                printf("%d ", primo),
                conteo = 0,
                divisor = 1,
                primo++
            ) : (
                conteo = 0,
                divisor = 1,
                primo++
            )
        ) : (
            (primo % divisor) == 0 ? (
                conteo++,
                divisor++
            ) : (
                divisor++
            )
        );
    }

    return 0;
}