/*Inserire una serie di interi in sequenza libera e contarli*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a, n, cn=0, i=0, j, vista,q,k;

    a=(int*)malloc(1*sizeof(int));
    
    printf("Inserisci i numeri (EOF per uscire):\n");
    
    /*inserisco i numeri*/
    while(scanf("%d",&n)!=EOF){
        a=(int*)realloc(a,(i+1)*sizeof(int));
        a[i++]=n;
    }

    /*Conto gli interi */
    for(j=0;j<i;j++){
        vista=0;
        for(k=0;k<j;k++){
            if(a[k]==a[j]){
                vista=1;
                break;
            }
        }
        if(!vista){
            cn=0;
            for(q=0;q<i;q++){
                if(a[q]==a[j])cn++;
            }
            printf("L'intero %d si trova %d volte\n", a[j], cn);
        }
        
    }

    return 0;
}