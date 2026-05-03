#include <stdio.h>
int main(){

    float n1, n2, s;
    char Op;
    printf("Digite os algarismos da operacao:\n");
        scanf("%f", &n1);
        scanf("%f", &n2);
    printf("\nDigite a operacao no formato: \n'+'para adicao\n'-' para subtracao\n'*'para multiplicacao\n'/'para divisao\n");
        scanf (" %c", &Op);
    switch (Op){
        case '+':
            s = n1 + n2;
            printf("%f",s );
            break;
        case '-':
            s = n1 - n2;
            printf("%f",s );
            break;
        case '*':
            s = n1 * n2;
            printf("%f",s );
            break;
        case '/':
            s = n1 / n2;
            printf("%f",s );
            break;
        default:
            printf("Erro, reinicie o programa");
    }
return 0;
}

