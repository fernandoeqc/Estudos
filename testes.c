#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inversion (void) {
    char i = 0;
    int v[100];
    
    for (i = 0; i < 100; ++i) v[i] = 99 - i;
    for (i = 0; i < 100; ++i) v[i] = v[v[i]];
    for (i = 0; i < 100; ++i) printf("%d, ", v[i]);
}

int main () {
    

    
    inversion();

    return EXIT_SUCCESS;
}


