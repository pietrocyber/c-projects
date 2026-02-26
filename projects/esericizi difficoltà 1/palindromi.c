/*Inserisci un numero di numeri interi positivi e se sono palidromi. quando il numero è 0 uscire*/
#include <stdio.h>
int main(){
    int i,n,inv, temp=1, c, r;
    printf("Inserisci i numeri:");
    for(i=0;temp!=0;i++){
        scanf("%d", &n);
        temp=n;
        if(temp==0)break;
        inv=0;
        while(n>0){
            r=n%10;
            inv=inv*10+r;
            n=n/10;
        }
        if(inv==temp){
            printf("Il numero è palindromo!");
        }
        else{
            printf("Il numero non è palindromo!");
        }
    }
    return 0;
}