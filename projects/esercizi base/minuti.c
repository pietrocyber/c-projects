/*Immettendo un valore in minuti, convertire il numero in ore e minuti*/
#include <stdio.h>
int main(){
    int numero, ore, minuti;
    printf("Inserisci il numero di minuti:");
    scanf("%d",&numero);
    ore = numero/60;
    minuti = (numero % 60);
    printf("%d h, %d m", ore, minuti);
    return 0;
}