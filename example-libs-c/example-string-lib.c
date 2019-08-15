#include <stdio.h>
#include<string.h>

int main() {
    char nome[10] = "João";
    printf("%s\n", nome);

    scanf("%s", &nome);
    printf("%s\n", nome);

    //error: assignment to expression with array type
    //nome = "José";

    /* strcpy
     * Realiza a cópia do conteúdo de uma variável para outra.
     */
    strcpy(nome, "José");
    printf("%s\n", nome);

    /* strncpy
     * Realiza a cópia do conteúdo de uma variável para outra.
     * No entanto, o número de caracteres deve ser informado.
     */
    char str[15];
    strncpy(str, "João das Neves", 9);

    /* visto que o caractere de final de string não é copiado
     * o mesmo deve ser inserido manualmente */
    str[9]='\0';
    printf("%s\n", str); //exibirá "João das"

    char str2[15] = "João das Neves";
    strncpy(str, "João das Neves", 8);
    str[8]='\0';
    printf("%s\n", str); //exibirá "João da"


    strcpy(nome, "João");
    /* strcat
     * Realiza a concatenação do conteúdo de uma variável (2) a outra (1)
     * Obs.: o primeiro parâmetro deve ter tamanho suficiente.
     * */
    strcat(nome, " das Neves");
    printf("%s\n", nome); //Exibirá "João das Neves"


    /* strncat
     * Realiza a concatenação do conteúdo de uma variável (2) a outra (1)
     * O número de caracteres a ser concatenado deve ser informado.
     * Obs.: o primeiro parâmetro deve ter tamanho suficiente.
     * */
    strcpy(nome, "João");
    strncat(nome, " das Neves", 4);
    printf("%s\n", nome); //Exibirá "João das"

    /* strlen: retorna o tamanho de uma string
     * João das\0
     * 12345678
     */
    printf("O tamanho do nome é %d", strlen(nome)); //exibirá 9

    /* strcmp: compara duas strings lexicograficamente
     * retorna 0: se as strings são iguais
     * retorna < 0: se a primeira string é lexicograficamente menor
     * retorna > 0: se a primeira string é lexicograficamente maior
     * */

    printf("%d\n", strcmp("abacate", "banana")); //retorna -1
    printf("%d\n", strcmp("banana", "abacate")); //retorna 1
    printf("%d\n", strcmp("abacate", "abacate")); //retorna 0

    return 0;

}