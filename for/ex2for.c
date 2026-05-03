#include <stdio.h>

int main(){

    int n, p, a, i;
    printf ("Digite dois numeros: ");
    scanf ("%d", &n);
    scanf ("%d", &a);

    if (n=2){
        printf("%d eh primo\n", n);
    }

    for(i = 2; i <= (n/2); i++){
        p = n / i;
    if ( n % i == 0) {
        printf ("\nO numero nao eh primo\n");
        p = 0;
        break;
    }

    }
   if (p){
            printf("%d eh primo\n", n);
        }
}
