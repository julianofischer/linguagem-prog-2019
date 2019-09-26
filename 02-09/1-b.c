#include<stdio.h>
#include<string.h>

/* Leia uma frase, incluindo espaços em branco. 
 * Em seguida, remova os espaços em branco e imprima 
 * a string sem espaços em branco. */

void main(){
    char str[50];

    scanf("%[^\n]", str);
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] == ' '){
           for (int j = i; j <= strlen(str); j++){
               str[j] = str[j+1];
           }
        }
        i++;
    }
    printf("%s", str);
}
