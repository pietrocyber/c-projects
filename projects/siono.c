/*Scrivere un programma che se si mette s o n scriva ok*/
#include <stdio.h>
void main(){
    char car;
    do{
        printf("Scrivere s o n:");
        scanf("%c",&car);

    }while((car!='s')&&(car!='n'));
    printf("OK");
}
