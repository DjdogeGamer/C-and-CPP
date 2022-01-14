#include<stdio.h>

int main() {
    float celsius = 0;

    printf("Digite uma temperatura em celsius:");
    scanf("%f", &celsius);

    float far = (celsius*9/5)+32;

    printf("%.2f Celsius = %.2f Farenheint.\n", celsius, far);

    return 0;
}