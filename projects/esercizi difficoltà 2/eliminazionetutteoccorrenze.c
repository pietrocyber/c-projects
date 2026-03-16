/*Immettere una serie di interi e eliminare ogni occorrenza, del numero scelto dall'utente*/

#include <stdio.h>
#include <stdlib.h>

void shiftsinistra(int *, int, int);

int main(){
    int *a, rp, i, el;
    
    printf("Quanti elementi vuoi inserire?\n");
    scanf("%d", &rp);

    a=(int*)malloc(rp*sizeof(int));

    printf("Inserisci gli elementi:\n");
    for(i=0;i<rp;i++){
        scanf("%d", &a[i]);
    }

    printf("Che elemento vuoi eliminare?\n");
    scanf("%d", &el);

    for(i=0;i<rp;i++){
        if(a[i]==el){
            shiftsinistra(a,rp,i);
            rp--;
            i--;
        }
    }
    
    printf("L'array aggiornato è:\n");
    for(i=0;i<rp;i++){
        printf("%d\n", a[i]);
    }

    free(a);
    return 0;
}

void shiftsinistra(int *x, int y, int z){
    int i;
    for(i=z;i<y-1;i++){
        x[i]=x[i+1];
    }
}