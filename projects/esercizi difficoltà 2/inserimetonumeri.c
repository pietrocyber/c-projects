/*Inserire una serie di numeri da una posizione data in poi.*/

#include <stdio.h>
#include <stdlib.h>

void shiftdestra(int*, int, int, int);

int main(){
    int *a, rp, el, i, pos;

    printf("Quanti elementi vuoi inserire?\n");
    scanf("%d", &rp);

    a=(int*)malloc(rp*sizeof(int));
    
    printf("Immettere degli elementi:\n");
    for(i=0;i<rp;i++){
        scanf("%d", &a[i]);
    }

    printf("In che posizione vuoi inserire gli elementi?(da 0 a %d)", rp-1);
    scanf("%d", &pos);
    
    printf("Quanti elementi vuoi inserire nella posizione data (posizione attuale data: %d):\n", pos);
    scanf("%d", &el);
    
    a=(int*)realloc(a, (rp+el)*sizeof(int));
    
    shiftdestra(a, rp, el , pos);
    
    printf("Inserisci gli elementi:");
    for(i=0; i<el; i++){
        scanf("%d", &a[pos+i]);
    }
    
    rp=rp+el;
    
    printf("L'array aggiornato è:\n");
    for(i=0; i<rp;i++){
        printf("%d\n", a[i]);
    }
    
    free(a);
    return 0;
}
void shiftdestra(int *x, int y, int z, int w){
    int i;
    for(i=y-1; i>=w; i--){
        x[i+z]=x[i];
    }
}