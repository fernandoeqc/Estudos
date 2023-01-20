#include "common.h"
#include <stdlib.h>
#include<unistd.h>

void print_vector (int range[], int len_range)
{
    int smalest = range[0];
    for (int i = 0; i < len_range; i++)
    {
        printf("%d, ", range[i]);
    }
    printf("\n");
}

void print_dinam_chart (int range[], int len_range, int major, int minor)
{
    char * s = "-";

    system("clear");
    for (int i = 0; i < len_range; i++)
    {
        if (major == i) { s = "x"; }
        else if (minor == i) { s = "="; }
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

static void print_static_chart(int j)
{
    static int new_i = 0;
    if (j <= new_i)
    {
        printf(".\n");
    }
    new_i = j;

    printf("|");
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}