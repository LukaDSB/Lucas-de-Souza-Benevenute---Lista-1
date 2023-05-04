#include<stdio.h>
#include<stdlib.h>

int main(){
system("cls");
int num;

    printf("Informe o numero:");
        scanf("%d",&num);

     parOuImpar(num);
}

void parOuImpar(int num){
system("cls");
    if(num % 2 == 0)
        printf("O numero informado e par!");
    else  
        printf("O numero informado e impar!");  
}