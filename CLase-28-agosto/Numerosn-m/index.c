//Presentado por: Juan David García Arce

#include<stdio.h>

int main () {

    int n, m;

    scanf("%d", &n);
    scanf("%d", &m);

    while (n < m)
    {
        n++;
        printf("%d\n", n);
    }
    return 0;
}