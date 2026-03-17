/*Immettere una stringa ed eliminare le occorrenze multiple*/

#include <stdio.h>
#include <stdlib.h>

void shiftsinistra(char *, int);
int main(){
    int rp, i, j;
    char *s, temp;

    printf("Quanto è lunga la stringa?\n");
    scanf("%d", &rp);
    getchar();

    s=(char*)malloc((rp+1)*sizeof(char));

    printf("Inserisci la stringa: ");
    fgets(s,rp+1,stdin);

    for(i=0; s[i]!='\0';i++){
        temp=s[i];
        for(j=i+1;s[j]!='\0';j++){
            if(temp==s[j]){
                shiftsinistra(s,j);
                rp--;
                j--;
            }
        }
    }

    printf("La stringa aggiornata è:\n%s\n", s);
    free(s);
    return 0;
}

void shiftsinistra(char *x, int y ){
    int i;
    for(i=y;x[i]!='\0'; i++){
        x[i]=x[i+1];
    }
}