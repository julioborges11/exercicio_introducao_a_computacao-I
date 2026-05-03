#include <stdio.h>

int main(){

    int a, b, c;
        printf("Digite seu numero:\n");
        scanf("%d", &a);
    for (b = 1; b <= 40; b++){
        c = a * b;
        printf("%d", a);
        printf(" X ");
        printf("%d", b);
        printf(" = ");
        printf("%d", c);
        printf("\n");
    }

}
