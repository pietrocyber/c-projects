/*Immettere una serie di numeri interi e metterli in maniera ordinata*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a,rp, i, j, temp;
    
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &rp);

    a=(int*)malloc(rp*sizeof(int));
    
    printf("Inserisci i numeri: ");
    for(i=0; i<rp; i++){
        scanf("%d", &a[i]);
    }
        
    for(i=0; i<rp-1;i++){
        for(j=0; j<rp-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    for(i=0;i<rp;i++){
        printf("%d ", a[i]);
    }
    free(a);
    
    return 0;
}