#include<stdio.h>

int main() {
    int a = 0,b = 0 ,c = 0;
    float m = 0;

    printf("Digite o numero 1: ");
    scanf("%d", &a);

    printf("Digite o numero 2: ");
    scanf("%d", &b);

    printf("Digite o numero 3: ");
    scanf("%d", &c);

    m = (a+b+c)/3;

    printf("A media aritmetica dos 3 numeros e: %.2f", m);

}