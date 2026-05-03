#include <stdio.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "Portuguese");
    int a, b, r;
        printf("Digite um número a:\n");
        scanf("%d", &a);
        printf("Digite um número b:\n");
        scanf("%d", &b);
    while (b != 0)
        {
            r = a % b;
            a = b;
            b = r;

        }
printf("O MDC é: ");
printf("%d", a);
    }
