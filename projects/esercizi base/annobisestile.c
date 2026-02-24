/*Inserire un anno e vedere se l'anno è bisestile*/
#include <stdio.h>
int main(){
    int a, ris;
    printf("Inserire l'anno:");
    scanf("%d", &a);
    ris=((a%4==0)&&(a%100==0)||(a%400==0));
    if(ris==1){
        printf("E' bisestile");
    }
    else{
        printf("Non è bisestile");
    }
    return 0;
}