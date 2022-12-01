#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "algsort.h"

char rand_range [] = {5, 4, 3, 2, 1, 6, 10, 7, 8};

int main(int argc, char const *argv[])
{
    selection_sort (rand_range, sizeof(rand_range));
    print_vector (rand_range, sizeof(rand_range));

    return 0;
}
