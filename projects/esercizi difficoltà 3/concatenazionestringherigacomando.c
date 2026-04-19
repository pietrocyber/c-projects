/*Immettere una serie di stringhe e concatenarle su riga di comando*/

#include <stdio.h>

int main(int argc,char*argv[]){
    int i;
    printf("La frase concatenata è: ");
    for(i=1;i<argc;i++){
        printf("%s ",argv[i]);
    }
    return 0;
}