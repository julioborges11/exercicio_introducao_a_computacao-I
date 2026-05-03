#include <stdio.h>

#include <stdio.h>

int main() {
    int n, a, g, i, soma = 0;
    int eh_primo;

    printf("Digite o limite inferior: ");
    scanf("%d", &a);
    printf("Digite o limite superior: ");
    scanf("%d", &n);


    if (a > n) {
        int temp = a;
        a = n;
        n = temp;
    }


    for (g = a; g <= n; g++) {

        if (g < 2) continue;

        eh_primo = 1;


        for (i = 2; i <= g / 2; i++) {
            if (g % i == 0) {
                eh_primo = 0;
                break;
            }
        }


        if (eh_primo == 1) {
            soma += g;
        }
    }

    printf("\nA soma dos primos entre o intervalo e: %d\n", soma);

    return 0;
}
