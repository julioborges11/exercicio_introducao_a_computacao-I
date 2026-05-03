#include <stdio.h>

int main(){
         int a = 1, b = 0;
         printf ("Digite o numero: ");
         while (a != 0) {
            a = 0;
            scanf("%d", &a);
            b = b + a;
         }
         printf("%d", b);
return 0;
         }
