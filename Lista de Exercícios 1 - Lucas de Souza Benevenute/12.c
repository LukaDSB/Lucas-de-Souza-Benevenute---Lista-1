#include<stdio.h>
#include<stdlib.h>

int main(){
system("cls");
int num;

    printf("Informe o numero:");
        scanf("%d", &num);
    
    resultado(num);
}

void resultado(int num){
    if(num == 0){
        printf("O numero informado e: 0");
    }else if(num % 2 == 0)
        printf("O numero informado e par!");
    else
        printf("O numero inforado e impar!");
}