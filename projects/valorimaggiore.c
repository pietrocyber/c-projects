/*Inserendo un valore, stampare solo quello maggiore tra i due */
#include <stdio.h>
int main(){
    int a, b;
    printf("Inserisci due valori:");
    scanf("%d %d", &a, &b);
    if(a<b){
        printf("%d",b);
    }
    else{
        printf("%d", a);
    }
    return 0;
}