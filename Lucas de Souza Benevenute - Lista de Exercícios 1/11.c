#include<stdio.h>
#include<stdlib.h>

int fatorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * fatorial(n-1);
  }
}

int main(){
system("cls");
int num;

    printf("Escreva o numero:");
        scanf("%d", &num);
    int fat = fatorial(num);
    printf("Fatorial: %d", fat);
}