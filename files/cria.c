#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  // cria ponteiro para arquivo
  FILE *pont_arq;

  /* abre um arquivo (fopen)
   * retorno: ponteiro para FILE ou NULL
   * Modos:
   * r: leitura (o arquivo deve existir)
   * w: cria um arquivo vazio para escrita
   * a: anexa (acrescenta) a um arquivo
   * r+: abre um arquivo para atualização (leitura e escrita)
   * w+: cria um arquivo novo para leitura e escrita
   * a+: abre um arquivo para leitura e acréscimo
   */
  pont_arq = fopen("arq.txt", "a");

  // fechando arquivo
  fclose(pont_arq);

  //mensagem para o usuário
  printf("Sucesso ao criar o arquivo!");

  return(0);
}
