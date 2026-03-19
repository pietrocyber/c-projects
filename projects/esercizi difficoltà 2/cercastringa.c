/*Immettere una stringa e una sottostringa, cercare la sottostringa nella stringa*/

#include <stdio.h>
#include <stdlib.h>

int search(char *, char *);

int main(){
    
    const int CD=100;
    char a[CD], b[CD];

    printf("Inserisci una stringa: ");
    fgets(a, CD, stdin);

    printf("Inserisci la sottostringa: ");
    fgets(b, CD, stdin);

    if(search(a,b)){
        printf("Trovato!");
    }else{
        printf("Non trovato!");
    }

    return 0;
}

int search(char *x, char *y){
    int i,j;
    for(i=0; x[i]!='\n';i++){
        if(x[i]==y[0]){
            for(j=0;x[j+i]!='\n'&&y[j]!='\n' && x[j+i]==y[j]&&y[j]!='\0';j++);

            if(y[j]=='\n'){
                return 1;
            }
        }
    }
    return 0;
}