#include <stdio.h>

int main() {
    float So, SN, SC, D;
    int Cg;
            printf ("Digite seu cargo, no seguinte formato:");
            printf ("\nGerente = 0");
            printf ("\nEngenheiro = 1 ");
            printf ("\nTecnico = 2 ");
            printf ("\nOutro = 3\n");
        scanf("%d", &Cg);
        if (Cg > 3) {
    printf ("Digite um cargo valido");
    return 0;
   }

   else {printf ("Digite seu salario: ");
        scanf ("%f", &So);
   }

    if (Cg == 0) {
    SN = So * 1.1;
   }
   else if (Cg == 1) {
    SN = So * 1.2;
   }
   else if (Cg == 2) {
    SN = So * 1.3;
   }
   else if (Cg == 3) {
    SN = So * 1.4;
   }

   D = SN - So;
printf ("\nSeu salario atual eh: " "%f", So );
printf ("\nSeu novo salario eh: " "%f", SN );
printf ("\nA diferenca eh: " "%f", D );




return 0;

}
