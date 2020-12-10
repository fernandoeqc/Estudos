#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tasks.h"

void funcao1 () {
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
<<<<<<< HEAD
   
=======

   system("pause");

>>>>>>> b9bbe772dda466a6bfcf805da1884a397f5bb83d
   return EXIT_SUCCESS;
}


