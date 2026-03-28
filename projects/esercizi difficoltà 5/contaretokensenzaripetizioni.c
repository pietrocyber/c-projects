/*Immettere una serie di token e contarli e stamparli senza ripetizioni*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    const int CD=100;
    int i,j,k, vista;
    char a[CD][CD];

    printf("Inserisci i token (EOF per uscire):\n   ");
    for(i=0;(scanf("%s",a[i])!=EOF);i++);

    for(j=0;j<i;j++){
        vista=0;
        for(k=0;k<j;k++){
            if(strcmp(a[j],a[k])==0)vista=1;
        }

        if(!vista){
            printf("%s\n",a[j]);
        }
           
    }

    return 0;
}