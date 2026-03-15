/*Fare l'inserzione ordinata di una sequenza di interi*/

#include <stdio.h>
#include <stdlib.h>

void insertionsort(int *, int, int);

int main(){
    int *a,n, i, rp;
    
    printf("Quanti interi vuoi inserire?\n");
    scanf("%d", &rp);

    a=(int*)malloc(rp*sizeof(int));

    printf("Inserisci i numeri:\n");
    for(i=0; i<rp;i++){
        scanf("%d", &n);

        insertionsort(a,i, n);
    }
    
    printf("I numeri ordinati sono:");
    for(i=0;i<rp;i++){
        printf("\n%d", a[i]);
    }

    free(a);
    return 0;
}
void insertionsort(int *x, int y, int z){
    int j;
    for(j=y-1; j>=0 && x[j]>z;j--){
        x[j+1]=x[j];
    }
    x[j+1]=z;
}