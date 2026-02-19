/*Inserendo un numero naturale n e un carattere char, stampi un triangolo rettangolo di altezza e base n, utilizzando il simbolo char*/
#include <stdio.h>

int main(){
    int n, i, j;
    char car;
    printf("Inserisci un numero: ");
    scanf("%d %c", &n, &car);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c", car);
        }
        printf("\n");
        
    }
    return 0;
}