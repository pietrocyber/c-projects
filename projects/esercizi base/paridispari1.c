/*Leggere numeri finché non viene inserito lo zero, e conta quanti numeri sono pari e quanti sono dispari*/
#include <stdio.h>
int main(){
    int n, pari=0, dispari=0;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        if(n%2==0){
            pari=pari+1;
        }
        else{
            dispari=dispari+1;
        }
    } while (n!=0);
    printf("pari = %d ",pari);
    printf("dispari = %d " , dispari);
    return 0;
}