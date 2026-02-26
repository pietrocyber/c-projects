/*Immettendo una serie di interi e calcolare la media*/
#include <stdio.h>
int main(){
    int somma=0, media, i, n, count;
    printf("Inserisci quanti numeri vuoi immettere: ");
    scanf("%d", &count);
    for(i=1; i<=count;i++){
        scanf("%d", &n);
        somma=somma+n;
    }
    media=somma/count;
    printf("La media è : %d", media);
    return 0;
} 