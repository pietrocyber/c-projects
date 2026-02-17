/*Immettendo 3 caratteri scriverli in modo inverso*/
#include <stdio.h>
int main(){
    char x,y,z;
    printf("Inserisci 3 caratteri:");
    scanf("%c%c%c", &x, &y, &z);
    printf("%c%c%c", z,y,x);
    return 0;
}