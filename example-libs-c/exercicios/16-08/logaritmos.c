#include <stdio.h>
#include <math.h>

/*  16/08/2019 
 *  Faça um programa que leia um inteiro n e exiba o logaritmo natural
 *  e o logaritmo em base 10 para um até n.
 *  Ex: se o número lido for 3, o programa deve exibir
 *  1: [] - []
 *  2: [] - []
 *  3: [] - []
*/
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        printf("%d: [%f] - [%f]\n", i, log(i), log10(i));
    }
    return 0;
}
