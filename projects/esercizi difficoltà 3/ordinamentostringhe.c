/*Immettere una serie di stringhe e ordinarle da riga di comando*/

#include <stdio.h>
#include <string.h>

void bubblesort(char**,int);

int main(int argc, char *argv[]){

    int i;
    
    bubblesort(argv,argc);
    
    printf("Ecco le stringhe ordinate:\n");
    for(i=1;i<argc;i++){
        printf("%s\n", argv[i]);
    }

    return 0;
}

void bubblesort(char**x,int y){
    int i, j;
    char *temp;
    for(i=1;i<y-1;i++){
        for(j=1;j<y-i;j++){
            if(strcmp(x[j],x[j+1])>0){
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
}