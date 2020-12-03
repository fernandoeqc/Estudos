#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tasks.h"

void funcao1 () {
   printf("Esta e a funcao 1");
}

int main () {
   static taskFunc imprime;
   imprime.active = FALSE;
   imprime.count_sec = 0;
   imprime.sec = 0;
   imprime.func_time = funcao1;

   
   addTask(&imprime);

   runTasks();
   return EXIT_SUCCESS;
}


