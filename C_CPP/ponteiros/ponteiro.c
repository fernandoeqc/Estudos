#include <stdio.h>
#include <stdlib.h>
int x = 5, y = 10;

int soma (int *a, int *b)
{
    *a = *a + *b;
    return *a;
}

int main(int argc, char const *argv[])
{
    

    y = soma(&x, &y);
    printf("%u", y);s
    return 0;
}







    