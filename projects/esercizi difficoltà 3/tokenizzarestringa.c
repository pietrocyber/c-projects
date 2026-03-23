/*Inserire una frase e tokenizzarla*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    const int CD=100;
    char a[CD];
    int i;

    printf("Inserisci una frase: ");
    fgets(a, CD, stdin);

    printf("Ecco la frase a token:\n");
    for(i=0; a[i]!='\0';i++){
        if(a[i]==' '){
            printf("\n");
        }else if(a[i]!='\n'){
            printf ("%c",a[i]);
        }
    }
    
    return 0;
}