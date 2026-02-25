/*Calcolare il massimo, tra una serie di numeri*/
#include <stdio.h>
int main(){
    int n, count , temp=0, i, max;
    printf("Quanti elementi vuoi immettere:");
    scanf("%d", &count);
    for(i=1; i<=count; i++){
        scanf("%d",&n);
        if((temp>n)){
            
            max=temp;
        }
        else if(n>temp){
            max=n;
        }
        else{
            max=temp;
        }
        temp = max;
    }
    printf("Il max è: %d", max);
    return 0;
}