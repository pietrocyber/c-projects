/*Immetendo due variabili verranno scambiati i valori*/
#include <stdio.h>
int main(){
    int temp, x, y;
    printf("Inserire due variabili:");
    scanf("%d %d", &x, &y);
    temp=x;
    x=y;
    y=temp;
    printf("I valori sono: x=%d y=%d", x,y);
    return 0;

}