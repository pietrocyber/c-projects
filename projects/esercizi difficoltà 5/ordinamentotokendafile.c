/*Da file, leggere il testo, dividerlo in token e stamparlo ordinato*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int CD=100;

void bubblesort(char [][CD],int);

int main(){
    FILE *fp;
    char token[CD][CD], linea[CD];
    int i, tcount,j;

    fp=fopen("text.txt", "r");

    while(fgets(linea,CD,fp)!=NULL){
        tcount=0;
        j=0;

        /*divisione in token*/
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
        if(tcount>1){
            bubblesort(token,tcount);
        }

        for(i=0;i<tcount;i++){
            printf("%s ", token[i]);
        }
        printf("\n");
    }

    fclose(fp);

    return 0;


}

void bubblesort(char x[][CD],int y){
    int i, j;
    char temp[CD];
    for(i=0;i<y-1;i++){
        for(j=0;j<y-1-i;j++){
            if(strcmp(x[j],x[j+1])>0){
                strcpy(temp,x[j]);
                strcpy(x[j],x[j+1]);
                strcpy(x[j+1],temp);
            }
        }
    }
}