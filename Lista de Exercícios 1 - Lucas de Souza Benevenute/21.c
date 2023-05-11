//Este é o mesmo código do exercício 9, atende aos 2 casos
#include<stdio.h>
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
    
    printf("----- -Numeros primos ate %d ------\n\n", num);
    for (int i = 2; i <= num; i++) {
        if (primo(i))
            printf("%d ", i);
    }
    printf("\n");
}