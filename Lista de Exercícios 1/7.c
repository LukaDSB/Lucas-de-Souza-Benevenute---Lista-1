#include<stdio.h>
#include<stdlib.h>

int main (){
float temperatura;

    printf("Informe a temperatura: ");
        scanf("%f", &temperatura);
    system("cls");
    temperatura = (temperatura*1.8) + 32;
    printf("A teperatura informada convertida para fahrenheit e: %.2f",temperatura);
}