#include <stdio.h>
#include<string.h>

/*  15/08/2019 
 *  Faça um programa que leia três strings e exiba-as em ordem ascendente
 *  de tamanho e lexicograficamente.
*/
int main() {
    char str1[20], str2[20], str3[20], menor[20], maior[20], domeio[20];
    printf("Digite a primeira string: ");
    scanf("%s", &str1);

    printf("Digite a segunda string: ");
    scanf("%s", &str2);

    printf("Digite a terceira string: ");
    scanf("%s", &str3);

    strcpy(maior, str1);
    strcpy(menor, str2);
    strcpy(domeio, str3);

    char aux[20];

    //printf("maior [%s] domeio [%s] e menor [%s]\n", maior, domeio, menor);

    if (strlen(domeio) > strlen(maior)){
        strcpy(aux, maior);
        strcpy(maior, domeio);
        strcpy(domeio, aux);
    }

    //printf("maior [%s] domeio [%s] e menor [%s]\n", maior, domeio, menor);

    if (strlen(menor) > strlen(domeio)){
        strcpy(aux, domeio);
        strcpy(domeio, menor);
        strcpy(menor, aux);
    }

    //printf("maior [%s] domeio [%s] e menor [%s]\n", maior, domeio, menor);

    if (strlen(domeio) > strlen(maior)){
        strcpy(aux, maior);
        strcpy(maior, domeio);
        strcpy(domeio, aux);
    }

    //printf("maior [%s] domeio [%s] e menor [%s]\n", maior, domeio, menor);

    printf("%s - %s - %s\n", menor, domeio, maior);
    //printf("maior [%s] domeio [%s] e menor [%s]\n", maior, domeio, menor);

    if (strcmp(domeio, maior) > 0){
        strcpy(aux, maior);
        strcpy(maior, domeio);
        strcpy(domeio, aux);
    }

    //printf("maior [%s] domeio [%s] e menor [%s]\n", maior, domeio, menor);

    if (strcmp(menor, domeio) > 0){
        strcpy(aux, domeio);
        strcpy(domeio, menor);
        strcpy(menor, aux);
    }

    //printf("maior [%s] domeio [%s] e menor [%s]\n", maior, domeio, menor);

    if (strcmp(domeio, maior) > 0){
        strcpy(aux, maior);
        strcpy(maior, domeio);
        strcpy(domeio, aux);
    }

    //printf("maior [%s] domeio [%s] e menor [%s]\n", maior, domeio, menor);

    printf("%s - %s - %s\n", menor, domeio, maior);



    //printf("%d\n", strcmp("abacate", "banana")); //retorna -1
    //printf("%d\n", strcmp("banana", "abacate")); //retorna 1
    //printf("%d\n", strcmp("abacate", "abacate")); //retorna 0

    return 0;

}
