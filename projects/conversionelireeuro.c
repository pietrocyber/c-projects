/*Immetendo il valore delle lire che abbiamo, dobbiamo convertirle in euro*/
#include <stdio.h>
#include <math.h>
int main(){
    double lire, conversione, arrotondamento;
    const double tassoconversione= 1936.27;
    printf("Inserire l'importo di lire da convertire:");
    scanf("%lf", &lire);
    conversione=lire/tassoconversione;
    arrotondamento=ceil(conversione*100)/100;
    printf("L'importo in euro è: %.2lf", arrotondamento);
    return 0;
}