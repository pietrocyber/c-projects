/*Visualizzare a schermo un rombo * */
#include <stdio.h>
int main(){
    int i,j, stelle=1, spazzi=4;
    for(i=1; i<=9; i++){
        for(j=1; j<=spazzi; j++) printf(" ");
        for(j=1;j<=stelle; j++){ printf("*");}
        for(j=1; j<=spazzi;j++) printf(" ");
        if(i<5){
            stelle +=2; spazzi-=1;
        }
        else{
            stelle-=2; spazzi+=1;
        }
        printf("\n");
    }
    return 0;
}