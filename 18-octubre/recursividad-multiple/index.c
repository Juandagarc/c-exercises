//Presentado por Juan David García Arce

#include <stdio.h>

int Fibonacci(int n){

    if (n == 0){
        return 0;
    }else if (n == 1){
        return 1;
    }else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

int main(){

    int n, j = 1;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    printf("Los primeros %d números de la serie de Fibonacci son:\n", n);
    while ( j <= n ){
        printf("%d ", Fibonacci(j));
        j++;
    }
    printf("\n");

    return 0;
}