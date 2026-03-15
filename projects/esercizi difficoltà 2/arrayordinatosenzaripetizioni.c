/*Immettere una serie di interi, devono essere ordinati e non devono essere ripetuti*/
#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *, int );

int main(){
    int *a, rp, i, k;
    
    printf("Quanti numeri vuoi immettere? ");
    scanf("%d", &rp);

    a=(int*)malloc(rp*sizeof(int));

    printf("Immettere i seguenti numeri:\n ");
    for(i=0;i<rp; i++){
        scanf(" %d", &a[i]);
    }

    bubblesort(a,rp);

     printf("I numeri ordinati sono: \n%d\n",a[0]);

    for(k=1;k<rp;k++){
        if(a[k]!=a[k-1]){
            printf("%d\n",a[k]);
        }
    }

    free(a);
    return 0;
}
void bubblesort(int *x, int y){
    int i;
    int j;
    int temp;
    for(i=0; i<y-1;i++){
        for(j=0; j<y-i-1;j++){
            if(x[j]>x[j+1]){
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
}
