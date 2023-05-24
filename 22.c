#include<stdio.h>
#include<stdlib.h>

int primo(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
system("cls");
int num;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num); system("cls");
    
    printf("----- Os divisores primos de %d sao ----\n", num);
    
    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && primo(i)) {
            printf("%d ", i);
        }
    }
}