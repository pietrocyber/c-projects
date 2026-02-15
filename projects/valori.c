/*Determiniamo il valore di x e y*/
#include <stdio.h>

int main(){
    int x, y;
    printf("Inserire due valori:");
    scanf("%d %d", &x, &y);
    y=3*y;
    x=y+x;
    printf("I valori sono: %d e %d", x, y);
    return 0;

}
