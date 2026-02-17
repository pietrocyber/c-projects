/*Immettendo due caratteri stampare in doppio i due caratteri, nell'ordine inverso*/
#include <stdio.h>
int main(){
    char a, b;
    printf("Inserire i due caratteri: ");
    scanf("%c%c", &a, &b);
    printf("%c%c%c%c", b,a,b,a);
    return 0;
}