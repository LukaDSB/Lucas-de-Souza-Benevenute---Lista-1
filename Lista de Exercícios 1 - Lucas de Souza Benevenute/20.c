#include<stdio.h>
#include<stdlib.h>

int triangular(int num) {
int i = 1;
int tri = 0;
    
    while (tri < num) {
        tri = tri + i;
        i++;
        
        if (tri == num) {
            return 1;  
        }
    }
    return 0;  
}

int main(){
system("cls");
int num;

    printf("Informe o numero:");
        scanf("%d",&num);

    if(triangular(num))
        printf("O numero e triangular!");
    else
        printf("O numero nao e triangular!");
}