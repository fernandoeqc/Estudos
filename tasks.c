#ifdef _WIN32
   #include <windows.h>
   void
   sleep (unsigned int millisec) {
      Sleep (millisec);
   }
#else 
   #include <unistd.h>
#endif

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
   


   return EXIT_SUCCESS;
}


