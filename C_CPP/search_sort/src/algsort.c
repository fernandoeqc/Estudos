#include "algsort.h"
#include <stdlib.h>
#include<unistd.h>

void print_vector (char range[], int len_range)
{
    char smalest = range[0];
    for (int i = 0; i < len_range; i++)
    {
        printf("%d, ", range[i]);
    }
    printf("\n");
}

void print_dinam_chart (char range[], int len_range, int major, int minor)
{
    char * s = "-";

    system("clear");
    for (int i = 0; i < len_range; i++)
    {
        if (major == i) { s = ">"; }
        else if (minor == i) { s = "<"; }
        else { s = "|"; }

        printf("|");
        for (int j = 0; j < range[i]; j++)
        {
            printf("%s", s);
        }
        printf("|%d\n", range[i]);
    }
    usleep(200 * 1000);
}

void print_static_chart(int j)
{
    static int new_i = 0;
    if (j <= new_i)
    {
        printf(".\n");
    }
    new_i = j;

    printf("|");
}

void selection_sort (char range[], int len_range)
{
    for (int i = 0; i < len_range; i++)
    {
        for (int j = i+1; j < len_range; j++)
        {
            if (range[i] > range[j])
            {
                char tmp = range[i];
                range[i] = range[j];
                range[j] = tmp;
            }
            // print_dinam_chart(range, len_range, i, j);
            print_static_chart(j);
        }
    }
}
