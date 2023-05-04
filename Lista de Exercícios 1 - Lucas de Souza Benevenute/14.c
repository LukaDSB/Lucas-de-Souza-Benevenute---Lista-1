#include<stdio.h>
#include<stdlib.h>

int main(){
float numeros[4];

    for (int i = 0; i < 4; i++){
        printf("Informe o valor %d: ",i);
            scanf("%f", &numeros[i]);
    }

    menor(numeros);
}

void menor(float *numeros){
system("cls");
float menor = numeros[1];

    for(int i = 0; i < 4; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    printf("Maior valor informado: %.2f", menor);
}