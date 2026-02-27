/*Immettere un numero positivo e stampare le cifre che lo compongono*/
#include <stdio.h>
int main(){
    
    int i, n, cifra, j, cifrainv, inv=0 ;
    
    printf("Inserisci un numero:");
    scanf("%d", &n);
    
    for(i=0;n!=0;i++){
        cifra=n%10;
        inv=inv*10+cifra;
        n=n/10;
    }
    
    for(;i!=0;i--){
        cifrainv=inv%10;
        inv=inv/10;
        printf("%d ", cifrainv);
    }
    
   
    return 0;
}