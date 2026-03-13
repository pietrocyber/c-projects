/*Immettere una serie di numeri interi e metterli in maniera ordinata*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a,n;
    
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    a=(int*)malloc(n*sizeof(int));
    for(i=1, i<n; i++){
        
    }
    free(a);
    return 0;
}