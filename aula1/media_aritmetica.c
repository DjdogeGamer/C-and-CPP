#include<stdio.h>

int main() {
    float a,b,c;

    printf("Digite o numero 1: ");
    scanf("%f", &a);

    printf("Digite o numero 2: ");
    scanf("%f", &b);

    printf("Digite o numero 3: ");
    scanf("%f", &c);

    float m = (a+b+c)/3;

    printf("A media aritmetica dos 3 numeros e: %.2f", m);

}