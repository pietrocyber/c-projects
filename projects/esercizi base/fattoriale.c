/*Immettendo un numero fare il fattoriale*/
#include <stdio.h>
int main(){
    int n,i, fatt;
    printf("Inserire un numero:");
    scanf("%d", &n);
    fatt=1;
    for(i=n;i>=1;i--){
        fatt= fatt*i;
    }
    printf("%d", fatt);
    return 0;
}