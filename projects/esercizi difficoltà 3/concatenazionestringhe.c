/*Immettere una serie di stringhe e concatenarle su riga di comando*/

#include <stdio.h>

int main(int argc, char *argv[]){
    const int CD=100;
    int i,c=0, j;
    char a[CD];

    for(i=1;i<argc;i++){
       for(j=0;argv[i][j]!='\0';j++){
            a[c++]=argv[i][j];
        }
            
        if(i<argc-1){
            a[c++]=' ';
        }
    }
    a[c]='\0';
    
    
    printf("La frase concatenata è: %s\n", a);
    
    return 0;
}