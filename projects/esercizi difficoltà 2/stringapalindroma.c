/*Immettere una stringa e controllare se è palindroma*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    const int CD=100;
    char s[CD];
    int i, rp, j, trovato=0;

    printf("Inserisci una stringa: ");
    scanf("%s", s);

    i=0;
    while(s[i]!='\0'){
        i++;
    }
    rp=i;

    for(j=0;s[j]!='\0';j++){
        if(s[j]==s[rp-1-i]){
            trovato=1;
        }
    }
    
    if(trovato==1){
        printf("La stringa è palindroma!");
    }else{
        printf("La stringa non è palindroma!");
    }

    return 0;
}