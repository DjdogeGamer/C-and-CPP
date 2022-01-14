#include<stdio.h>

int main(){
    int num = 0;

    printf("Digite um numero:");
    scanf("%d", &num);

    int suc = num+1;
    int ant = num-1;

    printf("O sucesso do numero e: %d\n", suc);
    printf("O antecessor do numero e: %d\n", ant);

    return 0;
}
