/*Inserire una linea e una stringa, vedere se la stringa è contenutà nella linea*/

#include <stdio.h>
#include <stdlib.h>

int search(char *, char*);

int main(){
    const int CD=100;
    char a[CD], b[CD];

    printf("Inserisci la linea: ");
    fgets(a, CD, stdin);

    printf("Inserisci la stringa: ");
    fgets(b, CD, stdin);

    if(search(a, b)){
        printf("Trovato!\n");
    }else{
        printf("Non trovato!\n");
    }

    return 0;
}

int search(char *x, char *y){
    int i, j;
    for(i=0; x[i]!='\n'; i++){
        for(j=0;x[j+i]!='\n'&&y[j]!='\n' && x[j+i]==y[j]&&y[j]!='\0';j++);
        if(x[i]==x[j+1]){
            return 1;
        }
    }
    return 0;
}