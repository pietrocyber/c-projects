/*Immettere una stringa e stampare l'inverso*/

#include <stdio.h>
#include <stdlib.h>

void inverso(char *);

int main(){
    const int CD=100;
    char a[CD];

    printf("Inserisci la stringa: ");
    fgets(a,CD,stdin);

    inverso(a);

    return 0;
}
void inverso( char *x){
    int i, j;

    for(i=0; x[i]!='\n'; i++);
    for(j=i-1;j>=0;j--){
        printf("%c", x[j]);
    }
}