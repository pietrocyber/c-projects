/*Inserire una serie di stringhe e contare quante volte sono state inserite*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int CD=100;
void shiftsinistra(char*, int );
int main(){
    int n, i,j, cn, vista;
    char a[CD][CD];

    printf("Inserisci quante stringhe vuoi immettere: ");
    scanf("%d", &n);
    getchar();

    for(i=0;i<n;i++){
        printf("Inserisci la stringa %d: ", i+1);
        fgets(a[i],CD,stdin);
    }
    
    for(i=0;i<n;i++){
        
        for(j=0;a[i][j]!='\0';j++){ 
            /*elimino da ogni stringa lo spazio */
            if(a[i][j]==' '){
                shiftsinistra(a[i],j);
                j--;
            }
                
        }
        
        cn=0;
        for(j=0;a[i][j]!='\0';j++){
            if(a[i][j]=='\n'){
                a[i][j]='\0';
                break;
            }
           
        }
        
    }
    for(i=0;i<n;i++){
        vista=0;
        for(j=0;j<i;j++){
            if(strcmp(a[i], a[j])==0) vista=1;
        }
        if(!vista){
            cn=0;
            for(j=0;j<n;j++){
                if(strcmp(a[i],a[j])==0)cn++;
            } 
            printf("la parola %s è contenuta: %d volte\n", a[i], cn);
        }
        
    }
    
    return 0;
}

void shiftsinistra(char *x, int y){
    int i;
    for(i=y;x[i]!='\0';i++){
        x[i]=x[i+1];
    }
}