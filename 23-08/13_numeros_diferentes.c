#include<stdio.h>

int repetido(int numeros[], int num, int qtdd_lidos){
    for(int j = 0; j < qtdd_lidos; j++){
        if (numeros[j] == num){
            return 1;
        }
    }
    return 0;
}

void main(){
    int numeros[10];
    int num;
    printf("Digite o número 1: ");
    scanf("%d", &numeros[0]);
    int nros_lidos = 1;
    int foi_lido = 0;

    while(nros_lidos < 10){
       printf("Digite o número %d: ", nros_lidos + 1);
       scanf("%d",&num);
       foi_lido = repetido(numeros, num, nros_lidos);
       if (!foi_lido){
         numeros[nros_lidos] = num;
         nros_lidos = nros_lidos + 1;
       }
    }

   for (int j=0; j<10; j++){
      printf("%d ", numeros[j]);
   }
   printf("\n");
}
