/*Inserire una serie di interi e cancellare gli zero, ma anche gli interi ripetuti*/

#include <stdio.h>
#include <stdlib.h>

void shiftsinistra(int *, int, int);

int main(){
    int *a, rp, i, j;

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &rp);
    
    a=(int*)malloc(rp*sizeof(int));

    printf("Inserisci gli elementi:\n");
    for(i=0;i<rp;i++){
        scanf("%d", &a[i]);
    }

    for(i=0;i<rp;i++){
        if(a[i]==0){
            shiftsinistra(a,rp , i);
            rp--;
            i--;
        }
    }
    
    a=(int*)realloc(a,rp*sizeof(int));
    
    for(i=0;i<rp;i++){
        for(j=i+1;j<rp;j++){
            if(a[i]==a[j]){
                shiftsinistra(a,rp, j);
                rp--;
                j--;
            }
        }
    }
    
    a=(int*)realloc(a,rp*sizeof(int));

    printf("L'array aggiornato è:\n");
    for(i=0;i<rp;i++){
        printf("%d\n", a[i]);
    }

    free(a);
    return 0;
}

void shiftsinistra(int *x, int y,int z){
    int i;
    for(i=z; i<y-1; i++){
        x[i]=x[i+1];
    }
}