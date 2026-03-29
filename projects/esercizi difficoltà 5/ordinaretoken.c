/*Inserisci una linea, dividerla in token e ordinarli*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int CD = 100;
void bubblesort(char x[][CD], int n);

int main(){
    char linea[CD];
    char token[CD][CD];
    int i, j, tcount;

    printf("Inserisci una linea:\n");
    if (fgets(linea, CD, stdin) == NULL) {
        return 0;
    }

    /* divisione in token */
    tcount = 0;
    j = 0;
    for (i = 0; linea[i] != '\0'; i++) {
        if (linea[i] != ' '  && linea[i] != '\n') {
            if (j < CD - 1) {
                token[tcount][j] = linea[i];
                j++;
            }
        } else {
            if (j> 0) {
                token[tcount][j] = '\0';
                tcount++;
                j = 0;
            }
        }
    }
    if (j > 0) {
        token[tcount][j] = '\0';
        tcount++;
    }

    if (tcount > 1) {
        bubblesort(token, tcount);
    }

    /* stampiamo */
    printf("I token ordinati sono:\n");
    for (i = 0; i < tcount; i++) {
        printf("%s\n", token[i]);
    }

    return 0;
}

void bubblesort(char x[][CD], int n){
    int i, j;
    char temp[CD];
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(x[j], x[j+1]) > 0) {
                strcpy(temp, x[j]);
                strcpy(x[j], x[j+1]);
                strcpy(x[j+1], temp);
            }
        }
    }
}