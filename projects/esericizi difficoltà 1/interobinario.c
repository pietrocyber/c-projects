/*Immettere un numero intero positivo e scriverlo in binario*/
#include <stdio.h>

int main(){
    int n, i, resto, bin = 0, pot=1;

    printf("Inserire il numero intero positivo: ");
    scanf("%d", &n);

    for(i = 1; n > 0; i++){
        resto = n % 2;
        bin = bin + resto * pot;
        pot *= 10;
        n /= 2;
    }

    printf("%d", bin);
}