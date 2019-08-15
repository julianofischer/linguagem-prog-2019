#include <stdio.h>
#include <math.h>

int main() {

    /* floor
     *  Arredonda um número em ponto fluante "para baixo"
     */

    float f = 1.99;
    printf("%.2f\n", floor(f)); //exibirá 1.00 ...

    f = 1.35;
    f = floor(f);
    printf("%.2f\n", f); //exibirá 1.00 ...

    /* ceil
     *  Arredonda um número em ponto fluante "para cima"
     */
    f = 1.99;
    printf("%.2f\n", ceil(f)); //exibirá 2.00

    f = 1.35;
    f = ceil(f);
    printf("%.2f\n", f); //exibirá 2.00

    /* sqrt
     *  Calcula a raiz quadrada de um número
     */
    printf("%.2f\n", sqrt(9)); //exibirá 3.00
    printf("%.2f\n", sqrt(25)); //exibirá 25.00

    /* pow (a, b)
     *  Calcula a potência para base a e expoente b
     */
    printf("%.2f\n", pow(2,3)); //2³ -> exibirá 8.00
    printf("%.2f\n", pow(3,3)); //3³ -> exibirá 27.00

    /* log
     *  Calcula o logaritmo natural para um número
     *  O logaritmo natural é o logaritmo de base e, onde e é um número irracional aproximadamente igual a 2,71828.
     *  https://pt.wikipedia.org/wiki/Logaritmo_natural
     */
    printf("%.2f\n", log(2.71828)); //3³ -> exibirá 1.00
    f = 2.71828 * 2.71828 * 2.71828;
    printf("%.2f\n", log(f)); //exibirá 3.00

    /* log10
     *  Calcula o logaritmo em base 10 para um número
     *  */
    f = 10.0 * 10.0;
    printf("%.2f\n", log10(f)); //exibirá 2.00
    f = 10.0 * 10.0 * 10.0;
    printf("%.2f\n", log10(f)); //exibirá 3.00
    f = 10.0 * 10.0 * 10.0 * 10.0;
    printf("%.2f\n", log10(f)); //exibirá 4.00

}