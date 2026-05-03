#include <stdio.h>
int main()
{
    float nM, n1, n2, n3;
        printf("Digite a primeira nota: ");
        scanf ("%f", &n1);

        printf("Digite a segunda nota: ");
        scanf ("%f", &n2);

        printf("Digite a terceira nota: ");
        scanf ("%f", &n3);

    nM = ((n1+n2+n3)/3);

    if (nM <= 3) {
        printf("Voce foi reprovado!");
    }

    else if (nM <= 7) {
    printf("Selecionado para novo exame");

    }

    else if (nM >= 10) {
    printf("Sua nota eh invalida");
    }

    else if (nM >= 7) {
    printf("Voce foi aprovado");
    }

    return 0;
}
