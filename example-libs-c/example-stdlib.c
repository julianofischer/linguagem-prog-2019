#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
     * rand: gera um número inteiro aleatório no intervalo fechado 0..RAND_MAX.
     * RAND_MAX: 2147483647
     */
    int r = rand();
    printf("1: %d\n", r);

    r = rand();
    printf("2: %d\n", r);

    r = rand();
    printf("3: %d\n", r);
    printf("----------------\n");

    /*
     * srand: define uma semente para a função srand
     */
    srand(13);
    r = rand();
    printf("1: %d\n", r);
    r = rand();
    printf("2: %d\n", r);
    r = rand();
    printf("3: %d\n", r);
    printf("----------------\n");

    srand(50);
    r = rand();
    printf("1: %d\n", r);
    r = rand();
    printf("2: %d\n", r);
    r = rand();
    printf("3: %d\n", r);
    printf("----------------\n");

    srand(13);
    r = rand();
    printf("1: %d\n", r);
    r = rand();
    printf("2: %d\n", r);
    r = rand();
    printf("3: %d\n", r);
    printf("----------------\n");

    /* atoi (alfanumeric to integer)
     *  recebe uma string que representa um número real em notação decimal e converte essa string no número
     *  real correspondente. Exemplo:  atoi (13) retorna 13
     *  Uso típico: i = atoi (str).
     *  A função retorna 0 se a string não for um número válido. Em razão de não distinguir entre conversão
     *  com sucesso para o número 0 e uma string inválida a função é considerada obsoleta.
     *  */

    int i;
    char str[3] = "50";
    char str2[3] = "=)" ;

    i = atoi(str);
    printf("atoi result: %d\n", i);
    printf("----------------\n");

    i = atoi(str2);
    printf("atoi result [2]: %d\n", i);
    printf("----------------\n");


    /*
     * strtol (string to long)
     * converte uma string para um long
     * é possível realizar verificação de erros com errno.h
     */
    i = strtol (str, NULL, 10);
    printf("strtol result: %d\n", i);
    printf("----------------\n");

    i = strtol (str2, NULL, 10);
    printf("strtol result [2]: %d\n", i);
    printf("----------------\n");

    return 0;
}