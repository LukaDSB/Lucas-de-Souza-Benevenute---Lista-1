#include<stdio.h>
#include<stdlib.h>

void parOuImpar(int num){
system("cls");
    if(num % 2 == 0)
        printf("O numero informado e par!");
    else  
        printf("O numero informado e impar!");  
}

int main(){
system("cls");
int num;

    printf("Informe o numero:");
        scanf("%d",&num);

     parOuImpar(num);
}