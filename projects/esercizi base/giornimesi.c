/*Immettendo un mese del l'anno definire quanti giorni ha*/
#include <stdio.h>
int main(){
    int a;
    printf("Inserire il mese:");
    switch(a){
        case 4:case 6:case 9:case 11: printf("Ha 30 giorni");break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("Ha 31 giorni");break;
        case 2: printf("Ha 28 giorni");break;
        default:printf("Non esiste");
    }
    return 0;
}