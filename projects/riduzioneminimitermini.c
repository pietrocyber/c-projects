/* stiamo cercando di ridurre in minimi termini, facendo la somma di due numeri, utilizzando MCD*/

#include <stdio.h>

int main(){
    int n1 , n2 , d1=0 , d2=0 , n, d , temp, k, num, den;
    while(d1==0 || d2==0){
        printf("Non si può calcolare il MCD, perche' abbiamo una forma indeterminata!\n");
        printf("Inserire i due numeratori:");
        scanf("%d %d", &n1,  &n2);
        printf("Inserire i denominatori:");
        scanf("%d %d", &d1, &d2);
    }
    num = n1*d2 + n2*d1;
    den = d1 * d2;
    n = num; 
    d = den;
    while (d != 0) {
        temp = n % d;
        n = d;
         d = temp;
    }
    k = n;
    num = num / k;
    den = den / k; 
    printf("il numero ridotto in minimi termini e': %d/%d",num , den );
    
    return 0;
}