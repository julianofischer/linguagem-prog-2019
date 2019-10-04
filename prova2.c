#include <stdio.h>
#include <stdlib.h>

//definir estrutura aluno
typedef struct {
    char nome[50];
    char cpf[11];
    double nota;
} aluno;

int main(){
    //alocação dinâmica com malloc
    aluno *ptr_aluno;
    ptr_aluno = malloc(sizeof(aluno));

    aluno vetor[5];

    //ler 5 estruturas e armazená-las em um vetor
    for (int i=0; i<5; i++){
        printf("\nDigite o nome: ");
        scanf(" %s", vetor[i].nome);
        printf("\nDigite o cpf: ");
        scanf(" %s", vetor[i].cpf);
        printf("\nDigite a nota: ");
        scanf(" %lf", &vetor[i].nota);
    }

    for (int i=0; i<5; i++){
        printf("[%s, %s, %lf]\n", vetor[i].nome, vetor[i].cpf, vetor[i].nota);
    }

    FILE *ptr_file;
    ptr_file = fopen("saida.txt", "w");

    double media = 0;
    for (int i=0; i<5; i++){
        media = media + vetor[i].nota;
    }
    media = media/5.0;
    fprintf(ptr_file, "A média é %lf", media);

}
