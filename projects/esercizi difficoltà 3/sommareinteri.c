/*Sommare gli interi immessi su riga di comando*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int somma=0, i;

    for(i=1;i<argc;i++){
        somma+=atoi(argv[i]);
    }

    printf("La somma è : %d", somma);

    return 0;
}