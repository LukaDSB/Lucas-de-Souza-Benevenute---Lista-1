#include<stdio.h>
#include<stdlib.h>

void divisivel(int num){
    if(num % 3 == 0)
        printf("Numero divisivel por 3!\n");
    else if(num % 5 == 0)
        printf("Numero divisivel por 5!\n");
    else 
        printf("Numero nao divisivel por 3 nem por 5");
}

int main(){
system("cls");
int num;    

    printf("Informe o numero:");
        scanf("%d", &num);

    divisivel(num);
}