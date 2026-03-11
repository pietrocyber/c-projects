/*Immettere una serie di interi e fare lo shift a destra e a sinistra*/

#include <stdio.h>
#include <stdlib.h>

void shiftcircolaredestra(int *, int );
void shiftcircolaresinistra(int *, int );

int main(){

    int n, *a, *b, *c, i;

    printf("Quanti elementi vuoi immettere nell'array: ");
    scanf("%d", &n);

    a = malloc(n*sizeof(int));
    b = malloc(n*sizeof(int));
    c = malloc(n*sizeof(int));

    printf("Inserisci gli elementi:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i] = a[i];   
        c[i] = a[i]; 
    }

    shiftcircolaredestra(b,n);
    shiftcircolaresinistra(c,n);

    printf("Shift circolare a destra:\n");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);

    printf("\nShift circolare a sinistra:\n");
    for(i=0;i<n;i++)
        printf("%d ",c[i]);

    free(a);
    free(b);
    free(c);

    return 0;
}
void shiftcircolaredestra(int *x, int y){

    int i;
    int ultimo = x[y-1];

    for( i=y-1;i>0;i--){
        x[i] = x[i-1];
    }

    x[0] = ultimo;
}

void shiftcircolaresinistra(int *x, int y){

    int primo = x[0];
    int i;

    for( i=0;i<y-1;i++){
        x[i] = x[i+1];
    }

    x[y-1] = primo;
}