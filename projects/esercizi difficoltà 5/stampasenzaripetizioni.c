/*Leggere i token un file in formato libero e stamparli senza ripetizioni*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int CD=100;

int main(){
    FILE *fp;
    char linea[CD], token[CD][CD];
    int tcount,j,i, vista, k;

    fp=fopen("text.txt", "r");
    while(fgets(linea,CD,fp)!=NULL){
        /*tokenizzazione*/
        j=0;
        tcount=0;
        for(i=0;linea[i]!='\0';i++){
            if(linea[i]!=' '&&linea[i]!='\n'){
                token[tcount][j++]=linea[i];
            }else{
                if(j>0){
                    token[tcount][j]='\0';
                    tcount++;
                    j=0;
                }
            }
        }
        if(j>0){
            token[tcount][j]='\0';
            tcount++;
        }

        for(i=0;i<tcount;i++){
            vista=0;

            for(k=0;k<i;k++){
                if(strcmp(token[k],token[i])==0){
                    vista=1;
                    break;
                }
            }
            if(!vista){
                printf("%s\n", token[i]);
            }
        }
    }
    fclose(fp);
    return 0;
}