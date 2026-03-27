/*Immettere una linea e contare quanti caratteri ci sono*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    const int CD=100;
    int i, cn, j;
    char a[CD];

    printf("Inserisci la linea: ");
    fgets(a,CD,stdin);
    
    for(i=0;a[i]!='\0';i++){
        
        if(a[i]=='\n')continue;
        
        if(a[i]==' ')continue;
        
        for(j=0;j<i;j++){
            if(a[j]==a[i]){
             break;
            } 
        }
        if(i!=j){
            continue;
        }
    
        cn = 0;
        for(j = i; a[j] != '\0'; j++){
            if(a[i] == a[j])cn++;
        }
        printf("il carattere %c: %d volte\n", a[i], cn );
    }


    return 0;


}