#include<stdio.h>

void main(){
    int numeros[10][3];
    for (int linha = 0; linha < 10; linha++){
        for(int coluna = 0; coluna < 3; coluna ++){
            scanf("%d", &numeros[linha][coluna]);
        }
    }

    for (int linha = 9; linha >= 0; linha--){
        for(int coluna = 2; coluna >= 0; coluna --){
            printf("%d ", numeros[linha][coluna]);
        }
        printf("\n");
    }
}
