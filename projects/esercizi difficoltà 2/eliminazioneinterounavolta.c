/*Immettere una serie di interi e immettere l'intero da eliminare, se ce ne sono due eliminarà solo una volta*/

#include <stdio.h>
#include <stdlib.h>

void shiftsinistra(int*, int, int);

int main(){
    int *a, rp, i, el;
    
    printf("Quanti elementi vuoi inserire?\n");
    scanf("%d", &rp);

    a=(int*)malloc(rp*sizeof(int));
    
    printf("Inserisci gli elementi:\n");
    for(i=0;i<rp;i++){
        scanf("%d", &a[i]);
    }
    
    printf("Inserisci l'elemento da eliminare: ");
    scanf("%d", &el);
    for(i=0;i<rp;i++){
        if(a[i]==el){
            shiftsinistra(a, rp, i);
            rp--;
            break;
        }
    }
    
    
    printf("L'array ordinato è:\n");
    for(i=0;i<rp; i++){
        printf("%d\n", a[i]);
    }

    free(a);
    return 0;
}

void shiftsinistra(int *x, int y, int pos){
    int i;
    for(i=pos;i<y-1;i++){
        x[i] = x[i+1];
    }
}