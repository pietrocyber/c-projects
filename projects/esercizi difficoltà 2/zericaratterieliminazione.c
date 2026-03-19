/*Eliminare gli zeri e i caratteri ripetuti da una linea inserita in input*/

#include <stdio.h>
#include <stdlib.h>

void shiftsinistra(char*, int);

int main(){
    int i, j;
    const int CD=100;
    char a[CD];

    printf("Inserisci la stringa: ");
    fgets(a,CD,stdin);

    for(i=0;a[i]!='\n';i++){
        if(a[i]=='0'){
            shiftsinistra(a, i);
            i--;
        }
    }

    for(i=0; a[i]!='\n';i++){
        for(j=i+1;a[j]!='\n';j++){
            if(a[j]==a[i]){
                 shiftsinistra(a, j);
                 j--;
            }
           
        }
    }

    printf("La stringa aggiornata è:\n%s\n", a);

    return 0;
}
void shiftsinistra(char *x, int y){
    int i;
    for(i=y;x[i]!='\n';i++){
        x[i]=x[i+1];
    }
}