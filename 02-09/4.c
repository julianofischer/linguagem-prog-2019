#include<stdio.h>
#include<string.h>

/* Leia uma frase, incluindo espaços em branco. 
 * Em seguida, remova os espaços em branco e imprima 
 * a string sem espaços em branco. */

void main(){
    char str[200];
    char letra1, letra2;
    scanf("%[^\n]", str);
    scanf(" %c", &letra1);
    scanf(" %c", &letra2);

    int i=0;
    while(str[i]!='\0'){
        if (str[i] == letra1 ){
            str[i] = letra2;
        }
        i++;
    }

    printf("%s", str);
}
