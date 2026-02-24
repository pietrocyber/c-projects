/*Immettendo un carattere, stampare i due caratteri precedenti*/
#include <stdio.h>
int main(){
    char a;
    printf("Inserire il carattere:");
    scanf("%c", &a);
    printf("%c%c", a-1, a-2);
    return 0;
}