#include<stdio.h>
#include<stdlib.h>

int main(){
system("cls");
int num;

    printf("Informe o numero:");
        scanf("%d", &num);
    
    exibirTabuada(num);
}

void exibirTabuada(int num){
    for (int i = 1; i < 11; i++){
        printf("%d x %d = %d\n", num, i,num*i);
    }
}