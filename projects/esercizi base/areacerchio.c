/*Dobbiamo calcolare l'area del cerchio, immettendo in input il valore del raggio*/
#include <stdio.h>
#include <math.h>
int main(){
    double  r,a;
    const double pigreco=3.1415;
    printf("Inserire il raggio del cerchio (cm): ");
    scanf("%lf", &r);
    a= pow(r,2)*pigreco;
    printf("L'area del cerchio è: %lf cm^2",a);
    return 0;
}