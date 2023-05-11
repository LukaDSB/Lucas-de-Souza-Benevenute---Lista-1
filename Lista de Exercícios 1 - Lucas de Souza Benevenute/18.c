#include<stdio.h>
#include<stdlib.h>

int main() {
int num;
   
   printf("Digite um numero inteiro: ");
   scanf("%d", &num);
   
   for (int i = 1; i <= num; i++) {
      if (num % i == 0) {
         printf("%d\n", i);
      }
   }
}
