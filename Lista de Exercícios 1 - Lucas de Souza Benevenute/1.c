#include<stdio.h>
#include<stdlib.h>

int main(){
system("cls");
    printf("-----Numeros pares-----\n\n");
    for (int num = 0; num <= 100; num++){
        if(num % 2 == 0){
            printf("%d\n", num);
        }
    }
}