/*Inserire un intero in una posizione data all'interno di un array*/
#include <stdio.h>
#include <stdlib.h>

void shiftdestra(int *, int , int );

int main(){
    int n, *a, ins, i, pos;
    printf("Quanti interi vuoi inserire? ");
    scanf("%d", &n);
    
    a=(int*)malloc((n+1)*sizeof(int));

    printf("Immettere l'array di interi: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Inserisci l'elemento che vuoi aggiungere nell'array:");
    scanf("%d", &ins);

    printf("In che posizione vuoi inserire il numero(da 0 a %d):",n);
    scanf("%d", &pos);

    shiftdestra(a, n, pos);
    a[pos]=ins;

    for(i=0;i<n+1;i++){
        printf(" %d", a[i]);
    }
    free(a);
    return 0;
}

void shiftdestra(int *x, int y, int z){
    int i;
    for(i=y;i>z;i--){
        x[i]=x[i-1];
    }
}