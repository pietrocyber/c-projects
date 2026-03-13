/*Immettere una serie di interi e fare o lo shift a destra o a sinistra di N posizioni*/

#include <stdio.h>
#include <stdlib.h>

void shiftdestra(int * , int);
void shiftsinistra(int * ,int);

int main(){
    int *a, *b, *c, n, k, i, j;
    char ct;
    
    printf("Quanti elementi vuoi inserire? ");
    scanf("%d", &n);

    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    c=(int*)malloc(n*sizeof(int));

    printf("Inserisci gli elementi: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        b[i]=a[i];
        c[i]=a[i];
    }

    printf("Quale shift vuoi eseguire? (d = shift a destra; s = shift a sinistra)");
    scanf(" %c", &ct);
    printf("Di quante posizioni vuoi fare lo shift?");
    scanf("%d", &k);
    if(ct=='d'){
        for(j=0;j<k;j++){
            shiftdestra(b, n);
        }
        for(i=0;i<n;i++){
            printf("%d",b[i]);
        }
    }else if(ct=='s'){
        for(j=0;j<k;j++){
            shiftsinistra(c, n);
        }
        for(i=0;i<n;i++){
            printf("%d",c[i]);
        }
    }
    else{
        return -1;
    }
    free(a);
    free(b);
    free(c);
    return 0;
}
void shiftdestra(int *x, int y){
    int i;
    int ultimo=x[y-1];
    for(i=y-1;i>0;i--){
        x[i]=x[i-1];
    }   
    x[0]=ultimo;
}

void shiftsinistra(int *x, int y){
    int i;
    int primo=x[0];
    for(i=0;i<y-1;i++){
        x[i]=x[i+1];
    }
    x[y-1]=primo;
}