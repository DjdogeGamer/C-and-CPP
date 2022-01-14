#include<stdio.h>

int main() {
    float r = 0;
    float area = 0;
    const float pi = 3.14;

    printf("Digite a area do circulo: ");
    scanf("%f", &r);

    area = pi*(r*r);

    printf("A area do circulo e: %.2f\n", area);

    return 0;
}