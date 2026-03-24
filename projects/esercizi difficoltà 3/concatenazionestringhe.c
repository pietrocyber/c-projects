/*Immettere una serie di stringhe e concatenarle*/

#include <stdio.h>

int main(){
    const int CD=100;
    int i,c;
    char a[CD];

    printf("Inserisci le parole da concatenare(EOF per uscire): ");
    for(i=0;((c=getchar())!=EOF);i++){
       
        if(c =='\n'){
            a[i]=' ';
        }else{
             a[i]=c;
        }
    }
    a[i]='\0';
    
    printf("La frase concatenata è: %s\n", a);
    
    return 0;
}