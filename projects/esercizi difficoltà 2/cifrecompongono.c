/*Immettere un numero intero positivo e stampare le cifre che lo compongono*/
#include <stdio.h>

int main(){
    int n, cifra, inv=0, cifrainv;
    printf("Inserire il numero: ");
    scanf("%d", &n);
    while(n>0){
        cifra=n%10;
        inv=inv*10+cifra;
        n/=10;
    }
    while(inv>0){
        cifrainv=inv%10,
        inv/=10;
        printf("%d\n", cifrainv);
    }
    return 0;
}