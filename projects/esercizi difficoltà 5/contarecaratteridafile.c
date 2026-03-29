/*Leggere da file e contare quante volte ci sono le parole*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    const int CD=100;
    int i,vista,j,k, cn,q;
    char token[CD][CD];

    fp=fopen("esempio.txt", "r");

    for(i=0;fscanf(fp,"%s", token[i])==1;i++);

    fclose(fp);

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
            for(q=0;q<i;q++){
                if(strcmp(token[q],token[j])==0){
                    cn++;
                }
            }
            printf("%s è contenuta %d volte\n", token[j],cn);
        }
    }
    

    return 0;
}