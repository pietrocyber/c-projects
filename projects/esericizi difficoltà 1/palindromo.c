/*Immettere un numero intero positivo e valutare se è palindromo*/
#include <stdio.h>
int main(){
    int n, div,inv=0,temp, resto;
    printf("Inserire un numero intero positivo:");
    scanf("%d", &n);
    temp=n;
    while(n>0){
        div=n%10;
        inv=inv*10+div;
        n=n/10;
    }
    if(inv==temp){
        printf("Il numero è palindromo!");
    }
    else{
        printf("Il numero non è palindromo");
    }
    return 0;
}