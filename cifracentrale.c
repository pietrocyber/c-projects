/*Immettendo un numero di 3 cifre, stampare la cifra in mezzo*/
#include <stdio.h>
int main(){
    int numero, primac, secondac;
    printf("Inserire il numero con 3 cifre:");
    scanf("%d", &numero);
    primac=numero/10;
    secondac=primac%10;
    printf("La cifra è: %d", secondac);
    return 0;
}