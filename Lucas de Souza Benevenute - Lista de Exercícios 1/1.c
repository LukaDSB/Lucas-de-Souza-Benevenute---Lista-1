#include<stdio.h>
#include<stdlib.h> //Biblioteca adicionada para usar a função system()

int main(){
system("cls"); //trocar 'cls' por 'clear' no Linux ou MacOS para que o terminal seja limpo 
    printf("-----Numeros pares-----\n\n");
    for (int num = 0; num <= 100; num++){
        if(num % 2 == 0){
            printf("%d\n", num);
        }
    }
}