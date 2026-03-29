/*Immettere una serie di token e contarli*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,j,k,z,vista,cn;
    const int CD=100;
    char token[CD][CD];

    printf("Inserisci i token: ");
    for(i=0;(scanf("%s", token[i]))!=EOF;i++);

    for(j=0;j<i;j++){
        vista=0;
        for(k=0;k<j;k++){
            if(strcmp(token[k],token[j])==0){
                vista=1;
                break;
            }
        }
        if(!vista){
            cn=0;
            for(z=0;z<i;z++){
                if(strcmp(token[z], token[j])==0)cn++;
            }

            printf("Il token %s è contenuto %d volte\n", token[j], cn);
        }

    }

    return 0;

}