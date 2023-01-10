#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "algsort.h"

// char rand_range [] = {5, 4, 3, 2, 1, 6, 10, 7, 8};
char rand_range [] = {1, 1, 1, 2, 2, 4, 7, 7, 8, 9, 9, 9, 9, 10, 11, 12, 13,
    15, 15, 19, 19, 20, 21, 21, 21, 21, 22, 23, 23, 23, 27, 29, 29, 31, 31, 
    34, 34, 35, 36, 37, 38, 39, 39, 1,};
// char rand_range [] = {46, 43, 85, 19, 80, 31, 13, 34, 86, 85, 71, 43, 19, 54, 95, 60, 35,
//        39,  2, 71, 95, 43, 20, 83, 23,  1, 39,  1, 53, 52, 55, 21, 68, 78,
//        51, 85, 23, 86, 22, 61, 21, 47, 34, 66,  9, 37, 21, 91, 51, 49, 52,
//        67, 66,  9, 29, 12,  9, 53, 38,  2,  4, 59, 40, 47, 39, 83, 15, 89,
//        95,  7, 23, 27, 88, 11, 48, 42,  9, 89, 47, 36, 21, 59,  8, 42, 71,
//         7, 50, 10, 96, 39, 45, 61, 29,  1, 41, 45, 60, 89, 31, 15};

int main(int argc, char const *argv[])
{
    // selection_sort (rand_range, sizeof(rand_range));
    bubble_sort (rand_range, sizeof(rand_range));

    print_vector (rand_range, sizeof(rand_range));

    return 0;
}
