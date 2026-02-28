/*Immettere una serie di numeri, e definire le cifre che lo compongono, quando si immette 0 esce*/
#include <stdio.h>

int main(){
    
    int n, cifrainv, inv=0, cifra, i, j, tnum=1;
    
    printf("Inserisci i numeri: ");
    
    for(i=0;tnum!=0;i++){
        scanf("%d",&n);
        tnum=n;

        for(j=0;n!=0;j++){
            cifra=n%10;
            inv=inv*10+cifra;
            n=n/10;
        }
        
        for(;j!=0;j--){
            cifrainv=inv%10;
            inv=inv/10;
            printf("%d ", cifrainv);
        }
        
        printf("\n");
    }

    return 0;
}