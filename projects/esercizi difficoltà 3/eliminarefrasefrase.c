/*Inserisci una frase, cercare una sottofrase ed eliminarla*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shiftsinistra(char *,int, int);
int search(char *, char *);

int main(){
    const int CD=100;
    int pos, len;
    char a[CD], b[CD];

    printf("Inserisci la frase: ");
    fgets(a,CD,stdin);

    printf("Inserisci la frase/parola da eliminare: ");
    fgets(b,CD,stdin);

    len=strlen(b)-1;

    if((pos=search(a,b))!=-1){
       shiftsinistra(a,pos, len);
       
       printf("La stringa aggiornata è: %s\n", a);
    }else{
        printf("Non ho trovato quello che hai cercato!\n");
    }
}

int search(char *x, char *y){
    int i, j;
    for(i=0; x[i]!='\n';i++){
        if(x[i]==y[0]){
            for(j=0; x[j+i]!='\n'&&y[j]!='\n'&&y[j]!='\0'&&x[j+i]==y[j];j++);

            if(y[j]=='\n'||y[j]=='\0'){
                return i;
            }
        }
    }
    return -1;
}

void shiftsinistra(char *x, int y, int z){
    int i;
    for(i=y;x[i+z]!='\0';i++){
        x[i]=x[i+z];
    }
    x[i]='\0';
}