#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f1 (char hello[]) {
    printf("addr: %d \n", &hello);
    f1 (hello);
}

int main () {
    char hello[] = "ola mundo";

    char *hello2 = malloc(sizeof(hello));
    strcpy(hello2, hello);
    printf("hello2: %x \n", hello2);

    return EXIT_SUCCESS; 
}


