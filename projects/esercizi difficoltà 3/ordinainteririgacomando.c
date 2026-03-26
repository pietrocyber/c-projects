/*Inserire una serie di interi su riga di comando e ordinarli*/

#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *, int);

int main(int argc, char *argv[]){
    int *n, i;

    n=(int*)malloc((argc-1)*sizeof(int));
    
    for(i=1;i<argc;i++){
        n[i-1]=atoi(argv[i]);
    }

    bubblesort(n,argc-1);

    printf("L'array ordinato:\n");
    for(i=0;i<argc-1;i++){
        printf("%d\n", n[i]);
    }

    free(n);
    
    return 0;
}

void bubblesort(int *x,int y){
    int i,j, temp;
    for(i=0;i<y-1;i++){
        for(j=0;j<y-i-1;j++){
            if(x[j]>x[j+1]){
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
            
        }
    }
}