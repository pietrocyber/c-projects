/*Contare quante volte, il carattere scelto esiste nella stringa*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *s, c;
    int i, cn=0;

    s=(char*)malloc(1000*sizeof(char));

    printf("Inserisci una stringa: ");
    scanf("%s", s);

    printf("Inserire il carattere da cercare: ");
    scanf(" %c", &c);
    
    for(i=0; s[i]!= '\0'; i++){
        if(c==s[i]) cn++;
    }
    
    printf( "Il carattere, c'è nella frase %d volte", cn);

    free(s);
    return 0;
}