/*Immettere una linea e una stringa, cercare la stringa nella linea e vedere in che posizione si trovano le volte in cui compare la stringa*/

#include <stdio.h>
#include <stdlib.h>

void search(char *,char *);

int main(){
    const int CD=100;
    char a[CD], b[CD];

    printf("Inserire una frase: ");
    fgets(a,CD, stdin);

    printf("Inserisci la frase da cercare: ");
    fgets(b,CD,stdin);
    
    search(a,b);
    
    return 0;
}

void search(char *x,char *y){
    int i, j;

    for(i=0;x[i]!='\n';i++){
        if(x[i]==y[0]){
            for(j=0;y[j]!='\0'&&y[j]!='\n'&&x[j+i]!='\n'&&x[j+i]==y[j];j++);
            if(y[j]=='\n'||y[j]=='\0'){
                printf("Trovato in posizione %d\n", i);
            }
        }
    }
}