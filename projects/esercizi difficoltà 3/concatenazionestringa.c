/*Concatenare N stringhe inserite da tastiera*/
#include <stdio.h>
#include <stdlib.h>

const int CD=100;
int main(){
    char a[CD][CD], c;
    int i,j;
    printf("Inserisci le stringhe:\n");
    for(i=0; scanf("%s", a[i])==1;i++);
    
    printf("La stringa concatenata è: ");
    for(j=0;j<i;j++){
        printf("%s ",a[j]);
    }
    return 0;
}