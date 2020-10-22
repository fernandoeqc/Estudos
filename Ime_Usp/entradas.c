#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime (char *txt) {
   printf("%s",txt);
}

int main () {

   char frase[100];

   printf("Digite a frase:\n");
   gets(frase);
   imprime(frase);

   return EXIT_SUCCESS;
}