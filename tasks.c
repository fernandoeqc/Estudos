#ifdef _WIN32
   #include <windows.h>
#else
   #include <unistd.h>
#endif


void delay(int sleepMs)
{
#ifdef _WIN32
    Sleep(sleepMs);
#else
    usleep(sleepMs * 1000);   // usleep takes sleep time in us (1 millionth of a second)
#endif

}


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

   printf("inicio\n");

   delay(1000);
   printf("inicio\n");

   addTask(&imprime);

   //while (TRUE) {
   runTasks();
   //}

   return EXIT_SUCCESS;
}


