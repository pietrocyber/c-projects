/*Immettere un numero intero positivo e contare le occorrenze di una cifra*/

#include <stdio.h>

int main(){
    int n, i, resto, c;
    
    printf("Inserisci un numero intero positivo:"); 
    scanf("%d", &n);
    printf("Inserisci una cifra da cercare: ");
    scanf("%d", &c);
   
    i=0;

    while(n>0){
        resto= n%10;
        if(resto==c) i++;
        n/=10;
    }
    printf("Le occorrenze sono: %d", i);
    return 0;
}