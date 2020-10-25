#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma () {
   static int count = 0;
   count++;
}

int main () {

   char frase = 20;


   printf("%d",++frase);
   printf("%d",frase);

   return EXIT_SUCCESS;
}