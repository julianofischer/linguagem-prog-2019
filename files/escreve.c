#include <stdio.h>
#include <stdlib.h>

int main () {
   FILE * fp;

   fp = fopen ("file.txt", "w+");
   fprintf(fp, "%s %s %s %d\n", "Nós", "estamos", "em", 2012);

   fclose(fp);

   return(0);
}
