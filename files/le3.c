#include <stdio.h>
#include <stdlib.h>

int main () {
   FILE *fp;
   char *c;
   c = malloc(sizeof(char)*100);

   fp = fopen("file.txt","r");
   while(1) {
      fgets(c, 100, fp);
      printf("%s", c);
      if(feof(fp) ) {
         break ;
      }
   }
   fclose(fp);
   return(0);
}
