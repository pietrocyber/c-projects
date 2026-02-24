/*Sostituire il ciclo for con un ciclo while*/
#include <stdio.h>
int main(){
    int i, x=3;
    i=1;
    while(i<=x){
        printf("%d\n", i*x);
        i++;
    }
    return 0;
}