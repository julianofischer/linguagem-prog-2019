#include<stdio.h>
#include<string.h>

/* Leia uma frase, incluindo espaços em branco. 
 * Em seguida, remova os espaços em branco e imprima 
 * a string sem espaços em branco. */

void main(){
    char str[50];
    char str2[50];

    scanf("%[^\n]", str);
    int i = 0;
    int j = 0;
    while (str[i] != '\0'){
        if (str[i] != ' '){
            str2[j] = str[i];
            j++;
        }
        i++;
    }

    str2[j] = '\0';
    printf("%s", str2);
}
