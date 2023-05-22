#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
float num, raiz;

    printf("Informe o numero:");
        scanf("%f", &num);
    
    raiz = sqrt(num);
    printf("A raiz do numero informado e: %.2f",raiz);
}