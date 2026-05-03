#include <stdio.h>
int main (){

int a = 89, b = 0;

while (b != a){
    printf("Digite um numero entre 0 e 100: ");
    scanf("%d", &b);

    if(b < a){
        printf("\n O numero certo eh maior\n");
    }
    if (b > a) {
        printf("O numero certo eh menor\n");}
}
    printf("Voce acertou");
    return 0;
}
