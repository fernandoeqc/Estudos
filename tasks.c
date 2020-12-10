#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tasks.h"
void
funcaoAuxiliar() {
   printf("FUNCAO AUXILIAR ATIVADA\n");
   printf("conteudo de novo commit\n");
}

void
funcao1 () {
   printf("Esta e a funcao 1\n");
}

int main () {
   static taskFunc imprime;
   imprime.active = TRUE;
   imprime.count_sec = 0;
   imprime.sec = 0;
   imprime.func_time = funcao1;

   
   addTask(&imprime);

   runTasks();

   return EXIT_SUCCESS;
}


