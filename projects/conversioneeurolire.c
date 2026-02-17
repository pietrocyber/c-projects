/*Immettendo il numero in euro, convertire tale numero in lire*/
#include <stdio.h>
int main(){
    float euro, lire;
    const float tassoconversione = 1936.27;
    printf("Inserire il numero di euro:");
    scanf("%f", &euro);
    lire= euro * tassoconversione;
    printf("L'importo in lire è: %f", lire);
    return 0;
}