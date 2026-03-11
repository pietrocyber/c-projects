/*Immettere un numero intero positivo e contare quante occorrenze ci sono, inserendo un carattere si esce*/

#include <stdio.h>

int main(){
    int n, i, c, resto;
    while(1){
        printf("Inserire un intero positivo: ");
        if(scanf("%d",&n)==1){
            i=0;
            printf("Inserire la cifra da contare (carattere per uscire): ");
            scanf("%d", &c);
           
            while(n>0){
            
                resto=n%10;
                if(resto==c)i++;
                n/=10;
            }
            printf("Le occorrenze sono: %d\n", i);
        }
        else break;
        
    }
    return 0;
}