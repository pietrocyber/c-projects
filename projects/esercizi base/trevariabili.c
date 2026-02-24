/*Immettendo 3 variabili si sottragono dalla prima le altre due, infine moltiplicare il risulatato con il primo numero inserito*/
#include <stdio.h>
int main(){
    int x, y,z, risultato;
    printf("Inserire 3 variabili:");
    scanf("%d %d %d", &x, &y, &z);
    risultato=(x-y-z)*x;
    printf("%d", risultato);
    return 0;
}