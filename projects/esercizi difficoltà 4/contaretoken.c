/*Immettere un formato libero, dividerlo in token e poi contare ogni token quante volte c'è*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, j=0, k=0,cn, vista;
    const int CD=100;
    char a[CD], token[CD][CD];

    printf("Inserire un formato libero: ");
    fgets(a,CD,stdin);

    /*divisione in token*/
    for(i=0;a[i]!='\0';i++){
        if(a[i]!=' '&& a[i]!='\n'){
            token[k][j++]=a[i];
        }else{
            if(j>0){
                token[k][j]='\0';
                k++;
                j=0;
            }
        } 
    }
    if(j>0){
        token[k][j]='\0';
        k++;
    }

    for(i=0;i<k;i++){
        vista=0;
        
        for(j=0;j<i;j++){
            if(strcmp(token[i],token[j])==0){
                vista=1;
                break;
            }
        }
        if(!vista){
            cn=0;
            for(j=0;j<k;j++){
                if(strcmp(token[i],token[j])==0)cn++;
            }
            printf("Il token %s è contenuto %d volte\n", token[i],cn);
        }            
        

        
    }

    return 0;

}