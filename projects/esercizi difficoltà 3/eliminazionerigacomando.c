/*Immettere su riga di comando una serie di stringhe e chiedere all'utente quale eliminare*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int search(char**, int, char *);
void shiftsinistra(char**,int,int);

int main(int argc, char *argv[]){
    const int CD=100;
    int pos, i;
    char a[CD];

    printf("Quale vuoi eliminare?\n");
    fgets(a,CD,stdin);
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='\n'){
            a[i]='\0';
            break;
        }
    }
    
    if((pos=search(argv, argc, a))!=-1){
        shiftsinistra(argv,argc,pos);

        printf("Dopo l'eliminazione:\n ");
        for(i=1;i<argc-1;i++){
            printf("%s\n", argv[i]);
        }
    }else{
        printf("Elemento non trovato!\n");
    }
}

int search(char **x, int y, char *z){
    int i;
    for(i=1;i<y;i++){
        if(strcmp(x[i],z)==0){
            return i;
        }
    }
    return -1;
}

void shiftsinistra(char**x, int y,int z){
    int i;
    for(i=z;i<y-1;i++){
        x[i]=x[i+1];
    }
}