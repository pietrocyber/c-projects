/*Sommare gli interi immessi (Sommare gli interi passati su riga di comando)*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int rp, *a, somma=0, i;

    printf("Quanti interi vuoi inserire? ");
    scanf("%d", &rp);

    a=(int*)malloc(rp*sizeof(int));

    printf("Inserisci gli elementi:\n");
    for(i=0;i<rp;i++){
        scanf("%d", &a[i]);
        somma=somma+a[i];
    }

    printf("La somma è : %d", somma);

    free(a);
    return 0;
}