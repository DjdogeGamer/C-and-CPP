#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int n1,n2, soma, sub, div, mul;
    char opcao;
    printf(" Calculadora 0.1D \n \tescolha uma opcao: +, -, *, / ");
    opcao = getchar();

    switch (opcao){
        case '+':
            printf("Soma\n");
            printf("Digite o n1: ");
            scanf("%d", &n1);
            printf("Digite o n2: ");
            scanf("%d", &n2);
            soma = n1+n2;
            printf("Resultado = %d\n", soma);
            break;

        case '-':
            printf("Substracao\n");
            printf("Digite o n1: ");
            scanf("%d", &n1);
            printf("Digite o n2: ");
            scanf("%d", &n2);
            sub  = n1-n2;
            printf("Resultado = %d\n", sub);
            break;

        case '*':
            printf("Multiplicaco\n");
            printf("Digite o n1: ");
            scanf("%d", &n1);
            printf("Digite o n2: ");
            scanf("%d", &n2);
            mul  = n1*n2;
            printf("Resultado = %d\n", mul);
            break;
        case '/':
            printf("Divisao\n");
            printf("Digite o n1: ");
            scanf("%d", &n1);
            printf("Digite o n2: ");
            scanf("%d", &n2);
            div  = n1/n2;
            printf("Resultado = %d\n", div);
        default:
            printf("ERRO!!!\n");
    } 
    return 0;
}