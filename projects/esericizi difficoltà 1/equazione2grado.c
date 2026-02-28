/*Risolvere le equazioni di secondo grado*/
#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, x1, x2;
    double delta, radice;

    printf("Immettere i coefficienti dell'equazione di secondo grado: ");
    scanf("%f %f %f", &a, &b, &c);

    while(a==0 && b==0){
        printf("Non è un'equazione di secondo grado!");
        printf("Immettere i coefficienti dell'equazione di secondo grado: ");
        scanf("%f %f %f", &a, &b, &c); 
    }

    if(a==0){
        x1=(-c/b);
        printf("%f ", x1);
    }
    else if(b==0){
        x1=sqrt((-c/a));
        printf("%f ", x1);
    }
    else if(c==0){
        x1=0;
        x2=(-b/a);
        printf("%f ", x1);
        printf("%f ", x2);
    }

    if(a!=0 && b!=0 && c!=0){
        delta= (pow(b,2)- 4*(a)*(c));
        if(delta!=0 && delta>0){
            radice = sqrt(delta);
            x1=((-b)-radice)/(2*a);
            x2=((-b)+radice)/(2*a);
            printf("%f ", x1);
            printf("%f ", x2);
        }
        else if(delta==0){
            x1=(-b)/(2*a);
            printf("%f ", x1);
        }
        else if(delta<0){
            printf("L'equazione non ammette soluzioni reali!");
        }
    }

    return 0;
}