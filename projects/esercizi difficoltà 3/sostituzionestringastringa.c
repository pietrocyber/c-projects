/*Inserire una stringa, cercarla e sostituirla con una scelta dall'utente*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int search(char *, char *);
void sostituzione(char *, char *, char *, int);
void shiftsinistra(char *, int);
void shiftdestra(char*, int);

int main(){
    int pos;
    const int CD=100;
    char a[CD], b[CD], c[CD];

    printf("Inserisci la frase: ");
    fgets(a,CD,stdin);

    printf("Inserisci la frase/parola da cercare: ");
    fgets(b,CD,stdin);

    pos= search(a,b);
    
    if(pos!=-1){
        printf("Inserisci la frase/parola con cui sostituire la frase/parola trovata: ");
        fgets(c,CD,stdin);
    
        sostituzione(a,b,c,pos);
        
        printf("La frase aggiornata è: %s", a);

    }else{
        printf("Non trovato!\n");
    }
    

}

int search(char *x, char *y){
    int i, j;

    for(i=0;x[i]!='\n';i++){
        if(x[i]==y[0]){
            for(j=0; x[j+i]!='\n' && y[j]!='\n' && x[i+j]==y[j];j++);
        
            if(y[j]=='\n'||y[j]=='\0'){
                return i;
            }
        }
    }
    return -1;
}

void sostituzione( char *x, char *y, char *z, int w){
    int i, diff, j;

    if((strlen(y))==(strlen(z))){
        for(i=0;z[i]!='\n';i++){
            x[i+w]=z[i];
        }
    }else if((strlen(y))>(strlen(z))){
        diff=(strlen(y)-1)-(strlen(z)-1);
        for(j=0;j<diff;j++){
            shiftsinistra(x,w);}

        for(i=0;z[i]!='\0';i++){
            x[i+w]=z[i];
        }
    }else if((strlen(z))>(strlen(y))){
        diff=(strlen(z)-1)-(strlen(y)-1);
        for(j=0;j<diff;j++) {
            shiftdestra(x,w);
        }
        
        for(i=0;z[i]!='\0';i++){
            x[i+w]=z[i];
        }
    }
}

void shiftsinistra(char *x, int y){
    int i;
    for(i=y;x[i]!='\0';i++){
        x[i]=x[i+1];
    }
}

void shiftdestra(char *x, int y){
    int i;
    for(i=strlen(x);i>=y;i--){
        x[i]=x[i-1];
    }
}