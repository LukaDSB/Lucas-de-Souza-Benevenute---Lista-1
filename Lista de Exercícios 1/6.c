#include<stdio.h>
#include<stdlib.h>

int main(){
float numeros[4];

    for (int i = 0; i < 4; i++){
        printf("Informe o valor %d: ",i);
            scanf("%f", &numeros[i]);
    }

    maior(numeros);
}

void maior(float *numeros){
system("cls");
float maior = numeros[0];

    for(int i = 0; i < 4; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    printf("Maior valor informado: %.2f", maior);
}