/* Immettendo i valori a,b,c risolviamo un equazione del tipo: ax^2+bx+c=0*/
#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c, delta ,x1, x2, radice;
    printf("Inserisci i valori di a,b,c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a==0){
        x1=-c/b;
        printf("il valore di x è: %lf ", x1);
    }
    else{
        delta=(pow(b,2))-(4*a*c);
        radice=sqrt(delta);
        if(delta==0){
            x1=-b/(2*a);
            printf("Il valore di x è: %lf", x1);
        }
        else{
            if(delta<0){
                x1=(-b-delta)/(2*a);
                x2=(-b+delta)/(2*a);
                printf("I valori possibili di x è: %lf e %lf", x1, x2);
            }
        }
    }
    return 0;
}