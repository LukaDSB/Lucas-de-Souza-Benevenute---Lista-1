#include<stdio.h>
#include<stdlib.h>

int main() {
system("cls");
float n1, n2, n3;

    printf("Informe o numero 1: ");
    scanf("%f", &n1);

    printf("Informe o numero 2: ");
    scanf("%f", &n2);

    printf("Informe o numero 3: ");
    scanf("%f", &n3); system("cls");

    if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1) {
        printf("Forma um triangulo!\n");
    } else {
        printf("Nao forma um triangulo!\n");
    }
}