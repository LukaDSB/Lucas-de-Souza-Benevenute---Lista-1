#include<stdio.h>
#include<stdlib.h>

int main() {
system("cls");
int numero, soma = 0;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); system("cls");
    
    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }
    printf("A soma dos digitos do numero informado: %d\n", soma);
}