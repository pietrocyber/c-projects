/*Immettere una stringa ed eliminare il carattere centrale*/

#include <stdio.h>
#include <stdlib.h>

void shiftsinistra(char *,int);
int main(){
    const int CD=100;
    int i, div;
    char a[CD];

    printf("Inserisci la stringa: ");
    scanf("%s", a);
    
    i=0;
    while(a[i]!='\0'){
        i++;
    }
    div=i/2;
    
    shiftsinistra(a,div);

    printf("La stringa aggiornata è:\n%s\n", a);
    return 0;
}
void shiftsinistra(char *x, int y){
    int i;
    for(i=y;x[i]!='\0';i++){
        x[i]=x[i+1];
    }
}