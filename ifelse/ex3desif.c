#include <stdio.h>
int main(){

    float a, b, c;
        printf("Digite os lados do triangulo: \n");
        scanf("%f" "%f" "%f", &a, &b, &c);
    if ( a < c + b && b < a + c && c < a+b) {
        printf ("o triangulo existe\n");



    if (a == b && b == c && c == a){
            printf("o triangulo eh equilatero\n");
        }
        else if ( a == b && b != c || a == c && c != b || b == c && a != c){
            printf("o triangulo eh isosceles\n");
        } else  {
        printf("o triangulo eh escaleno");
        }
       } else {
    printf("o triangulo nao existe");
        }
return 0;
}

