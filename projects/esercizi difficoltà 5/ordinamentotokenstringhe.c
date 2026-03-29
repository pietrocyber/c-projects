/*Inserisci tante stringhe, dividili in token e poi ordinare*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int CD=100;

void bubblesort(char[][CD],int);
int main(){
    char text[CD], token[CD][CD];
    int tcount=0, i,j;

    printf("Inserisci il testo (EOF per uscire):\n ");

    for(i=0;fgets(text,CD, stdin)!=NULL;i++){
        
        /*divisione in token*/
        for(i=0;text[i]!='\0';i++){
            if(text[i]!='\n'&&text[i]!=' '){
                if(CD-1){
                    token[tcount][j++]=text[i];
                }
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
            bubblesort(token, tcount);
        }

        for(i=0;i<tcount;i++){
            printf("%s", token[i]);
            if(i<tcount-1)printf(" ");
        }
        printf("/n");
    }

    return 0;
}

void bubblesort(char x[][CD],int y){
    int i,j;
    char temp[CD];
    for(i=0;i<y-1;i++){
        for(j=0;j<y-i-1;j++){
            if(strcmp(x[j],x[j+1])>0){
                strcpy(temp,x[j]);
                strcpy(x[j],x[j+1]);
                strcpy(x[j+1],temp);
            }
        }
    }
}