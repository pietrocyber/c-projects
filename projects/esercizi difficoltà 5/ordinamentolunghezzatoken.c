/*Prendere un testo libero, dividerlo in token e ordinare i token in base alla lunghezza*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int CD=100;

void bubblesort(char [][CD], int);

int main(){
    char text[CD], token[CD][CD];
    int i,vista,tcount,j;
    
    printf("Inserisci il testo in formato libero:\n");
    while(fgets(text,CD,stdin)){
        tcount=0;
        j=0;
        for(i=0;text[i]!='\0';i++){
            if(text[i]!=' '&&text[i]!='\n'){
                token[tcount][j++]=text[i];
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
            printf("%s", token[i]);
            if(i<tcount-1)printf(" ");
        } 
        printf("\n");
    }   
    return 0;
}

void bubblesort(char x[][CD],int y){
    int i ,j;
    char temp[CD];
    for(i=0;i<y-1;i++){
        for(j=0;j<y-1-i;j++){
            if(strlen(x[j])>strlen(x[j+1])){
                strcpy(temp,x[j]);
                strcpy(x[j],x[j+1]);
                strcpy(x[j+1],temp);
            }
        }
    }
    
    
}