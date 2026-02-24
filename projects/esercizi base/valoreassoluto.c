/*Immettendo un valore intero, se il valore è negativo, stampare il valore assoluto*/
#include <stdio.h>
int main(){
    int a, valore_assoluto;
    printf("Inserire un numero intero:");
    scanf("%d", &a);
    if (a<0){
        valore_assoluto=-a;
        printf("%d", valore_assoluto);
    }
    else{
        printf("%d", a);
    }
    return 0;
}