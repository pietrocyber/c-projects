/*Inserendo l'altezza in centimetri, si converte quest'ultimo in metri e centimetri.*/
#include <stdio.h>

int main(){
    int altezza, metri, centimetri;
    printf("Inserire l'altezza in centimetri:");
    scanf("%d",&altezza);
    metri=altezza/100;
    centimetri= altezza%100;
    printf("L'altezza è: %d m, %d cm", metri, centimetri);
    return 0;

}