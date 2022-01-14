#include<stdio.h>
#include<stdlib.h>

int main() {

    int a1,a2,a3;

    printf("Digite a area1: ");
    scanf("%d", &a1);

    printf("Digite a area2: ");
    scanf("%d", &a2);

    printf("Digite a area3: ");
    scanf("%d", &a3);

    if(a1 == a2 && a3 == a2) 
        printf("Equilatero\n");
    else if(a1 == a2 && a2 != a3 || a3 != a1) 
        printf("Isosceles\n");
    else if ((a1 != a2 && a2) != a3 && a3 != a1)
        printf("Escaleno\n");
    
}