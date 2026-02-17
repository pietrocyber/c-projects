/*Immettendo un carattere, scrivere il carattere precedente e il carattere successivo*/
#include <stdio.h>
int main(){
    char a;
    printf("Inserire un carattere:");
    scanf("%c", &a);
    printf("%c %c", a-1, a+1);
    return 0;
}