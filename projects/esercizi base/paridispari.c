/*Immettendo un valore intero, verificare se è pari o dispari*/
#include <stdio.h>
int main(){
    int a;
    printf("Inserisci un numero intero:");
    scanf("%d", &a);
    if(a%2==0){
        printf("è pari");
    }
    else{
        printf("è dispari");
    }
    return 0;
}