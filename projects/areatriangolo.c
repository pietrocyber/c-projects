/*Calcoliamo l'area di un triangolo, con base e altezza forniti in input*/
#include <stdio.h>
int main(){
    int base, altezza;
    float area;
    printf("Inserire la base e l'altezza in cm:");
    scanf("%d %d", &base, &altezza);
    area= (base*altezza)/2;
    printf("L'area del triangolo: %f cm^2", area);
    return 0;
}