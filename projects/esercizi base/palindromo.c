/*Inserendo un numero intero capire se è un numero palindromo o meno*/
#include <stdio.h>
int main(void){
    int n, temp,cifra, invertito=0;
    printf("Inserisci un numero:");
    scanf("%d", &n);
    temp=n;
    while(n>0){
        cifra=n%10;
        invertito=invertito*10+cifra;
        n=n/10;
    }
    if(invertito==temp){
        printf("Il numero è palindromo!");
    }
    else{
        printf("Il numero non è palindromo!");
    }
}