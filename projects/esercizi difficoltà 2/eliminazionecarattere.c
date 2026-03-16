/*Immettere una stringa e chiedere all'utente quale carattere elimnare dalla stringa*/

#include <stdio.h>
#include <stdlib.h>

void shiftsinistra(char *,int, int);
int main(){
    int rp, i;
    char c, *a;

    printf("Quanto lunga può essere la stringa: ");
    scanf("%d", &rp);
    getchar();
    
    a=(char*)malloc((rp+1)*sizeof(char));

    printf("Inserisci la stringa:\n");
    fgets(a,rp, stdin);

    printf("Quale carattere vuoi eliminare: ");
    scanf(" %c", &c);

    for(i=0;a[i]!='\0';i++){
        if(a[i]==c){
            shiftsinistra(a, rp, i);
            rp--;
            i--;
        }
    }

    printf("La stringa aggiornata è:\n");
    printf("%s", a);

    free(a);
    return 0;
}

void shiftsinistra(char *x, int y, int z){
    int i;
    for(i=z;x[i]!='\0';i++){
        x[i]=x[i+1];
    }
}