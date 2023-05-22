#include <stdio.h>
#include<stdlib.h>

int primo(int num) {
    if (num <= 1)
        return 0;
        
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
system("cls");
int num;
    
    printf("Informe o numero: ");
    scanf("%d", &num); system("cls");
    
    if(primo(num))
        printf("O numero informado e primo!");
    else
        printf("O numero informado nao e primo!");
}