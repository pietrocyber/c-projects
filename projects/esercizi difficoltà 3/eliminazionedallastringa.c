/*Immettere due stringhe, eliminare i caratteri della seconda stringa nella prima stringa*/

#include <stdio.h>

void shiftsinistra(char*,int);

int main(int argc, char *argv[] ){
    int i, j;

    if(argc!=3)return -1;

    for(i=0;argv[1][i]!='\0';i++){
        for(j=0;argv[2][j]!='\0';j++){
            if(argv[1][i]==argv[2][j]){
                shiftsinistra(argv[1], i);
                i--;
                break;
            }
        }
    } 

    printf("stringa aggiornata: %s\n", argv[1]);
    return 0;
}

void shiftsinistra(char *x, int y){
    int i;
    for(i=y;x[i]!='\0';i++){
        x[i]=x[i+1];
    }
}