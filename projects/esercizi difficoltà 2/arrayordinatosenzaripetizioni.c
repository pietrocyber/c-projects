/*Immettere una serie di interi, devono essere ordinati e non devono essere ripetuti*/
#include <stdio.h>
#include <stdlib.h>

void insertionsort(int *, int, int );
void shiftsinistra(int *, int);
int main(){
    int *a, n, rp, i, k;
    
    printf("Quanti numeri vuoi immettere? ");
    scanf("%d", &rp);

    a=(int*)malloc(rp*sizeof(int));

    printf("Immettere i seguenti numeri:\n ");
    for(i=0;i<rp; i++){
        scanf(" %d", &n);

        insertionsort(a, i, n );
    }
     printf("I numeri ordinati sono: \n%d\n",a[0]);

    for(k=1;k<rp;k++){
        if(a[k]!=a[k-1]){
            printf("%d\n",a[k]);
        }
    }

    free(a);
    return 0;
}
void insertionsort(int *x, int z, int v){
    int j;
    for(j=z-1; j>=0 && x[j]>v;j--){
        x[j+1]=x[j];
    }
    x[j+1]=v;

}
void shiftsinistra(int *x, int y){
    int i;
    int primo= x[0];
    for(i=0; i<y-1; i++){
        x[i]=x[i+1];
    }
    x[y-1]=primo;
}