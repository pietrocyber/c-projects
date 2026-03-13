/*Immettere una serie di numeri interi e metterli in maniera ordinata*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a,rp, num, i, j;
    
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &rp);

    a=(int*)malloc(rp*sizeof(int));
    
    printf("Inserisci i numeri: ");
    for(i=0; i<rp; i++){
        scanf("%d", &num);
        
        for(j=i-1; (j>=0 && a[j]>num);j--){
            a[j+1]=a[j];
        }
        a[j+1]=num;
    }
    for(i=0;i<rp;i++){
        printf("%d ", a[i]);
    }
    free(a);
    
    return 0;
}