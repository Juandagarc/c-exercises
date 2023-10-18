//Presentado por: Juan David García Arce

#include <stdio.h>

int par(int n){

    if (n == 0){
        return 1;
    }else{
        return impar(n-1);
    }
}

int impar(int n){

    if (n == 0){
        return 0;
    }else{
        return par(n-1);
    }
}

int main(){

    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    if (par(n)){
        printf("El número %d es par\n", n);
    }else{
        printf("El número %d es impar\n", n);
    }

    return 0;
}